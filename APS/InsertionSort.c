#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertionSort(int a[], int n){
	int i = 0, j = 0, tmp;
	for(i = 0; i < n; i++){
		tmp = a[i];
		
		for(j = i - 1; j >= 0 && a[j] > tmp; j--){
			a[j + 1] = a[j];
		}
		
		a[j + 1] = tmp;
	}
}

int main(){
	srand(time(NULL));
	
	clock_t t_ini, t_fim;
	
	t_ini = clock();
	
	int n = 3000, i, x, a[n];
	for(x = 0; x < n; x++)
		a[x] = rand();
	InsertionSort(a, n);
	printf("Numeros:\n ");
	for(i = 0; i < 3000; i++)
		printf("a[%d] = %d \n", i, a[i]);
		
	t_fim = clock();
	
	printf("Tempo: %f\n", ((double)(t_fim - t_ini) / CLOCKS_PER_SEC));
	return 0;	
}
