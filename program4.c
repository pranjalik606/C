// Problem Statement : Accept 2 numbers from user and perform its addition

#include<stdio.h>

int main()
{
    //int i, j, k;
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is : %2.3f\n",fResult);

    return 0;
}


/*

step 1: Understand the problem statement
step 2: Write the algorithm
step 3 : Decide the programming language
step 4 : Write the program
step 5 : Test the program

*/

/*
    START
        Accept first number from user and consider it as No1
        Accept second number from user and conside it as No2
        Create one variable to store the answer as Ans
        Perform the addition of No1 and No2
        store the result into Ans
        Display the value of Ans as a result
    STOP
*/

