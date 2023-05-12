// Create your variables here
// ==========================================

const nomSociety = 'Chiclic';
var numberOfSeasons = 6;
var numberOfEpisodes = 12;
let episodeTime = 45;
let commercialTime = 5;

let totalShowTime = numberOfEpisodes * numberOfSeasons * (episodeTime + commercialTime);

let sctyOnglet, paragraph1, paragraph2;

// ==========================================

sctyOnglet = document.querySelector('#nmScty');

	sctyOnglet.innerText = `${nomSociety}`;

paragraph1 = document.querySelector('#info1');

	paragraph1.innerText = `${numberOfSeasons} seasons, ${numberOfEpisodes} episodes per season`;

paragraph2 = document.querySelector('#info2');

	paragraph2.innerText = `${totalShowTime} minutes`;


