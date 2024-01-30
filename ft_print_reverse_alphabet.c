
#include <stdio.h>
void ft_print_reverse_alphabet(void);
int main(){
    
    
    ft_print_alphabet();
    return 0;
}
void ft_print_alphabet(void){
    char letra = 'z';
    while (letra >= 'a'){
        printf("%c", letra);
        letra--;
    }
}
