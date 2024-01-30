
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb){
    int number = nb;
    if(nb == 0 || nb <= 0){
        return 0;
    }
    else {
        for(int i = 1; i < nb; i++){
        
            number =  number * i;
    
        
        
    }
         return number;}

}
int main(){
    int numero = 6;
    int resultado = ft_iterative_factorial(numero);
    printf("%d", resultado);
}
