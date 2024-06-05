#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positive inputs

// Alogorithm

/*
    START
        Accept one number as No
        Divide that number No by 3
        If remainder is 0
        Divide that number No by 3
        If remainder is 0
        then print number is divisible by 3 and 5
        otherwise display the result is divisible by 3 and 5
    STOP
*/

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :       CheckDivisible
//  Description     :       Used to check whether number is divisible by 3 & 5
//  Input           :       Integer
//  Output          :       Boolean
//  Auther          :       Pranjali Dhananjay Kulkarni
//  Date            :       16/05/2024
////////////////////////////////////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is Not divisible by either 3 and 5\n",iValue);
    }

    return 0;
}

/*
    Logical && operator and || operator
    

    First           Second              Result(&&)      Result(||)
    true            true                true            true
    false           false               false           false
    true            false               false           true
    false           true                false           true
*/
