#include<stdio.h>
int main(){

    int n,sum=0;
    scanf("%d",&n);

    int first=0;
    int second=1;
    printf("%d ",first);
    printf("%d ",second);

    for(int i=1; i<n; i++){
        sum = first+second;
        printf("%d ",sum);
        first=second;
        second=sum;
    }

    return 0;
}