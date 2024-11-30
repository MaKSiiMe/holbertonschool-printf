# Projet : _printf

## Description

Le projet **_printf** consiste à recréer la fonction `printf` de la bibliothèque standard C. Cette fonction permet d'afficher des données formatées sur la sortie standard (STDOUT), en supportant divers types et spécificateurs de format.
L'objectif principal est de mieux comprendre les mécanismes internes de cette fonction tout en améliorant ses compétences en programmation système et gestion de mémoire.

## Commande de compilation
Pour compiler le projet, utilisez la commande suivante :
``` bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf
```
## Requirements
Pour exécuter ce projet, assurez-vous d'avoir les éléments suivants installés sur votre machine :
- **Système d'exploitation** : Ubuntu 20.04 LTS
- **Compilateur** : GCC (GNU Compiler Collection) version 9.4.0 ou ultérieure
	- Commande pour installer GCC :
	``` bash
	sudo apt update && sudo apt install gcc
	```
- **Outils de gestion de version** : Git
	- Commande pour installer Git :
	``` bash
	sudo apt update && sudo apt install git
	```
- **Manuels utilisateur** : Pour visualiser les pages de manuel personnalisées, vous devez disposer de `man` (installé par défaut sur Ubuntu).
	- Si nécessaire, installez-le avec :
    ``` bash
    sudo apt update && sudo apt install man-db
    ```
- **Remarque** : Assurez-vous de respecter les normes C89 lors de la compilation pour garantir la compatibilité.
## Exemples d'utilisation
- Exemple 1 : Texte simple
``` c
_print("Hello, World!\n");
```
Résultat:
``` r
Hello, World!
```
- Exemple 2 : Texte formaté
``` c
_print("Integer: %d, String: %s\n", 42, "Holberton");
```
Résultat:
``` r
Integer: 42, String: Holberton
```
- Exemple 3 : Caractère spéciaux
``` c
_print("Percent sign: %%\n");
```
Résultat:
``` r
Percent sign: %
```

## Man Page
Une page de manuel est incluse pour décrire en détail l'utilisation et les spécificateurs supportés par `_printf`.
Pour accéder à la page, utilisez :
```man man_3_printf.1```

## Testing
Pour tester le projet, plusieurs méthodes sont disponibles :
- **Exécution manuelle** : Écrivez des programmes simples pour valider les fonctionnalités.
- **Tests automatisés** : Utilisez des scripts ou des fichiers de tests pour vérifier les cas limites.

### Exemple de test
Fichier `test_printf.c`:
``` c
#include <stdio.h>
#include "_printf.h"

int main(void)
{
    _printf("Test integer: %d\n", 123);
    _printf("Test string: %s\n", "Holberton");
    return (0);
}
```

Compilation et exécution:
``` bash
gcc test_printf.c *.c -o test_printf
./test_printf
```

``` mermaid
graph TD
A([_printf]) --> B[is format NULL ?]
B -->|true| C[Return -1]
B -->|false| D{if format i == '%' && format i+1}
D -->|true| E[while specifier]
D -->|false| F[_putchar format i]
I[function check specifier]
E -->|false| J{is specifiers NULL}
G[va_end free]
H[return count]
I -->|c| K[print_char]
I -->|s| L[print_string]
I -->|%| M[print_percent]
I -->|d| N[print_integer]
I -->|i| O[print_integer]
J -->|true| Q[_putchar format i]
J -->|false| F
K --> P[increment loop]
L --> P[increment loop]
M --> P[increment loop]
N --> P[increment loop]
O --> P[increment loop]
Q --> R[_putchar format i+1]
R --> S[count = count + 2]
S --> U[increment i]
F --- H
H --- G
E --- n1["is format i+1 == specifiers"]
n1 ---|"true"| I
U --- F
P --- E
n1 ---|"false"| P
```

## Auteurs
Projet réalisé dans le cadre du programme Holberton School France.
### DIDI Badr
- Github: [@Badr](https://github.com/saru3450)
### TRUEL Maxime
- Github: [@Maxime](https://github.com/MaKSiiMe)
