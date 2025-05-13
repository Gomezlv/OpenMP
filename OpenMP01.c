/***************************************
-Nombre: Viviana Gómez León
- Programa: OpenMP01.c
-Clase: Sistemas Operativos
-Fecha: 2025-05-13
-Tema: Programacion Paralela - Introducción OpenMP
---------------------------------------------
Resumen:
Programa crea hilos de ejecución para cada core
imprime cadena de caracteres por cada llamada.
**************************************/
/***************************************
Descripción: Programa en el cual se hace uso de OpenMP para la ejecución del programa
con varios hilos. Este imprime el numero maximo de hilos a usar, para luego imprimir
un mensaje por cada hilo, indicando en que hilo se encuentra
**************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <omp.h> //<----------- header necesario para invocar API OpenMP

int main(int argc, char *argv[]){
	//Se imprime el numero de hilos maximos que se van a usar
	//Este numero es igual al numero maximo de cores que tiene el procesador
	printf("OpenMP ejecutando con %d hilos\n", omp_get_max_threads());
//Instruccion directa al compilador para hacer uso del OpenMP
#pragma omp parallel
{
	//Para cada hilo se imprime el mensaje, demostrando en que hilo se encuentra
	//retornando el id del hilo
	printf("Hello World desde el thread %d\n", omp_get_thread_num());
}
	return 0;
}

