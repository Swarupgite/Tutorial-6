// for recursive understanding
#include<stdio.h>

int StrlenXR(char * str)
{
    int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenXR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenXR(Arr);

    printf("Length of string is : %d\n",iRet);
    return 0;

}
