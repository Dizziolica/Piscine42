#include <stdio.h>
char *ft_strcat(char *dest, char *src) {
    int i = 0;
    int j = 0;
    while(dest[i] != '\0'){
        i++;}
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    
    return dest;
}
int main() {
    char palavra1[] = "Piscine";
    char palavra2[] = "42";
    
    ft_strcat(palavra1, palavra2);
    printf("%s\n", palavra1);
    
    

    return 0;
}
