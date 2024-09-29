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