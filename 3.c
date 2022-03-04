#include <stdio.h>
#define size 20

void copiar(char vet[], char copia[]){
  int i = 0;
  while (i < size){
    *copia = *vet;
    i++;
    vet++;
    copia++;
  }
}
int main(void) {
  char vet[size]={};
  char copia[size]={};
  printf("Digite a palavra: ");
  scanf("%s",vet);
  copiar(vet, copia);
  for(int i = 0; i < size; i++) {
  printf("%c",copia[i]);
    }

  return 0;
}