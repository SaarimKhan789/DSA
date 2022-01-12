#include<iostream>
using namespace std;
int fib(int n){

    if(n==0 || n==1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}
int_fast32_t func(int n){
  
  int sum=0;

for(int i=1;i<=n;i++){
    sum+=fib(i);
}

return sum;
  
}


int main(){

    int n;
    cin>>n;
    cout<<func(n)<<endl;
}