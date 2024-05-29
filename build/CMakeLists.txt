cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(MATRIX)

# Configurar el compilador
set(CMAKE_CXX_STANDARD 11)

# Agregar la ruta de inclusión
include_directories(/home/jhonatan/Documents/Simulation/matrix/include)

# Agregar el ejecutable
add_executable(matrix ../main.cpp
                      ../Matrix.cpp)

