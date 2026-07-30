#include<stdio.h>
#include<conio.h>
int main()
{
    int target;
    printf("Enter The Tergated Sum\n");
    scanf("%d",&target);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    int sum =arr[i]+arr[j];
    if(sum==target)
    {
        printf("The Pair is %d and %d",arr[i],arr[j]);
    }
    else if(sum>target)
    {
        j--;
    }
    else
    {
        i++;
    }
}