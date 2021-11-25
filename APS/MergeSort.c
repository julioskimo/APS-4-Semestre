#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
void MergeSort(int a[],int inicio, int fim){
	int meio;
	if(inicio < fim){
		meio = floor((inicio+fim)/2);
		MergeSort(a, inicio, meio);
		MergeSort(a, meio + 1, fim);
		merge(a, inicio, meio, fim);
	}
}

void merge(int a[],int inicio, int meio, int fim){
	int *temp, p1, p2, tamanho, i, j, k;
	int fim1 = 0, fim2 = 0;
	tamanho = fim - inicio + 1;
	p1 = inicio;
	p2 = meio + 1;
	temp = (int *) malloc(tamanho*sizeof(int));
	if(temp != NULL){
		for(i = 0; i < tamanho; i++){
			if(!fim1 && !fim2){
				if(a[p1] < a[p2])
					temp[i] = a[p1++];
				else
					temp[i] = a[p2++];
					
				if(p1 > meio) fim1 = 1;
				if(p2 > fim) fim2 = 1;
			}else{
				if(!fim1)
					temp[i] = a[p1++];
				else
					temp[i] = a[p2++];
			}
		}
		for(j = 0, k = inicio; j < tamanho; j++, k++)
			a[k] = temp[j];
	}
	free(temp);
}

int main(){
	srand(time(NULL));
	
	clock_t t_ini, t_fim;
	
	t_ini = clock();
	
	int n = 3000, i, x, a[n];
	auto a_size = sizeof(a) / sizeof(a[0]);
	for(x = 0; x < n; x++)
		a[x] = rand();
	MergeSort(a, 0, a_size - 1);
	printf("Numeros:\n ");
	for(i = 0; i < 3000; i++)
		printf("a[%d] = %d \n", i, a[i]);
		
	t_fim = clock();
	
	printf("Tempo: %f\n", ((double)(t_fim - t_ini) / CLOCKS_PER_SEC));
	return 0;
}*/
