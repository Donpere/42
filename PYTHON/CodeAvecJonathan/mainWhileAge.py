nom = input("quel est ton nom ?")
age_suivant = 0

while age_suivant == 0:
    age = input("Quel est votre age ? ")
    try: 
	    age_suivant = int(age) + 1
    except:
	    print("Erreur : vous devez entrer un ombre.")

print("Vous vous appelez " + nom + " vous avez " + str(age))
print("L'an prochain vous aurez " + str(age_suivant))
print("Fin de la boucle")
