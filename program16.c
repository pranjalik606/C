#include<stdio.h>

//User defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // filter
    {
       return RET_INVALID; 
    }
    if((fMarks >= 0) && (fMarks < 35.0f))    
    {
        return RET_FAIL;
    }
    else
    {
        return RET_PASS;
    }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage\n");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    if(iRet == RET_INVALID)
    {
        printf("Invalid Input from User\n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is fail in the exam\n");
    }
    else if(iRet == RET_PASS)
    {
        printf("Student is Pass in the exam\n");
    }
    return 0;
}
