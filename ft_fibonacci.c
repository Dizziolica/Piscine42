#include <stdio.h>
int ft_fibonacci(int index){
    int lista[index];
    lista[0] = 0;
    lista[1] = 1;
    lista[2] = 2;
    
    for(int i = 3; i < index; i++){
        lista[i] = lista[i -1] + lista[i - 2 ];
        
    }
    printf("%d", lista[index]);
    
}

int main()
{
    int lista[15] ;
    lista[0] = 0;
    lista[1] = 1;
    lista [2] = 1;
    
    for (int i = 3; i <= 15; i++){
        lista[i] = lista[i - 1] + lista[i - 2];
        
    }
    printf("%d", lista[15]);
    return 0;
}
