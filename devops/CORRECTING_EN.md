# Pre CQI 2023 - DevOps

## Fix Steps

1. Ask them to run `docker run <server-image-name>`
   1. Open on their web browser (chrome, firefox, Safari, etc.) the server on the url `localhost:<PORT>/healthcheck`
   2. If you see `{ alive: true }` then give `(3 points)`
2. Ask them to run `docker run <client-image-name>`
   1. Open on their web browser (chrome, firefox, Safari, etc) the client on the url `localhost:<PORT>/`
   2. If you see a web application open with text `Pre CQI 2023- DevOps - Client` then give `(3 points)`
3. Ask them to run the `docker-compose up` command
   1. Open on their web browser (chrome, firefox, Safari, etc) the client on the url `localhost:<PORT>/`
   2. If you see a web application open with the message *Server is connected* and *Mongo is connected* you give `4 points`, if it has just *Server is connected* or *Mongo is connected* `2 points`, otherwise `0 points`