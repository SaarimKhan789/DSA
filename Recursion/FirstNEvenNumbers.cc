#include<iostream>
using namespace std;

void func(int n){
    if(n==0){
        return;
    }
    func(n-1);
    if(n%2==0)
    cout<<n<<" ";
    
}

int main(){

    int n;
    cin>>n;

    func(n);

}