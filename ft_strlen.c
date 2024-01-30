#include <stdio.h>
#include <stdlib.h>
void ft_strlen(char *str){
    int i = 0;
    while (str[i] != '\0'){
        
        i++;
        
    }
    printf("A palavra tem %d itens", i);
   
}

int main() {
    char *palavra = "Piscine42";
    ft_strlen( palavra);

    return 0;
}
