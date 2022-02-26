#include <stdio.h>

void troca(float *a, float *b){
    int c = *a;
    *a=*b;
    *b=c;
    
}

int main(void){
    float a = 1;
    float b = 2;
    
    //before the change
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);
  
    //the change
    troca(&a, &b);

    //after the change
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    return 0;
}