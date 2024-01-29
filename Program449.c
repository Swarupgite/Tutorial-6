#include<stdio.h>

int DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0) 
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = DisplayDigits(iValue);
    return 0;
}
