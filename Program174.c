#include<stdio.h>
#define ERR_NOTFOUND -1

int LastOccurance(char *str , char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Charactor : \n");
    scanf(" %c",&ch);

    iRet = LastOccurance(Arr , ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is No Such charactor\n");
    }
    else
    {
        printf("Last Occurance of that charactor is : %d\n",iRet);
    }
    
    return 0;
}

// Time COmplixity : N