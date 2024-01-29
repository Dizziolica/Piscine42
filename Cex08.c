// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str)
{
    
    int i = 0;
    while (str[i] != '\0')
    {
        if 
        (str[i] >= 'A' && str[i] <= 'Z')  {
            
            str[i] += 32;
            
            
        }
        
        i++;
    }
   return str;
}

int main() {
    
    char name[] = "PISCINE42";
    char *result = ft_strlowcase(name);
    printf("%s", result);
    
    
    

    

    return 0;
}
