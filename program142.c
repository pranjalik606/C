// WAP that reads an array integer from user and and check number is greater than 100 that element update to 0.
#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > 100)
        {
           Arr[i] = 0;
        }
    }
}

int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter number of elements that you want to enter : \n"); // 1
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));                      // 2

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)                                     // 3
    {
        scanf("%d",&Brr[i]);
    }

    Updator(Brr,iCount);                                     // 4

    printf("Data after updation is : \n");
    for(i = 0 ; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);                                                      // 5
    return 0;
}