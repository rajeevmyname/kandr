#include <stdio.h>

#define MAX_WORD_LENGTH 10

int main(){
    int c, wc = 0;
    int wl[MAX_WORD_LENGTH + 1];

    for(int i = 0; i <= MAX_WORD_LENGTH; ++i){
        wl[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c != '\t' && c != ' ' && c != '\n')
            ++wc;
        else{
            ++wl[wc]; 
            wc = 0;
        }
    }
    for(int i = 1; i <= MAX_WORD_LENGTH; ++i){
        printf("%d ", i);
        for(int j = 0; j < wl[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}