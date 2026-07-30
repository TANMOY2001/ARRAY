// Transpose of Mattrix and Sum Of The Mattrix Element...
#include<stdio.h>
int main(){
    
    int i,j,sum=0,a[2][3];
    printf("\nEnter Array Element: ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           scanf("%d",&a[i][j]);
        }
    }
    printf("\nOriginal ARRAY Is: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d\t",a[i][j]);
           sum=sum+a[i][j];
           
        }
        printf("\n");
    }
    printf("\nTranspose Of Array Is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
           printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    printf("The Sum Is: %d",sum);

return 0;
}
