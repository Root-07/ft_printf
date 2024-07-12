# ft_printf

ft_printf est une implémentation personnalisée de la fonction standard `printf` en C. Ce projet, réalisé dans le cadre du cursus de l'école 42, a pour but de renforcer la compréhension des fonctions variadiques et de la gestion des chaînes de caractères en C.

## Sommaire

1. [Introduction](#introduction)
2. [Fonctionnalités](#fonctionnalités)
3. [Installation](#installation)
4. [Utilisation](#utilisation)
5. [Exemples](#exemples)
6. [Tests](#tests)
7. [Auteurs](#auteurs)

## Introduction

Le but de ce projet est de recréer la fonction `printf` de la bibliothèque standard en C. Cette version personnalisée doit être capable de gérer différentes conversions et d'offrir des fonctionnalités similaires à celles de l'originale.

## Fonctionnalités

ft_printf supporte les conversions suivantes :

- `%c` : caractère
- `%s` : chaîne de caractères
- `%p` : pointeur
- `%d` ou `%i` : entier signé en décimal
- `%u` : entier non signé en décimal
- `%x` : entier non signé en hexadécimal (minuscule)
- `%X` : entier non signé en hexadécimal (majuscule)
- `%%` : pourcentage

## Installation

Pour compiler la bibliothèque, clonez ce dépôt et exécutez les commandes suivantes :

```sh
git clone https://github.com/ael-amin/ft_printf.git
cd ft_printf
make
```

Cette commande génèrera un fichier libftprintf.a que vous pouvez inclure dans vos projets C.

## Utilisation
Pour utiliser la bibliothèque ft_printf dans vos projets, incluez simplement le fichier d'en-tête ft_printf.h et liez la bibliothèque statique libftprintf.a lors de la compilation.

## Exemple de Makefile :
```make
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFTPRINTF = path/to/libftprintf.a
INCLUDES = -I path/to/ft_printf/includes

SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) $(LIBFTPRINTF) -o my_program

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f my_program

re: fclean all

.PHONY: all clean fclean re
```

## Exemples
Voici quelques exemples d'utilisation de ft_printf :
```main
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return 0;
}
```
## Tests
Pour tester la bibliothèque, vous pouvez utiliser les tests fournis ou écrire les vôtres. Plusieurs outils et frameworks de tests sont disponibles pour vérifier le bon fonctionnement de votre ft_printf :
- [Printf Tester](https://github.com/Tripouille/printfTester)
- [42TESTERS-PRINTF](https://github.com/Mazoise/42TESTERS-PRINTF)

## Auteurs
Ce projet est réalisé par ael-Amin dans le cadre du cursus de l'école 42.
