#include <stdio.h>
#include <stdlib.h>

void ft_sort_int_tab(int *tab, int size){
    int newlist[size + 1];
    int i, j ;
    int temp;
    for (i = 0; i <= size; i++){

        for(j = 0; j <= size ; j++)  
            
           if(tab[i] >= tab[j]){
                 
                
                
            temp = tab[i];
            
                 
            tab[i] = tab[j];
            
                 
            tab[j] = temp;
            
             
                 
            
         }
          else{
            continue;
            }
              
    }
    for(i = size; i >= 0; i--){
        printf("%d", tab[i]);
    }
    
}

int main(){
    
    int tab[] = {9,7,8,5,6,3,4,1,2};
    int size_t = sizeof(tab) / sizeof(tab[0]) - 1;
    
    ft_sort_int_tab(&tab[0], size_t);
    
    return 0;
    
}
