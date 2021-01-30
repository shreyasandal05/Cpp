#include<stdio.h>
#include<iostream>

using namespace std;

int decreasing(int n){
	if(n==0){
		return 0;
	}
	cout<<n<<endl;
	decreasing(n-1);
}

void increasing(int n){
	if(n==1){
		cout<<"1"<<endl;
		return ;
	}
	increasing(n-1);
	cout<<n<<endl;
	
} 

int main(){
	int n,result;
	cin>>n;
	
    decreasing(n);
    increasing(n);
	
	return result;
}
