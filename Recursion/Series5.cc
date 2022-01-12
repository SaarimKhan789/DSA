#include<iostream>
#include<math.h>
using namespace std;

void func(int n){
    
    if(n==1){
        cout<<1<<"^"<<n<<" + ";
        return;
    }
    
    func(n-1);
    cout<<1<<"^"<<n<<" + ";
    
}

int main(){

    int n;
    cin>>n;

    func(n);

}