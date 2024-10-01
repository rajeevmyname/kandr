**Exercise 1.11**
How would you test the word count program? What kind of inputs are most likely to uncover bugs if there are any?

Code:  
```
#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

// count lines, words and characters in input
int main(){
    int c, nl, nw, nc, state;
    
    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
```
We would try to test for edge cases?

1. Supply 0 lines to the inputs

Input  
``
Output:  
`0 0 0`

2. Supply some characters and send EOF without pressing newline

Input:  
`hello`

Output:  
`0 1 5`

*This is a potential bug. There is at least one line if there are characters in the line.*

3. Supply several words and several lines.  

Input:  
```
We live in a great country
    with great resources
and people
```

Output:
`3 11 60`

4. Supply a line starting with space character

Input:
` hello`

Output:  
`1 1 7`

5. Supply a line with only space or only newline or both.

There seems to be only 1 potential bug in the given word count program code.