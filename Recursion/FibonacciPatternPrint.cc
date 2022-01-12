#include<iostream>
using namespace std;
int fib(int n){

    if(n==0 || n==1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}

void func(int n){
  
for(int i=1;i<=n;i++){
    cout<<fib(i)<<" + ";
}
  
}


int main(){

    int n;
    cin>>n;
    func(n);
}