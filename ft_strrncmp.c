#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n) {
int result = 0; 
unsigned char resposta[n]; 
    int i;
    while(s1[i] != '\0' && s2[i] != '\0'){
        for (i = 0; i < n; i++){
            if (s1[i] > s2[i]) {
                int result = 1;
                return result;
            
                
        }
            else if (s1[i] < s2[i]){
                int result = -1;
                return result;
            }
            
             else if (s1[i] == s2[i]) {
                     int result = 0;
                     return result;
             
             }  
    }
        i++;
    }
    return result;
}
int main() {
    char palavra1[] = "Abcd";
    char palavra2[] = "AbCd";
    int tamanho = 3;
    int resultado = ft_strncmp(palavra1, palavra2, tamanho);
    printf("%d\n", resultado);

    return 0;
}
