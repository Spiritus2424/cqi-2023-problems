# Pre-CQI 2023
English will follow

# Juger - Déboguage

Pour juger une soumission de la compétition de déboguage, il faut les pré-requis suivants.

## Pré-requis

 * Votre système peut être de n'importequel système d'exploitation, parcontre nous suggérons **Linux**. Toute fois, vous aurez besoin des programmes suivantes: 
   * Un compilateur C++ par exemple: **gcc**, **clang**, **MSVC (Visual Studio)**
   * **cmake**

## Calcul de points

Ce défi vait 10 points. Pour calculer les points, suivez ces étapes.

### Compilation
```shell script
mkdir build
cd build
cmake ..
cmake --build .
```

Si le code compile sans erreur, accordez 4 points


### Éxécution des tests
```shell script
# Dans le dossier build
./test/karaoke_test
```

Il y a 21 tests, accordez 0.28 points par test fonctionnel pour un total de 6 points


# Judging - Debugging

To jusge a submission for the debugging competition, there are a few prerequisites.

## Prerequisites
* Your system may run any operating system you like. However we suggest **Linux**. Either way, you will need the following programs:
  * A c++ compiler, for example: **gcc**, **clang**, **MSCV (Visual Studio)**
  * **cmake**

## Calculation of points

This challenge is worth 10 points. To calculate these points, follow these steps.

### Compilation
```shell script
mkdir build
cd build
cmake ..
cmake --build .
```

If the code compiles without errors, 4 points are to be given


### Execution of Tests
```shell script
# In the build directory
./test/karaoke_test
```
There are 21 tests, give 0.28 points per functional test for a total of 6 points
