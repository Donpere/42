#!/bin/bash

if [ "$#" -lt 1 ]
then
    echo "No arguments supplied"
    exit 1
fi    

# Définir le préfixe souhaité
prefix="ex"

# Initialiser le compteur
i=1

# Boucle while pour créer les dossiers en utilisant < pour la comparaison numérique avec $# pour le nombre d'arguments
while (( "$i" <= "$#" )); do

# Créer le dossier en utilisant le préfixe suivi de l'argument comme suffixe
    mkdir "$prefix${!i}"
    ((i += 1))
done

