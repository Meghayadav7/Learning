#include <stdio.h> 
float celsiusTofahrenheit(float celsius);

int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusTofahrenheit(celsius);

    printf("The value of temperature conversion is %f", fahrenheit);
    return 0;
}
float celsiusTofahrenheit(float celsius){
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit;
}