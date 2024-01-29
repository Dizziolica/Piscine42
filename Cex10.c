#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {

    int i = 0;
    while (src[i] != '\0' && i < size -1){
	    dest[i] = src[i];
	    i++;
    } 

    return *dest;

}

int main(){ 
   char origem[] = "Piscine42";
   unsigned int tamanho = sizeof(origem);
   char destino[tamanho];
   ft_strlcpy(destino, origem, tamanho);
   printf("%s\n", destino);

   return 0;


}
