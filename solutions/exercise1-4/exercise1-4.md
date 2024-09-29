**Exercise 1.4**
Write a program to print the corresponding Celsius to Fahrenheit table.  

Code:
```
#include <stdio.h>
/*print Celsius-Fahrenheit table
    for celsius = -20, -18, -16, ..., 150*/
int main(){
    float celsius, fahr;
    int lower, step, upper;

    lower = -20; //lower limit of the temperature table
    step = 10;   //step size
    upper = 150; //upper-limit

    celsius = lower;

    printf("Celsius-Fahrenheit Temperature Table\n");
    while(celsius <= upper){
        fahr = ((9.0 / 5.0) * celsius) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
```

Output:
```
Celsius-Fahrenheit Temperature Table
-20   -4.0
-10   14.0
  0   32.0
 10   50.0
 20   68.0
 30   86.0
 40  104.0
 50  122.0
 60  140.0
 70  158.0
 80  176.0
 90  194.0
100  212.0
110  230.0
120  248.0
130  266.0
140  284.0
150  302.0
```