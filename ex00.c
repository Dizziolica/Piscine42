#include <stdio.h>
int ft_strcmp(char *s1, char *s2) {
int result = 0;  
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if (s1[i] != s2[i]) {
            int result = 1;
            return result ;
            break;
        }
        else
            i++;
    }
    return result;
}
int main() {
    char palavra1[] = "AbCd";
    char palavra2[] = "Abcd";
    int resultado = ft_strcmp(palavra1, palavra2);
    printf("%d\n", resultado);

    return 0;
}
