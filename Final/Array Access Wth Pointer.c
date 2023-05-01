#include<stdio.h>
int main(){

    int arr[5]={5,1,5,6,5};

    int *p=&arr[0];

    for(int i=0; i<5; i++){
        printf("%d\n",*p);
        *p++;
    }


    return 0;
}
