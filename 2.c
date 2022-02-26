#include <stdio.h>

void min_max(int *min, int *max, int size, int vet[]){
    *min = vet[0];
    *max = vet[0];
    for (int i=0; i<size; i++){
      if (vet[i]<*min){
        *min = vet[i];
      }
      if (vet[i]>*max){
        *max = vet[i]; 
      }
    }
    
}

int main(void){
    const int size = 10;

    int vet[size] = {1000,2,3,4,15,6,7,8,-9,111};
  
    int max = 0;
    int min = 0;
    
    //before the change
    printf("min: %d\n", min);
    printf("max: %d\n", max);
  
    //the change
    min_max(&min, &max, size, vet);

    //after the change
    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}
  