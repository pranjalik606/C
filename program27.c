// Write a program to print take a frequency that how much time you want to display "Jay Hanuman..." on the screen take input from user and print it that much time using for loop.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display numbers on screen : ");
    scanf("%d",&iValue);

    Display(iValue);         

    return 0;
}