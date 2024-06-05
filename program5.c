#include<stdio.h>

///////////////////////////////////////////////
// 
//  Function Name : Addition
//  Description : It is used 
//
//
//
//
//
///////////////////////////////////////////////////// 
float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0f;
    fAns = fNo1 + fNo2;
    return fAns;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1,fValue2);

    printf("Addition is : %2.3f\n",fResult);



    return 0;
}