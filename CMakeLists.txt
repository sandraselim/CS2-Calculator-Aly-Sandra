cmake_minimum_required(VERSION 3.10)    

project(CS2-Calculator-AlyandSandra VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCE_FILES                       
    main.cpp
    calculator.cpp
)


add_executable(CS2-Calculator-AlyandSandra ${SOURCE_FILES})
