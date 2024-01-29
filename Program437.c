#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}
int main()
{
    Display();
    
    return 0;
}