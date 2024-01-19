cmake_minimum_required(VERSION 3.8)
project("main" LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(
    ${PROJECT_NAME}
    "src/lstu-6/I.cpp"
)