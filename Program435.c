#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;
    while(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;   // if static is not used it gets output infinity

    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    
    return 0;
}

