// for recursive understanding
#include<stdio.h>

int DisplayDigitsR(int iNo)
{
    int iDigit = 0;

    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayDigitsR(iNo);
        printf("%d",iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = DisplayDigitsR(iValue);
    return 0;
}
