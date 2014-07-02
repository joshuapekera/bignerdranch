//
//  main.c
//  Degrees
//
//  Created by Joshua Pekera on 6/22/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a Static Variable
static float lastTemperature = 11;

float fahrenheitFromCelcius (float cel)
{
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    return fahr;
}

int main(int argc, const char * argv[])
{
    float currentTemperatureC = lastTemperature;
    float currentTemperatureF = fahrenheitFromCelcius(currentTemperatureC);
    printf("The current temperature is %f Celcius or %f Fahrenheit.\n", currentTemperatureC, currentTemperatureF);
    if (currentTemperatureC <= 0) {
        printf("It is freezing!");
    } else if ((currentTemperatureC > 0) || (currentTemperatureC <= 10)) {
        printf("It's fucking cold!");
    }
    return EXIT_SUCCESS;
}
