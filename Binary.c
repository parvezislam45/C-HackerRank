#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
for(int i=0; i<n; i++){
    int s;
    int count=0;
    scanf("%d",&s);
    char temp[1];
    char str[s+1];
    gets(temp);
    gets(str);
    for(int j=0; j<s; j++){
        if(str[j]=='1'&&str[j+1]=='0')count++;
        else if(str[j]=='0'&&str[j]=='1')count++;
    }
    printf("%d",count);
}
}