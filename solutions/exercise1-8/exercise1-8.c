#include <stdio.h>

int main(){
    int c;
    int n_blanks,n_tabs, n_newlines;
    n_blanks = n_tabs = n_newlines = 0;

    while((c = getchar()) != EOF){
        if(c == ' ')
            ++n_blanks;
        else if(c == '\t')
            ++n_tabs;
        else if(c == '\n')
            ++n_newlines;
    }
    printf("\nblanks:%d, tabs:%d, newlines:%d\n", n_blanks, n_tabs, n_newlines);
}