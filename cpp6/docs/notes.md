# Static cast

Les casts statiques ne peuvent se faire qu'entre variables de la meme taille.
Ils sont surtout utilises pour expliciter le code, ils ne sont pas necessaires et ne chagent
pas le comportement du programme.

__Synthax__ : static\_cast<type>(var)

# Reinterpret cast

Les casts reinterpretant ne sont utilisable que par des pointeurs, elle servent a interpreter des
données pointés sous une autre forme.
Reinterpreter un int \* en char \* fera lire les données un octet par un octet au lieu de 4 par 4
en int.

__Synthax__ : reinterpret\_cast<type>(var)

# dynamic cast

Les casts dynamiques sont des casts effectués à l'execution du code et non à la compilation.
Ce cast ne concerne aussi que les pointeurs et references.

Le dynamic cast permet de caster des pointeurs/references vers des objets.

__Synthax__ : dynamic\_cast<type>(var)

# Up and Downcasting

Ce type de classe permet à un pointeur ou a une reference de caster en classe de base (classe mère)
ou classe dérivé (classe fille).

L'upcasting caste un objet dans un pointeur ou une reference mère, il n'y a pas de synthax particulère, c'est quelque chose qu'on à déjà utilisé dans les autres Days.

Le downcasting caste dans une classe fille, il faut speficier le type par la même synthax qu'en C.


