// for recursive understanding
#include<stdio.h>

int DisplayR(int iNo)
{
    if(iNo >= 1) 
    {
        iNo--;
        DisplayR(iNo);
        printf("%d\n",iNo);
    }
}

int main()
{
    DisplayR(5);

    return 0;
}
