#include <stdio.h>
void ft_print_numbers(void){
    char numero = '0';
    while (numero <= '9') {
        printf("%c\n", numero);
        numero++;
    }
}

int main() {
    // Write C code here
    ft_print_numbers();

    return 0;
}
