# Pré-CQI - Ingénierie logicielle

## Réponse 4 - Analyse quantitative de processus (3 points)

a) Le cycle de vie utilisé semble être un cycle de vie incrémental, avec une itération aux quatre semaines. On note un travail sur les exigences à chaque quatre semaine, suivi d’un travail sur le design (dans les semaines qui en font), suivi d’un travail en implémentation, suivi d’un travail sur les tests (dans les semaines qui en font). Cela correspond à des itérations de style cascade correspondant au modèle incrémental. `(1 points)`

b) On note que très peu de tests ont été faits, surtout en fin de projet. Le travail sur le design disparait aussi, ce qui signifie que les dernières itérations ont été des sessions intensives de travail sur le code, au dépend de tout le reste. Une approche itérative indique des rétroactions sur les exigences, qui doivent se refléter par des changements dans le design et le code, et des tests conséquents. L’absence de ce travail indique probablement des problèmes au niveau du design, et aussi beaucoup de bogues non-détectés. `(1 points)`

c) Je commencerais par une évaluation de la qualité architecturale, suivi d’activités de refonte de code (refactoring) appropriées. Par la suite, j’ajouterais les tests unitaires cohérents avec la nouvelle architecture, en faisant les corrections dans le code nécessaires. Finalement, j’écrirais et exécuterais les tests pertinents pour les fonctionnalités de ce nouveau logiciel. `(1 points)`
