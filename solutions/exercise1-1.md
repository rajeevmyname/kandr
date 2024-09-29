1. Original C program  
```
#include <stdio.h>

int main(){
    printf("hello, world\n");
}
```

Output
`hello, world`

2. Leaving out the standard input/output library

```
int main(){
    printf("hello, world\n");
}
```

Output:
`warning: implicit declaration of function 'printf'`

3. Leaving out the return type on function main()

```
#include <stdio.h>

main(){
    printf("hello, world\n");
}
```

Output:
`warning: return type defaults to 'int'`

4. Leaving out the function main()

```
#include <stdio.h>

printf("hello, world\n");
```

Output:
`error: expected declaration specifiers or '...' before string constant`

5. Leaving out the arguments to the function printf()

```
#include <stdio.h>

int main(){
    printf();
}
```

Output:
`error: too few arguments to function 'printf'`