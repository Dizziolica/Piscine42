// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str)
{
    
    int i = 0;
    while (str[i] != '\0')
    {
        if 
        (str[i] >= 'a' && str[i] <= 'z')  {
            
            str[i] -= 32;
            
            
        }
        
        i++;
    }
   return str;
}

int main() {
    
    char name[] = "piscine42";
    char *result = ft_strupcase(name);
    printf("%s", result);
    
    
    

    

    return 0;
}
