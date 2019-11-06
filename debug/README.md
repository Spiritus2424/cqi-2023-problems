# Examen CS Games 2019 - Debug
Par Philippe Rivest

## Mise en situation

Cela fait une semaine que vous révisez pour votre cours d'INF1010.
Tout cela vous trotte dans la tête comme le
[gif de la bonne femme qui pense à de la trigo](https://tenor.com/view/confused-math-what-wtf-peep-gif-6081931).
Comme tout bon étudiant de Polytechnique, vous allez à la Maiz la veille
pour vous changer les idées.

**À VOTRE GRAND BONHEUR, c'est karaoke night!** Les demandes spéciales
et les verres s'empilent quand **TOUT D'UN COUP, RIEN NE VA PLUS**:

Les concepts de C++ du cours envahissent le bar! Plus rien ne
fonctionne! Les chanteurs en forme de pointeurs chantent de plus en plus
faux, les foncteurs oublient les paroles, l'héritage multiple renverse
son verre sur la pauvre animatrice de la soirée pis le T)@#*&$?NAK de
QT demande 10000x « Sous le vent » pour ses potes français du coup.

Outillé pour régler ces problèmes, vous décidez d'intervenir. Vous vous
engagez à déboguer `karaoke_lib` pour sauver la soirée!

## Instructions

**Ne pas modifier les tests SINON VOUS ÊTES COUPÉS**

* Vous devez faire compiler l'ensemble du code et faire passer **TOUS** les tests;
* Les bogues sont dans les fichiers dans le dossier `src/`;
* Les fichiers `CMakeLists.txt` sont sans erreurs;
* Ne pas modifier les tests **SINON VOUS ÊTES COUPÉS**;
* GL;HF

**Ne pas modifier les tests SINON VOUS ÊTES COUPÉS** (Stu clair?)

## Remise

Faites une archive du code dans le dossier `src`.

## Setup

0) Clone Catch
```shell script
git submodule init
git submodule update
```

1) Créez un dossier build
```shell script
mkdir build
cd build
```

2) Initialisez CMake
```shell script
cmake ..
```

## Compiler et exécuter
```shell script
make -j4
./test/csgames_2020_debug_test -s
```

## Installation de CMake

### macOS
Via [Homebrew](https://brew.sh/): 
```shell script
brew install cmake
```

### Windows 
*lol, pas de Visual Studio pour toi aujourd'hui*

[Windows win64-x64 Installer](https://github.com/Kitware/CMake/releases/download/v3.16.0-rc1/cmake-3.16.0-rc1-win64-x64.msi) via https://cmake.org/download/

### Ubuntu
```shell script
sudo apt install -y cmake
```

### Arch
[Tu sais probablement mieux que moi...](https://www.youtube.com/watch?v=-OHiEzz8oBw&feature=youtu.be&t=132)
