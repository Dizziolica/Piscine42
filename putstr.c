// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void ft_putstr(char *str){
    int i = 0;
    while (str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
        
    }
   
}

int main() {
    char *palavra = "Piscine42";
    ft_putstr( palavra);

    return 0;
}
