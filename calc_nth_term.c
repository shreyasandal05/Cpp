#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int term(int n, int a, int b, int c) {
  //Write your code here.
  if(n==a){
  	return a;
  }
  else if(n==b){
  	return b;
  }
  else if(n==c){
  	return c;
  }
  else{
  	return (term((n-1),a,b,c)+term((n-2),a,b,c)+term((n-3),a,b,c));
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
