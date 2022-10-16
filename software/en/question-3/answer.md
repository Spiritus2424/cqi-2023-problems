# Pre-CQI - Software Engineering

## Answer 3 - Bad smells (2 points)
a) `(1 points)` Make a percentage of <correct answer>/<Total answer> * 1
| Line      | Error                                                                               |
| --------- | ----------------------------------------------------------------------------------- |
| 1         | Language inconsistency                                                              |
| 1         | Mix of verbs and nouns for values ​​                                                |
| 2         | Must not start with "I" or it must all start with "I"                               |
| 9         | Wrong name                                                                          |
| 26        | httpClient should be injected as a dependency                                       |
| 35        | Return type should be "number \|\| null"                                            |
| 35        | Name should be "findIdWithAddress"                                                  |
| 40        | Unnecessary parameter. "this.transportType" is used in the rest of the function     |
| 47        | useless ternary                                                                     |
| 53        | Inconsistency with other methods: "public" must not be specified                    |
| 67        | Too many interrelated parameters. Should have an interface that encompasses them    |
| 86        | Inconsistency: The other methods are written in "camelCase"                         |
| 91-96-101 | Code duplication                                                                    |
| 107       | Inconsistency: the selector must be in lowercase "kebab-case"                       |
| 111,119   | Attributes should be initialized in the constructor                                 |
| 113       | Type must be "FormGroup" not "any"                                                  |
| 129       | It should not have a comparison with "false". Instead, use "!"                      |
| 129-132   | Must be in the HTML template and not in the component                               |
| 136       | No "catch" after the observable                                                     |
| 138       | Too generic error. Should have a TransportationError class that inherits from Error |
| 151       | Missing return type. Should be "TransportTypes"                                     |

b) `(1 points)` Make a percentage of <correct answer>/<total answer> * 1
| Line      | Error                                                                               |
| --------- | ----------------------------------------------------------------------------------- |
| 10, 11.96 | The word list is unnecessary since it forces restrictions on implementation details |
| 14, 72    | Does not implement the ProjectDataModel interface                                   |
| 14        | Useless abstract class                                                              |
| 33        | Useless double `!!`                                                                 |
| 33        | `if` useless                                                                        |
| 39        | `if` should check if `taskExists` and return `false`                                |
| 58        | Useless `get` function                                                              |
| 62        | Useless `set` function                                                              |
| 66        | The `taskToAdd` name is too specific. The method can be used for something else     |
| 66        | No return type                                                                      |
| 72        | Useless class                                                                       |
| 77, 81    | Presence of public does not respect the convention of the other public functions    |
| 81        | Bad return type                                                                     |
| 98        | Presence of type `any`                                                              |
| 104       | The function must take `title` as a parameter                                       |
| 110-115   | Code duplication (112, 115). Must make an instance of Project only                  |
| 123       | Bad comment (no recursion)                                                          |
| 131       | Bad logic ( `>` instead of `===`)                                                   |
| 140       | Useless `dateTimeService` parameter                                                 |
| 141       | Magic thong                                                                         |
| 145       | No unsubscribe to the Observable                                                    |
| 146       | No error handling                                                                   |
| 149       | `hasLeaf` parameter is useless                                                      |
| 149       | Function name plural instead of singular                                            |