#include<iostream>
using namespace std;

int run_sum(int A[], int n){
    for(int i=1; i<n ; i++){
        A[i] = A[i]+A[i-1];
    }
    cout<<"The running sum array is ";
    for (int i=0; i<n ; i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int n, A[n];
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for (int i=0; i<n ; i++){
        cin>>A[i];
    }
    run_sum(A, n);
}