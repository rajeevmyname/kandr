**Exercise 1.13**  
Write a program to print a histogram of the length of words in its input.
It is easy to draw the histogram with the bars horizontal, a vertical orientation is more challenging.

Code:
```
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
```

Input:  
`This is a great place to do good`

Output:
```
1 *
2 ***
3 
4 *
5 ***
6 
7 
8 
9 
10
```