#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){

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

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    SelectionSort(arr,n);

}