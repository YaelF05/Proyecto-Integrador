//Hecho por Yael Franco T.
#include <stdio.h>

void bubbleSort(int vector[], int n);
void insertionSort(int vector[], int n);
void selectionSort(int vector[], int n);

int main(void){

    int n;
    int opcion;
    

    printf ("Ingrese la cantidad de números que contendrá el vector: ");
    scanf ("%d", &n);

    int vector[n];
    printf ("Ingrese los números del vector:\n");
    for (int i = 0; i < n; i++){
        scanf ("%d", &vector[i]);
    }

    while (opcion != 4){
    printf ("Seleccione el método de ordenamiento:\n");
    printf ("1. Método de burbuja\n");
    printf ("2. Método de inserción\n");
    printf ("3. Método de selección\n");
    printf ("4. Salir\n");
    scanf ("%d", &opcion);

    switch (opcion){
    case 1: printf("\nMétodo de burbuja\n");
      bubbleSort(vector, n);
      break;
    case 2: printf("\nMétodo de inserción\n");
      insertionSort(vector, n);
      break;
    case 3: printf("\nMétodo de selección\n");
      selectionSort(vector, n);
   }

 } 
  
}

void bubbleSort(int vector[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (vector[j] > vector[j + 1]){
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    printf ("Vector ordenado:\n");
    for (int i = 0; i < n; i++){
    	printf("%d\n", vector[i]);
	}
	printf (" \n");
}

void insertionSort(int vector[], int n){
    int key, j, i;
    for (i = 1; i < n; i++){
        key = vector[i];
        j = i -1;

        while (j >= 0 && key < vector[j]){
            vector[j + 1] = vector [j];
            j -= 1;
        }
        vector[j + 1] = key;
    }
    printf ("Vector ordenado:\n");
    for (int i = 0; i < n; i++){
    	printf("%d\n", vector[i]);
	}
	printf (" \n");
}

void selectionSort(int vector[], int n){
    int i, j, menor, k;

    for( i = 0; i < n - 1; i++){
        menor = vector[i];
        k = i;

        for (j = i+1; j < n; j++){
            if(vector[j] < menor){
                menor = vector[j];
                k = j;
            }
        }
        vector[k] = vector[i];
        vector[i] = menor;
    }
    printf ("Vector ordenado:\n");
    for (int i = 0; i < n; i++){
    	printf("%d\n", vector[i]);
	}
	printf (" \n");
}
