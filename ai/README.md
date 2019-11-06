# Examen CS Games 2019 - AI
Par Philippe Rivest

## Mise en situation

Vous savez comme moi que certains examens à Polytechnique requièrent autant de connaissances que de chance pour une bonne réussite.
Pour vous exercer, vous décidez de jouer à un jeu qui nécessite le même mélange de joyeux hasards et de savoir: **Le BATTLESHIP**.
Puisque vous êtes paresseux et vous connaissez un peu le Python, vous décidez de faire un Bot qui jouera à votre place. Si seulement ce même résonnement s'appliquait aux exams... 😿

## Battleship pour les nuls

Cinq navires de largeur 1 et de longueur variable sont disposés secrètement sur une grille de taille 10x10.
À chaque tour, vous devez énoncer une case où vous soupçonnez la présente d'une partie d'un navire quelconque.
Vous saurez immédiatement s'il s'agit d'un tir réussi (touché), d'un tir manqué (dans l'eau lololol rip) ou d'un tir fatal (coulé).
Vous gagnez si vous faites couler tous les navires adverses. **Veuillez noter qu'il s'agit d'une version à un joueur de Battleship. Votre but est d'écrire une IA qui minimise le nombre de tous requis pour faire couler les navires.**

## Instructions

**Ne pas modifier autre chose que `Bot.py` SINON VOUS ÊTES COUPÉS**

* Vous devez implanter la méthode `do_turn` de `Bot.py`;
* Cette dernière doit retourner une paire (tuple) ayant:
    * Première composante: la lettre de la colonne désirée (A à J)
    * Deuxième composante: l'index de la rangée désirée (\[0, 9\])
* Vous pouvez ajouter des attributs à la classe `Bot` comme vous voulez
* GL;HF

## Évaluation

Vous serez évalués en fonction de la moyenne du nombre de tours requis pour couler tous les navires.

* Si votre bot prend plus que 90 tours à faire couler tous les navires, l'exécution est stoppée ✂✂✂
* Si votre bot est capable de battre le jeu en moins de 20 tours, j'appelle les inquisiteurs espagnols!

## Remise

Vous devez remettre le fichier `Bot.py`, tout simplement.

## Dépendances

Python 3.7+ avec aucun module supplémentaire

*L'exam a été fait sous 3.7.5. Je pense que ça ne peut pas fonctionner en dessous de 3.6.*

## Exécuter
```shell script
python3 Main.py
```