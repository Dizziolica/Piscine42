#include <stdio.h>
void ft_swap(int *a , int *b){
    int swap;
    swap = *a;
    
    *a = *b;
    *b = swap;
}

int main() {
    // Write C code here
    int x = 10;
    int y = 5;
    
    ft_swap(&x, &y);
    printf("%d, %d", x, y);

    return 0;
}
