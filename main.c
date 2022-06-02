#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    float faraenheit;
    printf("Enter Celsius\n");
    scanf("%f",&celsius);
    faraenheit = (1.8)* celsius +32;



    printf("Celsius = %f\nFaraenheit = %f",celsius,faraenheit);
    return 0;
}
