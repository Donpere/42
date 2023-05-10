// on peut declarer une variable en utilisant var ou let

// var est pris en charge partout
// let à condition que vous utilisiez une version d'ECMAScript 
// (la spécification JavaScript) qui prend en charge 
// la déclaration de variables avec let. 
// La version minimale d'ECMAScript qui prend en charge let 
// est ECMAScript 6 (ES6), également appelée ECMAScript 2015.

// la portee de var est au sein de la fonction
// defini par le mot cle : function

// la portee de let est au sein du bloc, section de code délimitée par une paire d'accolades { }
// exemple boucle if ou while

var numberOfCats = 'Cat';
var numberOfDogs = 4;

document.getElementById("nbCat").innerHTML = numberOfCats;
document.getElementById("nbDog").innerHTML = numberOfDogs;