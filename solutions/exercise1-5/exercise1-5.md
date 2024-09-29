**Exercise 1.5**
Modify the temperature conversion program to print the table in reverse order, that is from 300 degrees to 0

Code (using while loop):
```
#include <stdio.h>

/*print Farenheit to Celsius table
    for fahr = 0, 20, 40, ..., 300*/

int main(){
    float fahr, celsius;
    int lower, step, upper;

    lower = 0;  // lower limit of temperature table
    step = 20;  // step size
    upper = 300;// upper limit

    fahr = upper;
    
    printf("Fahrenheit to Celsius Table\n");
    while(fahr >= lower){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}
```

Code (using for loop):

```
#include <stdio.h>

/*print Farenheit to Celsius table
    for fahr = 0, 20, 40, ..., 300*/

int main(){
    float fahr, celsius;
    int lower, step, upper;

    lower = 0;  // lower limit of temperature table
    step = 20;  // step size
    upper = 300;// upper limit
    
    printf("Fahrenheit to Celsius Table\n");
    for(fahr = upper; fahr >= lower; fahr = fahr - step){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}
```

Output:
```
Fahrenheit to Celsius Table
300  148.9
280  137.8
260  126.7
240  115.6
220  104.4
200   93.3
180   82.2
160   71.1
140   60.0
120   48.9
100   37.8
 80   26.7
 60   15.6
 40    4.4
 20   -6.7
  0  -17.8
```