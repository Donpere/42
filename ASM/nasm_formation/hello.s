; section = [BSS, RODATA, TEXT]
; BSS => section ou l'on stocke les variables non initialisees. ex : char buffer[256];
; RODATA => section ou l'on stocke les variables initialisees. ex : int age = 1337; char buffer[] = "hello world"
; TEXT => code qui va etre exectute, code global du script, etiquettes, fonctions, utilisation des syscall

; L’instruction goto permet de sauter à un point précis du programme que nous aurons déterminé à l’avance. 
; Pour ce faire, le langage C nous permet de marquer des instructions à l’aide d’étiquettes (labels en anglais). 
; Une étiquette n’est rien d’autre qu’un nom choisi par nos soins suivi du catactère :. 
; Généralement, par souci de lisibilité, les étiquettes sont placées en retrait des instructions qu’elles désignent
; ex : for (i = 2; i <= min; ++i)
;        if (a % i == 0 && b % i == 0)
;            goto TROUVE;
;    return 0;
; TROUVE:
;    printf("le plus petit diviseur de %d et %d est %d\n", a, b, i);
;    return 0;

; GLOBAL prend un parametre qui est une etiquette, par exemple "global_start"
; "objdump -d -M intel a.out" est une commande shell permettant de desassembler le fichier pour voir les instructions
; il existe deux syntaxes : intel ou AT&T (UNIX, ex : GAS, assembleur du projet GNU)