#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int palindrome(char *a){
	int i=0,j=strlen(a)-1;
	while(i<j && a[i]==a[j]){
		i++;
		j--;
	}
	if(i<j){
		cout<<"Not a palindrome";
		return 0;
	}
	else{
		cout<<"palindrome";
		return 1;
	}
	
}

int main(){
	int n;
	cin>>n;
	char arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	palindrome(arr);
	return 0;
}
