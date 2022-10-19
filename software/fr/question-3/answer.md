# Pré-CQI - Ingénierie logicielle

## Réponse 3 - Mauvaises odeurs (2 points)

a) `(1 points)` Faites un pourcentage de <bonne réponse>/<Total de réponse> * 1
| Ligne     | Erreur                                                                                 |
| --------- | -------------------------------------------------------------------------------------- |
| 1         | Incohérence de langue                                                                  |
| 1         | Mélange de verbes et noms pour les valeurs                                             |
| 2         | Ne doit pas commencer par "I" ou elle doit tous commencer par "I"                      |
| 9         | Mauvais nom                                                                            |
| 26        | httpClient devrait être injecté comme une dépendance                                   |
| 35        | Type de retour doit être "number \|\| null"                                            |
| 35        | Nom devrait être "findIdWithAddress"                                                   |
| 40        | Paramètre inutile. "this.transportType" est utilisé dans le reste de la fonction       |
| 47        | Ternaire inutile                                                                       |
| 53        | Incohérence avec les autres méthodes: "public" ne doit pas être spécifié               |
| 67        | Trop de paramètres interreliés. Devrait avoir une interface qui les englobe            |
| 86        | Incohérence: Les autres méthodes sont écrites en "camelCase"                           |
| 91-96-101 | Duplication de code                                                                    |
| 107       | Inchoérence: le sélecteur doit être en "kebab-case" minuscule                          |
| 111,119   | Les attributs devraient être initialisés dans le constructeur                          |
| 113       | Le type doit être "FormGroup" et non "any"                                             |
| 129       | Il ne devrait pas avoir une comparaison avec "false". Utiliser plutôt "!"              |
| 129-132   | Doit être dans le template HTML et non dans le component                               |
| 136       | Pas de "catch" après l'observable                                                      |
| 138       | Erreur trop générique. Devrait avoir une classe TransportationError qui hérite d'Error |
| 151       | Type de retour manquant. Devrait être "TypesDeTransport"                               |

b) `(1 points)` Faites un pourcentage de <bonne réponse>/<Total de réponse> * 1
| Ligne     | Erreur                                                                                     |
| --------- | ------------------------------------------------------------------------------------------ |
| 10, 11,96 | Le mot list est inutile puisque ça force des restrictions sur les détails d'implémentation |
| 14, 72    | N'implémente pas l'interface ProjectDataModel                                              |
| 14        | Classe abstraite inutile                                                                   |
| 33        | Double `!!` inutile                                                                        |
| 33        | `if` inutile                                                                               |
| 39        | `if` devrait vérifier si `taskExists` et retourner `false`                                 |
| 58        | Fonction `get` inutile                                                                     |
| 62        | Fonction `set` inutile                                                                     |
| 66        | Le nom `taskToAdd` est trop spécifique. La méthode peut être utilisée pour autre chose     |
| 66        | Pas de type de retour                                                                      |
| 72        | Class inutile                                                                              |
| 77, 81    | Présence de public ne respecte pas la convention des autres fonctions publiques            |
| 81        | Mauvais type de retour                                                                     |
| 98        | Présence de type `any`                                                                     |
| 104       | La fonction doit prendre `title` en paramètre                                              |
| 110-115   | Duplication de code (112, 115). Faut faire une instance de Project seulement               |
| 123       | Commentaire erroné (pas de récursivité)                                                    |
| 131       | Mauvaise logique ( `>` au lieu de `===`)                                                   |
| 140       | Paramètre `dateTimeService` inutile                                                        |
| 141       | String magique                                                                             |
| 145       | Aucun unsubscribe à l'Observable                                                           |
| 146       | Pas de gestion d'erreurs                                                                   |
| 149       | Paramètre `hasLeaf` est inutile                                                            |
| 149       | Nom de fonction au pluriel au lieu de singulier                                            |
