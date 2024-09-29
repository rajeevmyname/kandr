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