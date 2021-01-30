#include<stdio.h>
#include<conio.h>
#include<string.h>

int simpleArraySum(int n,int arr[]){
    int sum=0,m=1;
    for(int i=0;i<sizeof(arr);i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("\n%d",simpleArraySum(n,arr));
}

