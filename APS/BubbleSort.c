#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
void BubbleSort(int a[], int n){
	int i = 0, j = 0, tmp;
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
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
	BubbleSort(a, n);
	printf("Numeros:\n ");
	for(i = 0; i < 3000; i++)
		printf("a[%d] = %d \n", i, a[i]);
		
	t_fim = clock();
	
	printf("Tempo: %f\n", ((double)(t_fim - t_ini) / CLOCKS_PER_SEC));
	return 0;
}*/
