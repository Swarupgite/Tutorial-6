#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0) 
    {
        iDigit = iNo % 10;
        printf("%d", iDigit);
        iSum += iDigit; // Accumulate the sum with the current digit
        iNo = iNo / 10;
        SumDigitsR(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = SumDigitsR(iValue);
    printf("\nSummation of digits : %d\n", iRet);

    return 0;
}
