#include<stdio.h>
int main()
{
    int i;
    /*
    char str[10]={'B','H','O','P','A','L'};
    for(i=0;str[i];i++)
    printf("%c",str[i]);
    */
    //!Calculate length of string
    char str[10]="BHOPAL";
    for(i=0; str[i];i++);
        printf("%s\n",str);
    printf("String length= %d",i);
    return 0;
}