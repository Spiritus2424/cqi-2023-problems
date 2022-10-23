# Pre-CQI 2023

# Judging - Debugging

To judge a submission for the debugging competition, there are a few prerequisites.

## Prerequisites
* Your system may run any operating system you like. However we suggest **Linux**. Either way, you will need the following programs:
  * A c++ compiler, for example: **gcc**, **clang**, **MSCV (Visual Studio)**
  * **cmake**

## Calculating Points

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
