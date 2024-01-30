#include <stdio.h>
void ft_print_alphabet(void);
int main(){
    
    
    ft_print_alphabet();
    return 0;
}
void ft_print_alphabet(void){
    char letra = 'a';
    while (letra <= 'z'){
        printf("%c", letra);
        letra++;
    }
}
