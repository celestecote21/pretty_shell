# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté hello
project(pretty_shell.out)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

# Crée des variables avec les fichiers à compiler
set(SRCS
    main.c
    exec.c
    my_printf.c
    parser.c
    shell.c
    )
    
set(HEADERS
    exec.h
    my_printf.h
    parser.h
    shell.h
    )

# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(pretty_shell.out ${SRCS} ${HEADERS})

