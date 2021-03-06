#include<iostream>
#include<string>
using namespace std;

bool palindrome(string str,int beg,int end){
    if(beg>=end){       //base case
        return true;
    }
    if(str[beg]!=str[end]){ 
        return false;
    }
    return palindrome(str,beg+1,end-1);  //check rest of the pair
}

int main(){
    string str;
    cin>>str;
    int n=str.length();
    if(palindrome(str,0,n-1)){
        cout<<"Palindrome\n";
    }
    else{
        cout<<"not a palindrome\n";
    }
    return 0;
}