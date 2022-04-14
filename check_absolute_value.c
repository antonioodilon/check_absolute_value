#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Declaring the function:
float checkAbsoluteValue(float);

int main(void){
    float numberToBeChecked;

    printf("This program will tell you what the absolute value of the number you provide is.\n");
    printf("Please insert a number: ");
    scanf("%f", &numberToBeChecked);
    printf("The absolute value of %.2f is %.2f", numberToBeChecked, checkAbsoluteValue(numberToBeChecked));

    return 0;
};

float checkAbsoluteValue(float number)
{
    float absoluteValue;
    //float number;

    if (number < 0)
    {
        absoluteValue = -number;
    } else {
        absoluteValue = number;
    };
    return absoluteValue;
};
