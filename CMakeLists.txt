cmake_minimum_required(VERSION 3.27)
project(RNGen)

set(CMAKE_CXX_STANDARD 17)

add_executable(RNGen main.cpp
        RNGenerator.cpp
        RNGenerator.h
        Handler.cpp
        Handler.h
        Lotto.cpp
        Lotto.h
        GenerateRNString.cpp
        GenerateRNString.h
        GenerateRNArray.cpp
        GenerateRNArray.h
)

