cmake_minimum_required(VERSION 3.10)    

project(CS2-Calculator-AlyandSandra VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCE_FILES                       
    calculator.cpp
   main.cpp	   
)


add_executable(myCalculator ${SOURCE_FILES})
