#include <stdio.h>

int main() {
    
    int a = 10, b = 15;
    
    int *const ptr = &a;
    *ptr = 3; //valido
    ptr = &b; //no valido
    

    return 0;
}