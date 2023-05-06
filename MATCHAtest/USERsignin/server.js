const express = require('express');
const MongoClient = require('mongodb').MongoClient;

const app = express();
const port = 3000;

// Middleware pour parser le corps des requêtes HTTP en JSON
app.use(express.json());

// Connexion à la base de données MongoDB
const url = 'mongodb://localhost:27017';
const dbName = 'dbMatcha';

MongoClient.connect(url, (err, client) => {
  if (err) {
    console.log('Erreur de connexion à la base de données :', err);
  } else {
    console.log('Connecté à la base de données avec succès');
    const db = client.db(dbName);

    // Créer une collection pour les utilisateurs
    const usersCollection = db.collection('users');

    // Route pour créer un compte utilisateur
    app.post('/api/users', (req, res) => {
      const { nom, motDePasse } = req.body;

      // Vérifier que le mot de passe a au moins 8 caractères, dont des lettres, au moins 1 chiffre et au moins 1 caractère spécial
      const regex = /^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*#?&])[A-Za-z\d@$!%*#?&]{8,}$/;
      if (!regex.test(motDePasse)) {
        res.status(400).send('Le mot de passe doit avoir au moins 8 caractères, dont des lettres, au moins 1 chiffre et au moins 1 caractère spécial');
        return;
      }

      // Insérer l'utilisateur dans la collection
      const utilisateur = { nom, motDePasse };
      usersCollection.insertOne(utilisateur, (err, result) => {
        if (err) {
          console.log('Erreur lors de l\'insertion de l\'utilisateur :', err);
          res.status(500).send('Erreur serveur');
        } else {
          console.log('Utilisateur créé avec succès :', utilisateur);
          res.status(201).send('Utilisateur créé avec succès');
        }
      });
    });
  }
});

// Démarrer le serveur
app.listen(port, () => {
  console.log(`Serveur démarré sur le port ${port}`);
});
