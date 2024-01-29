// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
   return dest;
}

int main() {
    char src[] = "Piscine";
    char dest[] = "42";
    char dest1[] = "-2024";
    printf("%s", ft_strncpy(dest, src, 3));
    // Write C code here
    

    return 0;
}
