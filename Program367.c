#include<stdio.h>

void Display(char *str)
{
   if(*str != '\0')
    {
        printf("%s\n",str);
        str++;
        Display(str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}