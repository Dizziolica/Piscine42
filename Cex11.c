#include <stdio.h>

void ft_putstr_non_printable(char *str){
    
	int i = 0;
	while (str[i] != '\0'){
		if (str[i] >=32 && str[i] <= 126) {
		printf("%c", str[i]);
		}
		else {
	            printf("\\%02x", (unsigned char) str[i]);       
		}
		i++;
		}

			



}
int main() {

    char origem[] = "Ola\nesta bem?";
    ft_putstr_non_printable(origem);    
    return 0;
   
}
