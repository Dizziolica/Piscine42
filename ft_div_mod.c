// Online C compiler to run C program online
#include <stdio.h>
void ft_div_mod(int a , int b, int *divisao, int *resto){
    if (b != 0){
    *divisao = a / b ;
    *resto = a % b ; }
    else {
        divisao = 0;
        resto = 0;
        
    }
   
}

int main() {
    // Write C code here
    int x = 10;
    int y = 5;
    int divisao, resto ;
    ft_div_mod(x, y, &divisao, &resto);
    
    printf("O resultado da divisao é %d e o resultado do resto é %d ", divisao, resto);

    return 0;
}
