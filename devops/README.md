# Examen CS Games 2019 - DevOps
Par Philippe Rivest

## Mise en situation

Votre équipe de projet 2 manque de communication (as always). Chaque membre implémente sa fonctionnalité dans son coin sans parler à personne. Le jour du merge du sprint, rien ne fonctionne et vous passez les pires 3 heures de votre session. #oddlySpecific

Vous décidez d'intégrer des notions de DevOps à votre projet afin d'éliminer les mauvaises surprises.

## Installation de Docker

Installer la version « Community Edition » (CE)
https://docs.docker.com/v17.12/install/

## Remise

1. Supprimez vos (2) dossiers `node_modules`;
2. Créez une archive contenant vos dossiers `client`, `serveur`, votre `docker-compose.yml` et vos réponses aux questions théoriques;
3. Téléversez l'archive dans le form de l'examen.

## Questions pratiques

*Notez bien que la commande pour exécuter le client ou le serveur est `npm start`.*

### Q1

Sous le dossier `server`, vous trouverez un serveur REST simple en JS.

Complétez `server/Dockerfile` en multi-stage avec une étape de build et une autre d'exécution.

Vous devrez être en mesure d'effectuer l'appel REST suivant sur votre serveur dockerisé:

```
GET /healthcheck
```

### Q2

Sous le dossier `client`, vous trouverez une app Angular.

Complétez `client/Dockerfile` en multi-stage avec une étape de build et une autre d'exécution.

Vous devrez être en mesure d'accéder à la page d'accueil (`index.html`) et d'y voir:

> client app is running!

### Q3

Complétez le `docker-compose.yml` pour créer un environnement où un client puisse communiquer un le serveur.

Pour vérifier la connexion, vous pouvez vous fier au message *Server is connected* affiché lors du rafraichissement de la page d'accueil du client.

Modifiez au besoin la variable `serverBaseUrl` de `client/src/app/app.component.ts` pour assurer la connexion.

### Q4

Ajoutez au `docker-compose.yml` une instance mongoDB de sorte que le serveur puisse y accéder. 

Pour vérifier la connexion, vous pouvez faire l'appel REST suivant au serveur: 
```
GET /mongo
```

Modifiez au besoin la variable `url` de `server/routes/index.js` pour assurer la connexion.

## Questions théoriques

Veuillez répondre aux questions dans un fichier `.txt`

### Q5

Décriver Kubernetes (k8s) dans vos mots.

### Q6

Quelle est la différence entre une node et un pod k8s?

### Q7

Qu'est-ce que le Horizontal Pod Scaling? En quoi est-ce utile?

### Q8

Dénombrez trois avantages d'implanter un pipeline de CI/CD dans un projet.
