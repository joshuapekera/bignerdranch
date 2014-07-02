//
//  main.c
//  Triangle
//
//  Created by Joshua Pekera on 6/22/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

float remainingAngle (float angleOne, float angleTwo)
{
    float missingAngle = 180 - (angleOne + angleTwo);
    return missingAngle;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    
    return 0;
}
