// write a program which accept number from user and check whether it is in range in between 10 to 20 or not?

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 10) && (iNo <= 20))
    {   return true;    }
    else
    {   return false;   }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("%d is in the range 10 to 20\n",iValue);
    }
    else 
    {
        printf("%d is not in the range 10 to 20\n",iValue);
    }
    return 0;
}