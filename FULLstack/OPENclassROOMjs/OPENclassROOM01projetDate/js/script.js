const projetDate = 'Projet Date';

let prDatOnglet;

const hoursPerDay = 24;
const minutesPerHour = 60;
const secondsPerMinute = 60;

// creation des const liees aux id

// pour l'entree

const dayInput = document.querySelector('#day-input');
const calculateButton = document.querySelector('#calculate-button');

// pour la sortie
const hours = document.querySelector('#hours');
const minutes = document.querySelector('#minutes');
const seconds = document.querySelector('#seconds');


// addEventListener est une méthode qui permet de lier un événement à un élément HTML. 
// Dans ce cas, on utilise calculateButton.addEventListener('click', () => {...}) 
// pour lier l'événement "click" sur l'élément HTML qui a l'ID "calculate-button" 
// (défini dans le HTML avec <button id="calculate-button">Calculate!</button>) 
// à une fonction fléchée anonyme.

// La fonction fléchée anonyme est définie comme un bloc de code entre les accolades {...} 
// qui s'exécute lorsque l'utilisateur clique sur le bouton "Calculate!" 
// (i.e. lorsqu'un événement "click" est déclenché sur cet élément).

calculateButton.addEventListener
('click', () => {
  
  // recup de la valeur saisie
  let days = dayInput.value;

  let calcHours = days * hoursPerDay;
  let calcMinutes = calcHours * minutesPerHour;
  let calcSeconds = calcMinutes * secondsPerMinute;
  

  hours.innerText = `${calcHours} hours`;
  minutes.innerText = `${calcMinutes} minutes`;
  seconds.innerText = `${calcSeconds} seconds`;
});

// la syntaxe pour appeler une méthode sur un objet est : 
// objet.methode(argument1, argument2, ...)

// -> objet est l'objet sur lequel on appelle la méthode
// -> methode est le nom de la méthode que l'on souhaite appeler
// -> argument1, argument2, etc. sont les arguments éventuels 
// que la méthode prend en entrée.

// Dans le cas de document.querySelector('#nmScty'), 
// document est l'objet sur lequel on appelle la méthode querySelector,
// #nmScty est l'argument que l'on passe à cette méthode.

prDatOnglet = document.querySelector('#pDate');

// prDatOnglet est une variable qui a été initialisée 
// avec la méthode querySelector 
// qui permet de récupérer un élément du document HTML 
// en fonction d'un sélecteur CSS donné.

// Ensuite, innerText est une propriété qui permet de récupérer 
// ou de définir le texte à l'intérieur d'un élément HTML. 
// Dans ce cas, on utilise la syntaxe avec les backticks (${projetDate}) 
// pour insérer la valeur de la variable projetDate 
// à l'intérieur de la chaîne de caractères.

// Ainsi, avec la ligne de code prDatOnglet.innerText = `${projetDate}`;
// on modifie le texte à l'intérieur de l'élément HTML sélectionné 
// par la variable prDatOnglet en y insérant la valeur 
// de la variable projetDate.

	prDatOnglet.innerText = `${projetDate}`;




