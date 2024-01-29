// Not runable
#include<stdio.h>

void DisplayR()
{
    int iCnt = 1;   // if static is not used it gets output infinity

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

    printf("End of application\n");
    
    return 0;
}

