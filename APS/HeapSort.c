#include <stdio.h>
#include <stdlib.h>
void heapify(int a[], int n, int i)  
{  
    int maior = i;
    int esquerda = 2 * i + 1;  
    int direita = 2 * i + 2; 
    if (esquerda < n && a[esquerda] > a[maior])  
        maior = esquerda;   
    if (direita < n && a[direita] > a[maior])  
        maior = direita;   
    if (maior != i) {   
        int temp = a[i];  
        a[i] = a[maior];  
        a[maior] = temp;  
          
        heapify(a, n, maior);  
    }  
}  
void heapSort(int a[], int n)  
{  
	int i;
    for (i = n / 2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }
    
    for (i = n - 1; i >= 0; i--) {  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify(a, i, 0);  
    }  
}  
void printArr(int arr[], int n)  
{  
	int i;
    for (i = 0; i < n; ++i)  
    {  
        printf("%d", arr[i]);  
        printf(" ");  
    }  
}  
int main()  
{  
	int y = 3000, i, x, a[y];
	for(x = 0; x < y; x++)
		a[x] = rand();  
    int n = sizeof(a) / sizeof(a[0]);  
    heapSort(a, n);    
    printArr(a, n);  
    return 0;  
}
