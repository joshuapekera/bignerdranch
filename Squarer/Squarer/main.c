//
//  main.c
//  Squarer
//
//  Created by Joshua Pekera on 6/22/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>

int squareNumber(int numberA)
{
    int numberB = numberA * numberA;
    return numberB;
}

int main(int argc, const char * argv[]) {
    
    int startingNumber = 5;
    int finalNumber = squareNumber(startingNumber);
    printf("\"%d\" square is \"%d\".\n", startingNumber, finalNumber);

    
}
