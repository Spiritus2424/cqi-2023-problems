# Pré CQI 2023 - DevOps (10 points)

## Mise en situation

Vous rencontrez plusieurs problèmes lors des déploiements de votre application:
- Environnement de production n'est pas identique à celui du développement 
- Les étapes pour le déploiement est exhaustive et prone à l'erreur
- Il est difficile et long de configurer son environnement de développement avec toutes les composantes

C'est pour cela que votre équipe décide d'intégrer des notions de DevOps à votre projet à l'aide de Docker. Votre prochaine release est dans quelques heures et votre équipe serait tellement fière de vous si vous arrivez à automatiser le déploiement de l'application.

## Installation de Docker

Installer la version « Community Edition » (CE)
https://docs.docker.com/v17.12/install/

## Remise

1. Supprimez vos (2) dossiers `node_modules`.
2. Créez une archive contenant vos dossiers `client`, `serveur`, votre `docker-compose.yml`.
3. Téléversez l'archive dans le form de l'examen.

## Questions pratiques

*Notez bien que le client et le serveur utilise le package manager `yarn`.*

### Q1 (3 points)

Sous le dossier `server`, vous trouverez un serveur REST simple en JS.

Complétez `server/Dockerfile.prod` en multi-stage avec une étape de build et une autre d'exécution.

Vous devrez être en mesure d'effectuer l'appel REST suivant sur votre serveur dockerisé:

```
GET /healthcheck
```

### Q2 (3 points)

Sous le dossier `client`, vous trouverez une app Angular.

Complétez `client/Dockerfile.prod` en multi-stage avec une étape de build et une autre d'exécution.

Vous devrez être en mesure d'accéder à la page d'accueil à partir de votre navigateur.

### Q3 (2 points)

Complétez le `docker-compose.yml` pour créer un environnement où un client puisse communiquer un le serveur.

Pour vérifier la connexion, vous pouvez vous fier au message *Server is connected* affiché lors du rafraichissement de la page d'accueil du client.

Modifiez au besoin la variable `serverBaseUrl` de `client/src/app/app.component.ts` pour assurer la connexion.

### Q4 (2 points)

Ajoutez au `docker-compose.yml` une instance mongoDB de sorte que le serveur puisse y accéder. 

Pour vérifier la connexion, vous pouvez faire l'appel REST suivant au serveur: 
```
GET /mongo
```
ou vous pouvez vous fier au message *Mongo is connected* affiché lors du rafraichissement de la page d'accueil du client.


Modifiez au besoin la variable `databaseUrl` de `server/src/database.provider.ts` pour assurer la connexion.

