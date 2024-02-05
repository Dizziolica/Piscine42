#include <stdio.h>
#include <stdlib.h>


int ft_sqrt(int nb){
    int resultado = nb / 2;
    while( resultado * resultado > nb) {
         resultado--;
    
    }

    return resultado;
    


}

int main(){
    
  int final =  ft_sqrt(49);
  printf("%d", final);


   return 0;
}
