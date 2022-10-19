# Pre CQI 2023
English will follow

## Défi de déboguage

Tout système aura un jour des bogues. Ce défi cert a évaluer vos capacités a déboguer une application. Vous aurez a déboguer une aplication de karaoke. 

## Pré-requis

 * Votre système peut être de n'importequel système d'exploitation, parcontre nous suggérons **Linux**. Toute fois, vous aurez besoin des programmes suivantes: 
   * Un compilateur C++ par exemple: **gcc**, **clang**, **MSVC (Visual Studio)**
   * **cmake**

## Instructions

* Vous devez réparer le code dans `src/` pour qu'il puisse compiler et passer les tests
* Les fichiers `CMakeLists.txt` sont sans erreurs et ne doivent pas être modifiés
* Les tests dans `tests/` sont sans erreurs et ne doivent pas être modifiés. Tout erreur de compilation et de test doivent être réparé en modifiant le code dans `src/`

## Compilation et éxécution de tests

### Compilation
```shell script
mkdir build
cd build
cmake ..
cmake --build .
```

### Éxécution des tests
```shell script
# Dans le dossier build
./test/csgames_2020_debug_test
```

## Remise
Vous devez remettre une archive avec les fichiers dans `src/`

---

## Debugging Challenfe

All systems will one day have bugs. This challenge serves to evaluate your debugging skills. You will have to debug a karaoke app.

## Prerequisites
* Your system may run any operating system you like. However we suggest **Linux**. Either way, you will need the following programs:
  * A c++ compiler, for example: **gcc**, **clang**, **MSCV (Visual Studio)**
  * **cmake**

 ## Instructions

* You must fix the code located in `src` to make it compile and pass the tests
* The `CMakeLists.txt` file do not contain any errors and must not be modified.
* The tests located in `tests/` do not contain any errors and must not be modified. All compilation errors and test errors must be fixed by modifying the code in `sec/`

## Compiling and running tests

### Compilation
```shell script
mkdir build
cd build
cmake ..
cmake --build .
```

### Running the tests
```shell script
# In the build directory
./test/csgames_2020_debug_test
```

## Delivery
You must deliver an archive containing the files in `src/`
