/*
Ce code définit un serveur Node.js qui écoute les requêtes HTTP sur le port 3000. 
Lorsque le serveur reçoit une requête POST à l'URL /api/formulaire, 
il se connecte à la base de données MongoDB et insère les données du formulaire dans la collection 
"formulaire". Une fois l'insertion terminée, le serveur envoie une réponse HTTP 200 OK au client.

Nous utilisons le module express pour créer notre application Node.js. 
Nous utilisons également le module body-parser pour pouvoir récupérer les données envoyées en JSON 
dans les requêtes HTTP POST.

Notez que nous avons défini l'URL de connexion à la base de données MongoDB dans la variable url. 
Cette URL utilise l'hôte localhost, le port 27017 (par défaut pour MongoDB) 
et le nom de la base de données formulairebdd. Nous avons également défini le nom de la collection 
qui va stocker les données du formulaire ("formulaire").

Assurez-vous d'avoir lancé votre instance MongoDB avant de lancer le serveur Node.js.

Pour lancer une instance MongoDB, vous devez utiliser le programme mongod. 
Ce programme doit être installé sur votre ordinateur et doit être disponible dans votre PATH.

Pour lancer une instance MongoDB, vous pouvez ouvrir un terminal et exécuter la commande suivante :

mongod

Cela lancera une instance MongoDB qui écoute sur le port par défaut (27017) 
et stocke les données dans le répertoire par défaut (/data/db sur Linux et macOS, C:\data\db sur Windows).

Si vous souhaitez spécifier un autre port ou un autre répertoire de données, 
vous pouvez utiliser les options --port et --dbpath. Par exemple :

mongod --port 12345 --dbpath /var/lib/mongodb

Cela lancera une instance MongoDB qui écoute sur le port 12345 et stocke les données dans le répertoire /var/lib/mongodb.
*/


const express = require("express");
const bodyParser = require("body-parser");
const MongoClient = require("mongodb").MongoClient;

const app = express();
const port = 3000;

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

// URL de connexion à la base de données MongoDB
const url = "mongodb://localhost:27017/formulairebdd";

// Middleware pour gérer les requêtes POST à l'URL /api/formulaire
app.post("/api/formulaire", (req, res) => {
  // Connexion à la base de données MongoDB
  MongoClient.connect(url, (err, client) => {
    if (err) throw err;

    // Récupération de la collection "formulaire"
    const db = client.db("formulairebdd");
    const collection = db.collection("formulaire");

    // Insertion des données du formulaire dans la base de données
    collection.insertOne(req.body, (err, result) => {
      if (err) throw err;

      // Fermeture de la connexion à la base de données
      client.close();

      // Envoi d'une réponse HTTP 200 OK
      res.sendStatus(200);
    });
  });
});

// Démarrage du serveur Node.js
app.listen(port, () => {
  console.log(`Serveur démarré sur le port ${port}`);
});
