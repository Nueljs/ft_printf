*Este proyecto ha sido creado como parte del currículo de 42 por macerver.*

ft_printf
Descripción

ft_printf es una reimplementación parcial de la función estándar printf(3) desarrollada en el marco del currículo de 42.
El objetivo del proyecto es comprender cómo funciona internamente un formateador de salida: manejo de funciones variádicas, parsing de la cadena de formato y conversión de distintos tipos de datos a texto sin utilizar la función printf original.

Instrucciones
Compilación
make            # Genera libftprintf.a
make clean      # Elimina objetos
make fclean     # Limpia todo
make re         # Recompila

Uso
#include "ft_printf.h"

int main(void)
{
    ft_printf("Valor: %d, hex: %x\n", 42, 42);
}


Especificadores soportados:
%c, %s, %p, %d, %i, %u, %x, %X, %%

Decisiones técnicas: algoritmo y estructuras de datos
Enfoque general

La implementación se basa en un recorrido lineal del formato, detectando cada aparición de % y procesándola mediante una función dedicada a cada tipo.

El proyecto utiliza conversión manual mediante divisiones sucesivas:

- Para decimales: extracción de dígitos dividiendo entre 10.

- Para hexadecimales: división entre 16 usando una tabla de caracteres.

- Para enteros con signo: tratamiento explícito del signo antes de convertir la magnitud.

- Para punteros: conversión manual a hexadecimal con prefijo 0x.

El resultado se almacena en buffers locales en stack, evitando el uso de malloc para garantizar eficiencia y ausencia de fugas.

Estructuras usadas

Pequeña estructura de estado para cada especificador (tipo y posibles flags si se utilizan).

Buffers temporales para generar las representaciones numéricas antes de escribirlas.

Escritura final mediante write(1, ...), contabilizando los bytes emitidos, replicando el comportamiento de printf.

Este enfoque garantiza control total sobre la conversión, simplicidad, eficiencia y cumplimiento de las restricciones del proyecto.

Recursos

man 3 printf para comportamiento esperado.

Documentación sobre stdarg.h y funciones variádicas.

Artículos sobre conversión manual de números en C.

Comparaciones con la implementación del sistema para validar comportamiento.

Uso de IA

La IA se ha utilizado únicamente para corregir y reestructurar este README y para resolver dudas teóricas sobre parsing y conversión.
Todo el código del proyecto ha sido implementado, revisado y validado manualmente.
