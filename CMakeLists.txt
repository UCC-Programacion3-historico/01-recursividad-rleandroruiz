cmake_minimum_required(VERSION 2.8)
project(01_Recursividad)

set(CMAKE_CXX_STANDARD 11)

# Agrego todos los test.
add_subdirectory(test)

set(SOURCE_FILES_01 01_Potencia/main.cpp 01_Potencia/potencia.cpp)
add_executable(01_Potencia ${SOURCE_FILES_01})

set(SOURCE_FILES_02 02_Sumatoria/main.cpp 02_Sumatoria/sumatoria.cpp)
add_executable(02_Sumatoria ${SOURCE_FILES_02})

set(SOURCE_FILES_03 03_Ackerman/main.cpp 03_Ackerman/ackerman.cpp)
add_executable(03_Ackerman ${SOURCE_FILES_03})

set(SOURCE_FILES_04 04_MCD/main.cpp 04_MCD/mcd.cpp 04_MCD/mcd.h)
add_executable(04_MCD ${SOURCE_FILES_04})

set(SOURCE_FILES_05 05_Digitos/main.cpp 05_Digitos/digitos.cpp 05_Digitos/digitos.h)
add_executable(05_Digitos ${SOURCE_FILES_05})

#set(SOURCE_FILES_06 06_Tiempo/main.cpp)
#add_executable(06_Tiempo  ${SOURCE_FILES_06})