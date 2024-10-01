#include <stdio.h>

#define OUT 0 //outside the word
#define IN 1 //inside the word
int main(){
    int c, state;

    state = OUT;

    while((c = getchar()) != EOF){
        if(c == '\t' || c == ' ' || c == '\n'){
            if(state == IN){
                putchar('\n');
                state = OUT;
            }    
        }
        else{
            state = IN;
            putchar(c);
        }
            
    }
}