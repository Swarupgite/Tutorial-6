// for recursive understanding
#include<stdio.h>

int CountEvenR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iCount = 0;

    if(iCnt < iSize) 
    {
        if(Arr[iCnt] % 2 == 0)
        {
         iCount++;
        }
        iCnt++;
        CountEvenR(Arr,iSize);
    }
    return iCount;
}

int main()
{
    int Arr[5] = {11,20,31,40,51};
    int iRet = 0;

    iRet = CountEvenR(Arr,5);
    printf("Even element is : %d\n",iRet);

    return 0;
}
