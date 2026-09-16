# C++ Modules

Colección de ejercicios del cursus de C++ de 42. El proyecto muestra una progresión práctica desde la sintaxis básica de C++ hasta la gestión de recursos, la herencia y el polimorfismo.

El código está compilado con **C++98** y mantiene una estructura consistente en cada ejercicio:

```text
exXX/
├── include/   # Archivos .hpp
├── src/       # Implementaciones .cpp
├── main.cpp   # Programa de prueba del ejercicio
└── Makefile
```

## Qué demuestra

- Diseño y uso de clases en C++.
- Encapsulación, constructores, destructores y operadores.
- Gestión explícita de memoria dinámica.
- Regla de tres y copias profundas.
- Herencia, funciones virtuales y polimorfismo.
- Organización modular mediante headers, fuentes y Makefiles.
- Compilación estricta con `-Wall -Wextra -Werror -std=c++98`.

## Módulos

### `cpp00` · Fundamentos y clases

Primer contacto con C++ y la programación orientada a objetos.

- `ex00`: programa `Megaphone`, entrada por argumentos y manipulación de strings.
- `ex01`: `PhoneBook` y `Contact`, encapsulación, interacción por consola y almacenamiento circular de hasta ocho contactos.

**Conceptos clave:** clases, métodos, streams, strings, validación de entrada y organización básica de un proyecto C++.

### `cpp01` · Memoria, referencias y punteros a funciones

Ejercicios centrados en la diferencia entre memoria automática y dinámica, referencias y funciones miembro.

- `ex00`: creación de `Zombie` en stack y heap.
- `ex01`: creación y liberación de una horda dinámica de zombies.
- `ex02`: comparación entre punteros y referencias.
- `ex03`: `Weapon`, `HumanA` y `HumanB`, con referencias y punteros.
- `ex04`: reemplazo de texto en archivos.
- `ex05`: despacho de niveles de mensajes en `Harl`.
- `ex06`: selección de comportamiento mediante punteros a funciones miembro.

**Conceptos clave:** `new`/`delete`, `new[]`/`delete[]`, referencias, punteros, streams de archivos y callbacks mediante métodos miembro.

### `cpp02` · Clase `Fixed`

Implementación progresiva de una clase de punto fijo.

- `ex00`: representación raw y conversiones básicas.
- `ex01`: constructores, conversiones y operadores de comparación.
- `ex02`: operadores aritméticos, incremento/decremento, `min` y `max`.

**Conceptos clave:** forma canónica, sobrecarga de operadores, bits fraccionarios, conversiones numéricas y preservación de escala.

### `cpp03` · Herencia

Construcción de una jerarquía de trampas de combate.

- `ex00`: clase base `ClapTrap` y gestión de vida, energía y daño.
- `ex01`: `ScavTrap`, herencia y redefinición de comportamiento.
- `ex02`: `FragTrap`, especialización de la jerarquía y herencia múltiple de comportamiento compartido.

**Conceptos clave:** herencia, constructores de clases base, sobrescritura de métodos, estado protegido y reutilización de código.

### `cpp04` · Polimorfismo y recursos

Ejercicios orientados al polimorfismo en tiempo de ejecución y a la gestión segura de recursos propios.

- `ex00`: `Animal`, `Cat`, `Dog` y la diferencia con `WrongAnimal`/`WrongCat`.
- `ex01`: composición de animales con un `Brain` dinámico.
- `ex02`: copias profundas y comportamiento abstracto.

**Conceptos clave:** funciones virtuales, destructores virtuales, clases abstractas, composición, regla de tres y ownership explícito.

## Compilación

Cada ejercicio es independiente y tiene su propio `Makefile`.

```bash
cd cpp00/ex00
make
./megaphone
make clean
make fclean
```

Comandos disponibles en todos los ejercicios:

| Comando | Acción |
| --- | --- |
| `make` | Compila el ejercicio y genera sus objetos y ejecutable. |
| `make clean` | Elimina los archivos objeto. |
| `make fclean` | Elimina objetos y ejecutable. |
| `make re` | Limpia y recompila desde cero. |

Para compilar todos los ejercicios:

```bash
for makefile in $(find cpp00 cpp01 cpp02 cpp03 cpp04 -name Makefile | sort); do
    make -C "$(dirname "$makefile")"
done
```

## Estándares y decisiones técnicas

- Compilador: `c++`.
- Estándar: `C++98`.
- Warnings tratados como errores.
- Headers en `include/` y fuentes de implementación en `src/`.
- Los `.cpp` dentro de `src/` incluyen sus headers mediante `../include/Nombre.hpp`.
- Cada ejercicio mantiene su propio ciclo de build y limpieza.

## Objetivo del proyecto

Este repositorio refleja una evolución deliberada: comenzar con clases pequeñas y control de entrada, avanzar hacia la gestión manual de memoria y la sobrecarga de operadores, y terminar aplicando jerarquías polimórficas con ownership y copias profundas. El resultado es una base sólida para seguir trabajando con C++ moderno, sistemas y software orientado a objetos.
