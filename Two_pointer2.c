# include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[]={0,1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(int);

    int target=1;
    int i=0,j=n-1;

    
    // i++;
    // printf("%d\n",arr[i]);
    // printf("left= %d\n",left);
    
    while (i < j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            printf("%d + %d = %d",arr[i],arr[j],target);
            break;
        }
        else if(sum < target){
            i++;
          //  printf("inside elif i = %d",i);
        }
        else{
            j--;
        }  
    }   
}