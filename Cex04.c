// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *ft_str_is_lower(char *str)
{
    
    int i = 0;
    while (str[i] != '\0')
    {
        if 
        (str[i] >= 'a' && str[i] <= 'z' ) {
            
            i++; 
            
        }
        else 
            return 0;
    }
   return 1;
}

int main() {
    
    int result = ft_str_is_lower("A");
    printf("%d", result);
    
    
    

    

    return 0;
}
