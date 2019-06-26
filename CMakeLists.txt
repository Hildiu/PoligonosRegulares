cmake_minimum_required(VERSION 3.8)
project(Prog_01)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Definiciones.h CTriangulo.cpp CTriangulo.h CCuadrado.cpp CCuadrado.h CHexagono.cpp CHexagono.h CPoligono.cpp CPoligono.h)
add_executable(Prog_01 ${SOURCE_FILES})