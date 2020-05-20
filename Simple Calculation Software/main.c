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
    
    //Using while infinite loop
    while (1)
    {
        //Print user menu
        printf("\n");
        printf("-----------------------------------------\n");
        printf("Welcome to the simple calculator program.\n");
        printf("-----------------------------------------\n");
        printf("Please select any:\n");
        printf("1 - Addition\n");
        printf("2 - Subtraction\n");
        printf("3- Multiplication\n");
        printf("4 - Division\n");
        printf("5 - Exit the program\n");
        printf("-----------------------------------------\n");
        printf("Your choice: ");
        scanf(" %d", &choice);
        printf("\n");
        
        switch (choice) {
            case 1:
                first = firstInput();
                second = secondInput();
                retValue = addFn(first, second);
                printf("\n");
                printf("The sum of %d and %d is %d\n", first, second, retValue);
                break;
                
            case 2:
                first = firstInput();
                second = secondInput();
                retValue = subFn(first, second);
                printf("\n");
                printf("The difference of %d and %d is %d\n", first, second, retValue);
                break;
                
            case 3:
                first = firstInput();
                second = secondInput();
                retValue = mulFn(first, second);
                printf("\n");
                printf("The product of %d and %d is %d", first, second, retValue);
                break;
                
            case 4:
                first = firstInput();
                second = secondInput();
                divReturn = divFn(first, second);
                printf("\n");
                printf("%d divided by %d gives %.2f\n", first, second, divReturn);
                break;
                
            case 5:
                printf("Thanks for using the program.\n");
                printf("Program closed\n");
                return EXIT_SUCCESS;
                
            default:
                printf("Please enter the correct input and try again.\n");
                break;
                
        }
        
    }
    //end of while infinite loop
    return 0;
}



