#include<stdio.h>
int main(){

    int size;
    scanf("%d",&size);
    int arr[size+1];

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int position,value;
    scanf("%d%d",&position,&value);

    for(int i=size; i>=position; i--){
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    
    for(int i=0; i<=size; i++){
        printf("%d ",arr[i]);
    }



    return 0;
}