// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *ft_str_is_numeric(char *str)
{
    
    int i = 0;
    while (str[i] != '\0')
    {
        if 
        (str[i] >= '0' && str[i] <= '9' ) {
            
            i++; 
            
        }
        else 
            return 0;
    }
   return 1;
}

int main() {
    
    int result = ft_str_is_numeric("A");
    printf("%d", result);
    
    
    

    

    return 0;
}
