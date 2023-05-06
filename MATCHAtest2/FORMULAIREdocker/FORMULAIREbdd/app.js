/*
Ce code définit une fonction appelée envoyerFormulaire() qui est appelée lorsque l'utilisateur soumet le formulaire
en cliquant sur le bouton "Envoyer". 
Cette fonction récupère les valeurs saisies par l'utilisateur dans les champs du formulaire, 
puis envoie ces données à un serveur Node.js qui va les stocker dans une base de données MongoDB.

Pour envoyer les données à notre serveur, nous utilisons un objet XMLHttpRequest 
qui permet de faire des requêtes HTTP asynchrones en JavaScript. 
Nous envoyons les données en tant que JSON en définissant l'en-tête Content-Type 
à "application/json;charset=UTF-8". 

Nous affichons également un message de confirmation en utilisant la fonction alert().

Notez que nous devrons également écrire le code du serveur Node.js 
qui va gérer les requêtes POST à l'URL /api/formulaire. 
Nous allons écrire ce code dans le fichier server.js que nous verrons dans la prochaine étape.
*/

function envoyerFormulaire() {
	// Récupération des valeurs du formulaire
	const nom = document.getElementById("nom").value;
	const prenom = document.getElementById("prenom").value;
	const email = document.getElementById("email").value;
	const telephone = document.getElementById("telephone").value;
  
	// Envoi des données à la base de données MongoDB
	const xhttp = new XMLHttpRequest();
	xhttp.open("POST", "/api/formulaire", true);
	xhttp.setRequestHeader("Content-Type", "application/json;charset=UTF-8");
	xhttp.send(JSON.stringify({ nom, prenom, email, telephone }));
  
	// Affichage d'un message de confirmation
	alert("Formulaire envoyé !");
  }
  