#include <stdio.h>
int main(){
    int x = 2;
    int* p = &x;
    printf("x = %d e p = %d\n", x, *p);
}