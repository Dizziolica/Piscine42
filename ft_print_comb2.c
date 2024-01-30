
// Online C compiler to run C program online
#include <stdio.h>
void ft_print_comb2(){
    int i;
    int j;
    
    
    for(i = 0; i <= 98; i++){
        j = i + 1;
            printf("%02d %02d", i, j);
            if( i != 98 && j != 99){
                printf(",");
            }
        }
       
    
         printf("\n");    
        }



int main() {
    // Write C code here
    ft_print_comb2();

    return 0;
}
