#include<stdio.h>
void quicksort(int number[25],int inicio,int fim){
   int i, j, pivot, temp;

   if(inicio<fim){
      pivot=inicio;
      i=inicio;
      j=fim;

      while(i<j){
         while(number[i]<=number[pivot]&&i<fim)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,inicio,j-1);
      quicksort(number,j+1,fim);

   }
}

int main(){
   int i, count, number[25];

   count = 3000;
   for(i=0;i<count;i++)
      number[i] = rand();

   quicksort(number,0,count-1);

   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
