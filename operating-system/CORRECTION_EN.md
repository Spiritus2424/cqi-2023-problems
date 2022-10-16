# Pre CQI 2023 - Operating System (10 points)

## Get execution time

When we ask to note the time after rolling an order, here is an image that explains what you need to check.

![alt text](elapsedTime.PNG "Image")


## Correction step
1. Have the teams run the `make run-serial` command. `(2 points)`
   1. Note the time written just before the word *elapsed*
2. Have teams run the `make run-pthread` command `(2 points)`
   1. Note the time written just before the word *elapsed*
3. Have teams run the `make run-tbb` command `(2 points)`
   1. Note the time written just before the word *elapsed*
4. Ask the teams to roll the file `check.sh` `(2 points)`

If the time listed for the command `make run-serial` > `make run-pthread` > `make run-tbb` and the `check.sh` file in step 4 does not output any error then you can give points full points (10 points).