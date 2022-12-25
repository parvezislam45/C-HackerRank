#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[50], i, j, count=0;
    printf("Enter any string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
        count++;
    for(j=(count-1); j>=0; j--)
        printf("%c", str[j]);
    getch();
    return 0;
}  