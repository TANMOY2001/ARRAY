#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int i,j=0,n=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<n;i++){
        printf("i = %d ",arr[i]);
        printf("j = %d\n",arr[j]);
        j++;


    }
}