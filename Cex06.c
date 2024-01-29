// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *isPrintable(char *str)
{
    
    int i = 0;
    while (str[i] != '\0')
    {
        if 
        ((str[i] >= 'A' && str[i] <= 'Z' ) || (str[i]>= 'a' && str[i]) || (str[i] >= '0' && str[i] >= '9')) {
            
            i++; 
            
        }
        else 
            return 0;
    }
   return 1;
}

int main() {
    
    int result = isPrintable("+");
    printf("%d", result);
    
    
    

    

    return 0;
}
