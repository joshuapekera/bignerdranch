//
//  main.c
//  Numbers
//
//  Created by Joshua Pekera on 6/22/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main(int argc, const char * argv[])
//{
//    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
//    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
//    printf("11 / 3 = %f\n", 11 / (float)3);
//    printf("The absolute value of -5 is %d\n", abs(-5));
//    return 0;
//}

int main(int argc, const char * argv[])
{
    double x = 1;
    double result = sin(x);
    printf("The sine of %.0f radian is %.3f", x, result);
    return 0;
}

