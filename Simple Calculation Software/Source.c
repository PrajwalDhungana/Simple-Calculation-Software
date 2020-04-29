//
//  Source.c
//  Simple Calculation Software
//
//  Created by Prajwal Dhungana on 4/24/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int firstInput(void)
{
    int first;
    printf("Please enter the first number: ");
    scanf(" %d", &first);
    return first;
}

int secondInput(void)
{
    int second;
    printf("Please enter the second number: ");
    scanf(" %d", &second);
    return second;
}

int addFn(int first, int second)
{
    int sum;
    sum = first + second;
    return sum;
}

int subFn(int first, int second)
{
    int sub;
    sub = first - second;
    return sub;
}

int mulFn(int first, int second)
{
    int mul;
    mul = first * second;
    return mul;
}

float divFn(int first, int second)
{
    float div;
    if (first > second)
    {
        div = first/second;
    }
    else
    {
        div = second/first;
    }
    return div;
}
