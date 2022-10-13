# Pré-CQI 2022 - Web (10 points)

 *(for english, check README_EN.md in this folder)* 

**NOTE**: Il y a des similarités avec le défi mobile, mais ce n'est pas 100% identique, portez attention.

## Mise en situation

Le Potato Cloud Fest vous confie le mandat de rebâtir leur site web *from scratch*! C'est une ressource importante pour tous les gens qui veulent se renseigner sur le festival. On veut un beau design qui va convaincre ceux qui considèrent y aller de s'acheter un billet, et donner hâte à ceux qui ont déjà le leur.


## Technologie

Vous êtes libre d'utiliser les technologies que vous désirez. On vous demande seulement de faire la partie *frontend*, vous pouvez donc *hardcoder* vos données directement dans votre code.

[todo] suggerer des frameworks?

## Page principale (2 points)

La page principale doit contenir:

- Les dates du festival (26-29 janvier 2023)
- Lieu du festival (todo ?)
- Le logo du festival
- Un menu avec ces différentes options*:
    - Billeterie
    - Programmation
    - Infos pratiques
    - FAQ
    - Nous joindre
- Un décompte jusqu'au début de l'événement (26 janvier 2023)

*Vous pouvez modifier le titre des sections pour les rendre plus courts/catchy, soyez créatif/ves!

## Page des tarifs/billeterie (2 points)

Cette page a pour but de montrer aux utilisateurs les différentes options de billets pour l'événement et d'ajouter une option à un panier d'achat. On ne vous demande pas d'implémenter la section pour compléter l'achat.

La page des tarifs doit contenir:
- La liste des différents billets et bundles qui peuvent être achetés (consultez le document `tickets.txt`). Pour chaque option:
    - Nom
    - Prix
    - Description
    - Bouton pour ajouter au panier
- Panier d'achat qui contient les éléments ajoutés
    - Note: pas besoin de l'intégrer au menu comme la plupart des sites, il peut être seulement sur cette page-là

## Page de la programmation (3 points)

Cette page permet aux visiteurs du site de consulter l'horaire complet.

La page de la programmation doit contenir:
- Une/des grille(s) de l'horaire du festival (consultez le document ``schedule.txt`.txt`). Vous choisissez comment organiser les données (par date, lieu, type, etc.)
- Chaque événement dans ``schedule.txt`.txt`, intégré à la grille
    - Nom
    - Date et heure
    - Lieu
    - Type
- Lorsqu'on clique sur un événement dans la grille, un popup contenant
    - Nom, date, heure, lieu, type
    - Description brève

## Page FAQ (2 points)

La page FAQ doit contenir:
- Minimum 10 questions (total) séparées en 3 sections
    - Par exemple, les sections:
        - Objets permis/interdits
        - Accès au site
        - Vente et livraison des billets
- Un lien vers la page Nous joindre

Vous pouvez inventer les questions, réponses et sections. Vous ne serez pas notés sur le contenu.

## Page Nous joindre (1 point)

La page Nous joindre doit montrer aux visiteurs du site les différentes option pour contacters le comité organisateur du festival.

La page Nous joindre doit contenir:
- Coordonnées des organisateurs
    - Téléphone
    - Adresse postale
    - Adresse courriel
- Section pour envoyer un message
    - Input pour nom
    - Input pour courriel
    - Input pour téléphone
    - Input pour message