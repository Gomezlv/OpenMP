/***************************************
-Nombre: Viviana Gómez León
- Programa: hello.c
-Clase: Sistemas Operativos
-Fecha: 2025-05-13
-Tema: Programacion Paralela - Introducción OpenMP
---------------------------------------------
Resumen:
Programa crea hilos de ejecución para cada core
imprime cadena de caracteres por cada llamada.
**************************************/
#include <stdio.h> //<----------- header necesario para invocar API OpenMP
#include <stdlib.h>
#include <omp.h>

int main(int argc, char *argv[]){
	printf("OpenMP ejecutando con %d hilos\n", omp_get_max_threads());
#pragma omp parallel
{
	printf("Hello World desde el thread %d\n", omp_get_thread_num());
}
	return 0;
}

