//Program to enter temperature in celsius and convert it into fahrenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("\tAryan Sharma");
    printf("\n");

    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}