#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    DisplayR(4);
    
    return 0;
}