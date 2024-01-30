#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb){
    int number = nb;
    if(nb == 0 || nb <= 0){
        printf("0");
    }
    else {
        for(int i = 1; i < nb; i++){
        
            number =  number * i;
    
        
        
    }
         printf("%d", number);}

}
int main(){
    int numero = 0;
    ft_iterative_factorial(numero);
}
