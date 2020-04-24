//
//  main.c
//  Simple Calculation Software
//
//  Created by Prajwal Dhungana on 4/24/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(int argc, const char * argv[]) {
    
    //creating necessary variables
    int first;
    int second;
    int choice;
    int retValue;
    float divReturn;
    
    //Asking for user input
    printf("Please enter the first number: ");
    scanf(" %d", &first);
    
    printf("Please enter the second number: ");
    scanf(" %d", &second);
    
    //Using while infinite loop
    while (1)
    {
        //Print user menu
        printf("-----------------------------------------\n");
        printf("1 - Addition\n");
        printf("2 - Subtraction\n");
        printf("3- Multiplication\n");
        printf("4 - Division\n");
        printf("5 - Exit the program\n");
        printf("-----------------------------------------\n");
        scanf(" %d", &choice);
        
        switch (choice) {
            case 1:
                retValue = addFn(first, second);
                printf("The sum of %d and %d is %d\n", first, second, retValue);
                break;
                
            case 2:
                retValue = subFn(first, second);
                printf("The difference of %d and %d is %d\n", first, second, retValue);
                break;
                
            case 3:
                retValue = mulFn(first, second);
                printf("The product of %d and %d is %d", first, second, retValue);
                break;
                
            case 4:
                divReturn = divFn(first, second);
                printf("%d divided by %d gives %.2f\n", first, second, divReturn);
                break;
                
            case 5:
                printf("Thanks for using the program.\n");
                printf("Program exiting\n");
                printf("Program exited\n");
                return EXIT_SUCCESS;
                
            default:
                printf("Please enter the correct input and try again.\n");
                break;
                
        }
        
    }
    return 0;
}



