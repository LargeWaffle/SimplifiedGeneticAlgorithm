cmake_minimum_required(VERSION 3.17)
project(SimplifiedGenAlgorithm C)

set(CMAKE_C_STANDARD 11)

add_executable(SimplifiedGenAlgorithm main.c essentials.h population.c population.h individual.c individual.h)