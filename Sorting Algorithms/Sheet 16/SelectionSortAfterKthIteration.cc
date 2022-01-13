#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n,int k){

    for(int i=0;i<n-1;i++){

        if(i==k){
            break;
        }
        int sm=arr[i];
        int pos=i;
        for(int j=i+1;j<n;j++){

            if(arr[j]<sm){
                sm=arr[j];
                pos=j;
            }
        }
        swap(arr[i],arr[pos]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n,k;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    SelectionSort(arr,n,k);

}