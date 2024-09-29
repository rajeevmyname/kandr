**Exercise 1.6**
Verify that the expression getchar() != EOF is 0 or 1

Code:
```
#include <stdio.h>

int main(){
    printf("%d\n", getchar() != EOF);
}
```
 
On running the program, the computer waits for our input.

Press any valid character (example 'r') and then Ctrl+D
Ctrl+D sends signals the end of the stream to the program

Output:  
`1`

getchar() equals 'r' which is not equal to EOF; and hence the output is printed as 1

Run the program again. This time press Ctrl+D on an empty line.
This sends EOF signal to the program through the terminal

Output:  
`0`

getchar() this time equals EOF, which is equal to EOF and hence returns 0