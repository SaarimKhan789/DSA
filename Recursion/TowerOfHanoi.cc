#include<iostream>
using namespace std;

void tower(int n,char A,char B,char C){
    if(n==0){
        return;
    }
    tower(n-1,A,C,B);
    cout<<"Move disk "<<n<<" from "<<A<<" to "<<B<<endl;
    tower(n-1,C,B,A);
}

int main(){

    int n;
    cin>>n;

    tower(n,'A','B','C');
}