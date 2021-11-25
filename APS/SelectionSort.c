#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
void SelectionSort(int a[],int n){
	int i, j, menor, troca;
	for(i = 0; i < n - 1; i++){
		menor = i;
		for(j = i+1; j < n; j++){
			if(a[j] < a[menor])
				menor = j;
		}
		if(i != menor){
			troca = a[i];
			a[i] = a[menor];
			a[menor] = troca;
		}
	}
}

int main(){
	srand(time(NULL));
	
	clock_t t_ini, t_fim;
	
	t_ini = clock();
	
	int n = 3000, i, x, a[n];
	for(x = 0; x < n; x++)
		a[x] = rand();
	SelectionSort(a, n);
	printf("Numeros:\n ");
	for(i = 0; i < 3000; i++)
		printf("a[%d] = %d \n", i, a[i]);
		
	t_fim = clock();
	
	printf("Tempo: %f\n", ((double)(t_fim - t_ini) / CLOCKS_PER_SEC));
	return 0;
}	
*/
