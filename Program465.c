// for recursive understanding
#include<stdio.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    while(iCnt < iSize) 
    {
        if(Arr[iCnt] % 2 == 0)
        {
         iCount++;
        }
        iCnt++;
    }
    return iCount;
}

int main()
{
    int Arr[5] = {11,20,31,40,51};
    int iRet = 0;

    iRet = CountEven(Arr,5);
    printf("Even element is : %d\n",iRet);

    return 0;
}
