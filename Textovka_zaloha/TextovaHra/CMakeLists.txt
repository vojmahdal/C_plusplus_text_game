cmake_minimum_required(VERSION 3.15)
project(TextovaHra)

set(CMAKE_CXX_STANDARD 14)

add_executable(TextovaHra main.cpp Lokace.cpp Lokace.h Menu.cpp Menu.h Domov.cpp Domov.h Prace.cpp Prace.h Arena.cpp Arena.h Obchod.cpp Obchod.h ObchodZbroj.cpp ObchodZbroj.h ObchodZbrane.cpp ObchodZbrane.h Hrac.cpp Hrac.h Zbran.cpp Zbran.h Zbroj.cpp Zbroj.h Nepritel.cpp Nepritel.h Souboj.cpp Souboj.h)