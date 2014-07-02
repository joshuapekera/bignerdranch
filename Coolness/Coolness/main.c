//
//  main.c
//  Coolness
//
//  Created by Joshua Pekera on 6/24/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int i;
    for (int i = 0; i < 12; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i) {
            break;
        }
    }
    printf("The answer is %d.\n", i);
    return EXIT_SUCCESS;
}


//
//int main(int argc, const char * argv[]) {
//    int i = 0;
//    while (i < 12) {
//        printf("%d. Arron in Cool\n", i);
//        i++;
//    }
//    return EXIT_SUCCESS;
//}


//int main(int argc, const char * argv[]) {
//
//    int i;
//    for (int i = 0; i < 12; i++) {
//        printf("Checking i = %d\n", i);
//        if (i + 90 == i * i) {
//            break;
//        }
//    }
//    printf("The answer is %d.\n", i);
//    return EXIT_SUCCESS;
//}