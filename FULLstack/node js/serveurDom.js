// Test pour vérifier le fonctionnement de Node.js
//console.log("Hello, Node.js!");

const express = require('express'); // On importe la bibliothèque Express
const app = express(); // On crée une instance de l'application Express

const fs = require('fs'); // On importe le module FileSystem de Node.js
const path = require('path'); // On importe le module Path de Node.js

/* Middleware 1 : le logger
La constante loggerMiddleware est un middleware qui permet d'afficher dans la console la date, 
la méthode HTTP et l'URL originale de la requête. C'est une fonction qui prend 3 arguments : req, res et next.
*/
const loggerMiddleware = (req, res, next) => 
{
  const logFilePath = path.join(__dirname, 'access.log'); // On crée le chemin absolu du fichier de journalisation
  const logStream = fs.createWriteStream(logFilePath, { flags: 'a' }); // On crée un flux d'écriture pour le fichier de journalisation
  
  // Ligne qui récupère l'adresse IP à partir des en-têtes HTTP ou de l'adresse IP de la connexion, 
  // en fonction de la manière dont le serveur est configuré
  const ip = req.headers['x-forwarded-for'] || req.connection.remoteAddress;
  
  // On enregistre les informations dans le fichier de journalisation
  logStream.write(`[${new Date().toISOString()}] ${ip} ${req.method} ${req.originalUrl}\n`);
  
  // On affiche les informations dans la console
  console.log(`[${new Date().toISOString()}] ${ip} ${req.method} ${req.originalUrl}`);
  
  next();
}


/* Middleware 2 : le body-parser
La méthode app.use() permet d'utiliser le middleware express.urlencoded() 
qui permet de récupérer les données envoyées dans le corps de la requête HTTP.
*/
app.use(express.urlencoded({ extended: true }));

/* Route 1 : la page d'accueil
app.get() crée une route HTTP en utilisant la méthode GET. 
On en a deux ici : une pour la page d'accueil ('/') et une pour la page "À propos" ('/about').
*/
app.get('/', loggerMiddleware, (req, res) => 
{
  res.send('Bienvenue sur la page d\'accueil !');
});

// Route 2 : la page "À propos"
app.get('/about', loggerMiddleware, (req, res) => 
{
  res.send('À propos de nous');
});

/* Middleware 3 : la fonction de traitement des erreurs
app.use() crée un middleware de traitement des erreurs qui est appelé 
lorsque la requête HTTP ne correspond à aucune route précédemment définie.
*/
app.use((req, res, next) => 
{
  res.status(404).send('Désolé, la page demandée est introuvable');
});

/* On lance le serveur sur le port 3000
Enfin, app.listen() permet de démarrer le serveur Express sur le port 3000.
*/
app.listen(3000, () => 
{
  console.log('Le serveur est démarré sur le port 3000');
});

