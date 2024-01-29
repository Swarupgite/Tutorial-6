// for recursive understanding
#include<stdio.h>

int DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5) 
    {
        iCnt++;
        printf("%d\n",iCnt);
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
