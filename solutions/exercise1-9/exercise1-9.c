#include <stdio.h>

int main(){
    int c, pc = '\0';

    while((c = getchar()) != EOF){
        if(!(pc == ' ' && c == ' '))
            putchar(c);

        pc = c;
    }
}