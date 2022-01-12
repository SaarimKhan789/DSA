#include<iostream>
#include<math.h>
using namespace std;

void func(int n){
    
    if(n==1){
        cout<<1<<"/"<<pow(3,n-1)<<" + ";
        return;
    }
    
    func(n-1);
    cout<<1<<"/"<<pow(3,n-1)<<" + ";
    
}

int main(){

    int n;
    cin>>n;

    func(n);

}