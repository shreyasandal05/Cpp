#include <bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int simpleArraySum(int n,int arr[]){
    int sum=0,m=1;
    for(int i=0;i<sizeof(arr);i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     cout<<simpleArraySum(n,arr);
}

