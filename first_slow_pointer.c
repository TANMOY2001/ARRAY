#include <stdio.h>
int main(){
    int arr[]={1,1,2,3,3,4,5};
    int i=0,j=1,n=sizeof(arr)/sizeof(arr[0]);
    for(j;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
        else{
            
        }
    }
    int k=0;
    for(k;k<=i;k++){
        printf("%d",arr[k]);
    }
}