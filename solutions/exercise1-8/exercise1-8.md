**Exercise 1.8**
Write a program to count blanks, tabs and newlines.

Code:
```
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
```
Input:  
hello   this is my home
can you please come in

Output:
`blanks:7, tabs:1, newlines:1`