#include <stdio.h>
#include <stdlib.h>


int ft_is_printe(int nb) {
    
    int resposta;
    if(nb % 2 == 0){
       resposta = 0;
	    return resposta;
  
 }    else{
       resposta = 1;
       return resposta;
    
    }


}

int main()
{    
   int numero = 10;	
   int resultado = ft_is_printe(numero);
   printf("%d", resultado);





}
