#include<conio.h>
int main()
{
    int i,j;
    printf("Enter The Row & Column Size\n");
    scanf("%d %d", &i, &j);
    int arr[i][j];
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("Enter Array Element for : [%d] [%d] \n",k,l);
            scanf("%d",&arr[k][l]);// data insersion
        }
    }
}

