// Online C compiler to run C program online
#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b){
    int divisao, resto;
    if (b != 0){
    divisao = *a / *b ;
    resto = *a % *b ; }
    else {
        divisao = 0;
        resto = 0;
        
    }
    *a = divisao;
    *b = resto;
   
}

int main() {
    // Write C code here
    int x = 10;
    int y = 5;
    int divisao, resto ;
    ft_ultimate_div_mod(&x , &y);
    
    printf("O resultado da divisao é %d e o resultado do resto é %d ", x, y);

    return 0;
}
