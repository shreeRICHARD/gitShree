#include<stdio.h>
#include<string.h>

void main(){                      //Error?

int len,count,i=0;
char a [10];
printf("enter palword :");
scanf("%s",&a);

len=strlen(a);

for(int i=0;i<len;i++){
    if(i==a [len-i-1]){
        count++;
    }
}
if(len==count){
    printf("palindrome");
}
else{
    printf("not a palindrome ");
}





}