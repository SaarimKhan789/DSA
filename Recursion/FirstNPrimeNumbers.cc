#include<iostream>
using namespace std;

bool isPrime(int n){

    for(int i=2;i*i<=n;i++){

        if(n%i==0)
        return false;
    }

    return true;
}
void func(int n){

    if(n==1){
        return;
    }
    
    func(n-1);
    if(isPrime(n))
    cout<<n<<" ";
    
}

int main(){

    int n;
    cin>>n;

    func(n);

}