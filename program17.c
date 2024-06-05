/*
    0 to 35     fail                         (35 is exclusive)
    35 to 50    Pass class                   (35 is exclusive)
    50 to 60    Second class                 (35 is exclusive)
    60 to 75    First class                  (35 is exclusive)
    75 to 100   first lass with Distinction  (35 is exclusive)
*/

#include<stdio.h>

//User defined macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASS_CLASS 2
#define RET_SECOND_CLASS 3
#define RET_FIRST_CLASS 4
#define RET_DISTINCTION 5


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
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
        return RET_PASS_CLASS;
    }
    else if((fMarks >= 50.0f) && (fMarks < 60.0f))
    {
        return RET_SECOND_CLASS;
    }
    else if((fMarks >= 60.0f) && (fMarks < 75.0f))
    {
        return RET_FIRST_CLASS;
    }
    else if((fMarks >= 75.0f) && (fMarks <= 100.0f))
    {
        return RET_DISTINCTION;
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
    else if(iRet == RET_PASS_CLASS)
    {
        printf("Student is Pass class in the exam\n");
    }
    else if(iRet == RET_SECOND_CLASS)
    {
        printf("Student is Second class in the exam\n");
    }
    else if(iRet == RET_FIRST_CLASS)
    {
        printf("Student is First class in the exam\n");
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("Student is Distiction in the exam\n");
    }

    return 0;
}
