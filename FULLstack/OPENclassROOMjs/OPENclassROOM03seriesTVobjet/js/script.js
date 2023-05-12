// Create Object here
// =========================================
let episode=
{
	title:	"Dune",
	duration:	120,
	hasBeenWatched: true
};


// =========================================

document.querySelector('#episode-info').innerText = `Episode: ${episode.title}
Duration: ${episode.duration} min
${episode.hasBeenWatched ? 'Already watched' : 'Not yet watched'}`