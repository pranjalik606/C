#include<stdio.h>

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // filter
    {
       return 1; 
    }
    if((fMarks >= 0) && (fMarks < 35.0f))    
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage\n");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if(iRet == 1)
    {
        printf("Invalid Input from User\n");
    }
    else if(iRet == 2)
    {
        printf("Student is fail in the exam\n");
    }
    else
    {
        printf("Student is Pass in the exam\n");
    }
    return 0;
}