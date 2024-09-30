**Exercise 1.9**
Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

Code:
```
#include <stdio.h>

int main(){
    int c, pc = '\0';

    while((c = getchar()) != EOF){
        if(!(pc == ' ' && c == ' '))
            putchar(c);

        pc = c;
    }
}
```

Input:  
hello there     how are  you  

Output:  
`hello there how are you`