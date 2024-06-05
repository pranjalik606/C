//Write a C program that dynamically allocates memory for an array based on user input, accepts array elements from the user, calculates the sum of the odd elements of the array, and displays the result.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int i = 0, iFrequency = 0;

    for(i = 0 ; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{   
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = CountEven(Brr,iCount);
    printf("Number of even elements are : %d\n",iRet);
    
    free(Brr);

    return 0;
}
