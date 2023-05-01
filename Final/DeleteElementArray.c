#include<stdio.h>
int main(){

    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int position;
    scanf("%d",&position);
    arr[position]=0;

    for(int i=position; i<size-1; i++){
        arr[i]=arr[i+1];
    }
    
    
    for(int i=0; i<size-1; i++){
        printf("%d ",arr[i]);
    }



    return 0;
}