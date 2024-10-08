#include<stdio.h>

int main(){
    int num,count=0;

    printf("Entre the integer :");
    scanf("%d",&num);

if (num==0){
    count=1;
}
else{

    while(num!=0){
        num/=10;
        count++;
    }

printf("the number of digit is %d\n",count);

}


}