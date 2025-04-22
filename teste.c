#include <stdio.h>
int main(){
    char ch = '\0';
    while(ch != 'z'){
        scanf("%c", &ch);
        printf("%c\n", ch);
    }
}