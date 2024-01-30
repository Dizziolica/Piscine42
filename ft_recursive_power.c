
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb, int power){
    
    if(nb == 0 || nb <= 0 || power < 0){
        return 0;
    }
    if(power == 0){
        return 1;
    }
    
    else {
        int number = nb;
        for(int i = 1; i < power; i++){
        
            number = number * nb;
    
        
        
    }
         return number;}

}
int main(){
    int numero = 6;
    int potencia = 2;
    int resultado = ft_iterative_factorial(numero, potencia);
    printf("%d", resultado);
}
