const form = document.getElementById('signup-form');

form.addEventListener('submit', (event) => {
  event.preventDefault();

  const username = form.elements.username.value;
  const password = form.elements.password.value;

  if (!isValidUsername(username)) {
    alert('Le nom d\'utilisateur doit contenir au moins 3 caractères');
    return;
  }

  if (!isValidPassword(password)) {
    alert('Le mot de passe doit contenir au moins 8 caractères dont des lettres, des chiffres et des caractères spéciaux');
    return;
  }

  createUser(username, password);
});

function isValidUsername(username) {
  return username.length >= 3;
}

function isValidPassword(password) {
  const regex = /^(?=.*[A-Za-z])(?=.*\d)(?=.*[@$!%*#?&])[A-Za-z\d@$!%*#?&]{8,}$/;
  return regex.test(password);
}

async function createUser(username, password) {
  const response = await fetch('/api/users', {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json'
    },
    body: JSON.stringify({
      username,
      password
    })
  });

  if (response.ok) {
    alert('Compte créé avec succès!');
  } else {
    alert('Erreur lors de la création du compte');
  }
}
