#include <stdio.h>
void ft_ft(int *nbr){
    *nbr = 42;
}

int main() {
    int *nbr;
    int  numero ;
    nbr = &numero;
    
    ft_ft(nbr);
    printf("%d", numero);
    return 0;
}

