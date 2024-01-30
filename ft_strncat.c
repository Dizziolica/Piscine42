#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb) {
    int i = 0;
    int j = 0;
    while(dest[i] != '\0'){
        i++;}
    while(src[j] != '\0'){
        if(j < nb){
        dest[i] = src[j];
        i++;
        j++; }
        else {
            break;
        }
    }
    dest[i] = '\0';
    
    return dest;
}
int main() {
    char palavra1[] = "Piscine";
    char palavra2[] = "42";
    
    ft_strncat(palavra1, palavra2, 1);
    printf("%s\n", palavra1);
    
    

    return 0;
}
