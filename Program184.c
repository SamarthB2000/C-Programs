#include<stdio.h>

void strcpysmallX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    strcpysmallX(Arr,Brr);

    printf("String after Copy : %s\n",Brr);

    return 0;
}
