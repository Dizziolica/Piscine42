include <stdio.h>
void ft_print_comb(){
    char i;
    char j;
    char k;
    i = '0';
    while (i <= '7'){
        j = i + 1;
        while(j <= '8'){
             k = j + 1;
             while ( k <= '9') {
                 printf("%c", i);
                 printf("%c", j);
                 printf("%c", k);
                 k++;
                 
                 if (i != '7'){
                     printf(",");
                 
                
                 }
                 
               
             }
             j++;
    }
        i++;
        
    }
    
}

int main() {
    // Write C code here
    ft_print_comb();

    return 0;
}
