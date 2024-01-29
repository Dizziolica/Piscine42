// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *ft_str_is_alpha(char *str)
{
    
    int i = 0;
    while (str[i] != '\0')
    {
        if 
        ((str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z')){
            
            i++; 
            
        }
        else 
            return 0;
    }
   return 1;
}

int main() {
    
    ft_str_is_alpha("1");

    

    return 0;
