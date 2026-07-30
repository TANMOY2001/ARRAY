#include<stdio.h>
//#include<conio.h>
int main(){
int arr[]={11,12,13,14,14,14,14,15,15,16,16,16,17,20,20,20,20,20,20,20};    //1,1,2,2,4,5,6,6,7,7,7,7};
int i=0,j,k;
int n = sizeof(arr)/sizeof(arr[0]);
printf("single element size: %d\n",sizeof(arr)/sizeof(arr[0]));   //start arr size : %d",sizeof(arr)/sizeof(arr[0]));
printf("sizeof Array- %d",sizeof(arr));

for (j=1;j<n;j++){
    //printf("%d",i);
    if(arr[i] == arr[j]){
        
    }
    else if(arr[i] < arr[j]){
        i++;
        arr[i]=arr[j];
    }  
}
printf("%d\n",i);
for(k=0;k<=i;k++){
    printf("arr[%d] = %d\n",k,arr[k]);
}

}