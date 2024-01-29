// for recursive understanding
#include<stdio.h>

int CountCapitalR(char * str)
{
    int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
        iCnt++;
        }
        str++;
        CountCapitalR(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalR(Arr);

    printf("Number of capital char are : %d\n",iRet);
    return 0;

}
