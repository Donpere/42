// Create variables here
// =========================================
let episodeTitle = "salut les copains";
let episodeDuration = 52;
let hasBeenWatched = false;


// =========================================

document.querySelector('#episode-info').innerText = 
`Episode: ${episodeTitle}
Duration: ${episodeDuration} min
${hasBeenWatched ? 'Already watched' : 'Not yet watched'}`