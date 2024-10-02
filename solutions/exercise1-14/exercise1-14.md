**Exercise 1.14**
Write a program to print a histogram of the frequencies of different characters in its input

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
`This is a great example`

Output:  
```
! 
" 
# 
$ 
% 
& 
' 
( 
) 
* 
+ 
, 
- 
. 
/ 
0 
1 
2 
3 
4 
5 
6 
7 
8 
9 
: 
; 
< 
= 
> 
? 
@ 
A 
B 
C 
D 
E 
F 
G 
H 
I 
J 
K 
L 
M 
N 
O 
P 
Q 
R 
S 
T *
U 
V 
W 
X 
Y 
Z 
[ 
\ 
] 
^ 
_ 
` 
a ***
b 
c 
d 
e ***
f 
g *
h *
i **
j 
k 
l *
m *
n 
o 
p *
q 
r *
s **
t *
u 
v 
w 
x *
y 
z 
{ 
| 
} 
~
```