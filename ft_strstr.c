#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find) {
    int i = 0;
    int j = 0;
    
    
    while(str[i] != '\0'){
        
        if (str[i] == to_find[j] && to_find[j] != '\0'){
             
            j++;
        }
        else {
            j = 0;
        }
        
        i++;
    }
    if (j == strlen(to_find)){
        return  "Encontrou se a palavra"; 
    }
    else {
    
        return "Não foi encontrada";
        
    }
}
int main() {
    char palavra1[] = "Hello world";
    char palavra2[] = "world";
    
    char* resultado = ft_strstr(palavra1, palavra2);
    
    printf("%s", resultado);
    

    return 0;
}
