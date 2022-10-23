# Pré CQI 2023 - DevOps

## Étapes de correction

1. Demander leur de rouler la commande `docker run <nom-de-l'image-serveur>`
   1. Ouvrir sur leur navigateur web (chrome, firefox, Safari, etc) le serveur sur l'url `localhost:<PORT>/healthcheck`
   2. Si vous voyez `{ alive: true }` alors donner `(3 points)`
2. Demander leur de rouler la commande `docker run <nom-de-l'image-client>`
   1. Ouvrir sur leur navigateur web (chrome, firefox, Safari, etc) le client sur l'url `localhost:<PORT>/`
   2. Si vous voyez une application web ouvrir avec un texte `Pre CQI 2023- DevOps - Client` alors donner `(3 points)`
3. Demander leur de rouler la commande `docker-compose up`
   1. Ouvrir sur leur navigateur web (chrome, firefox, Safari, etc) le client sur l'url `localhost:<PORT>/`
   2. Si vous voyez une application web ouvrir avec le message *Server is connected* et *Mongo is connected* vous donnez `4 points`, si il a juste *Server is connected* ou *Mongo is connected* `2 points`, sinon `0 points`