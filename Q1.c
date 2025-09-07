#include<stdio.h>

void bubble(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[8];
    int i;
    printf("Please inpute 8 numbers:");
    for(i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    bubble(arr,8);
 printf("After sorting:");
  for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
