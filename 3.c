#include <stdio.h>
char copiar(char vet[]){
  char copia[20]={};
  for (int i=0;i<20;i++){
    copia[i]=vet[i];    
  }
  for(int i = 0; i < 20; i++) {
  printf("%c",copia[i]);
    }
  return 'a';
}
int main(void) {
  char vet[20]={};
  printf("Digite a palavra: ");
  scanf("%s",vet);
  copiar(vet);

  return 0;
}   