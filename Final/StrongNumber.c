#include<stdio.h>
int main(){

    int n,rem,temp,sum=0;
    scanf("%d",&n);

    temp=n;

    while (temp!=0){
        rem = temp%10;
        int fact=1;
        for(int i=1; i<=rem; i++)
        {
            fact=fact*i;
        }

        sum = sum+fact;
        temp=temp/10;
    }

    if(sum==n){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    

    return 0;
}
