#include <stdio.h>
#include "nodo.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");

    // Ejercicio 1
    Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->valor);

    // Ejercicio 2
    Nodo* arreglo = crearArregloNodos(5);
    for (int i = 0; i < 5; i++) printf("Arreglo[%d]: %d\n", i, arreglo[i].valor);

    // Ejercicio 3
    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    for (int i = 0; i < tam; i++) printf("Arreglo Act[%d]: %d\n", i, arreglo[i].valor);

    // Ejercicio 4
    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    // Ejercicio 5
    Nodo* inicio = construirTresNodos();
    for (Nodo* temp = inicio; temp != NULL; temp = temp->siguiente) printf("Nodo: %d\n", temp->valor);

    // Ejercicio 6
    int total = contarNodos(inicio);
    printf("Total de nodos: %d\n", total);

    // Ejercicio 7
    Nodo* desdeEntrada = crearNodosPorEntrada();
    for (Nodo* temp = desdeEntrada; temp != NULL; temp = temp->siguiente) printf("Entrada: %d\n", temp->valor);

    return 0;
}
