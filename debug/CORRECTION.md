# Pre-CQI 2023

# Correction - Déboguage

Pour corriger une soumission du défi de déboguage, il faut les pré-requis suivants.

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
