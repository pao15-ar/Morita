#include <stdio.h>

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // Imprimir los elementos del arreglo, su tamaño en bytes y su dirección de memoria
    for (int i = 0; i < 20; i++) {
        printf("Elemento: %d, Tamano en bytes: %zu, Direccion de memoria: %p\n", arr[i], sizeof(arr[i]), (void*)&arr[i]);
    }

    // Calcular y imprimir el tamaño total del arreglo en bytes
    size_t total_size = sizeof(arr);
    printf("Tamano total del arreglo en bytes: %zu\n", total_size);
    printf("Numero de elementos en el arreglo: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}