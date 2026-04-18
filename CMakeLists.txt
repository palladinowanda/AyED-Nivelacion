cmake_minimum_required(VERSION 4.2)
project(Tarea_2___Entrega_total_del_TP_de_nivelacion C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Tarea_2___Entrega_total_del_TP_de_nivelacion
        carton.c
        carton.h
        juego.c
        juego.h
        main.c
        persona.c
        persona.h
        sorteo.c
        sorteo.h)
