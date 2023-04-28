nom = input("quel est ton nom ?")
age = 0
age = input("quel est votre age ?")

try: #demande de "essayer" de faire cet input
	age_suivant = int(age) #pour l'intruction on est oblige de faire une tab

except:
	print("Erreur : vous devez entrer un ombre.")

# print ne peut pas concatener une str avec un int. on doit convertir en utilisant la syntaxe str(variable) dans le cas de print
#  ou int(variable) dans le cas du input

# si on veut stoper l'action, on doit faire un "else" et mettre des tabs pour les print suivants
else:
	print("Vous vous appelez " + nom +  " et vous avez " + str(age) + " ans.")
	print("L'an prochain vous aurez " + str(age_suivant))

# print("nom " + type(nom))
# print("age " + type(age))
