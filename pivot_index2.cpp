#include<iostream>
using namespace std;

void pivot(int A[], int n){
    int j, k;
    int sum = 0;
    for(int i=0; i<n; i++){
            sum = sum + A[i];
        }
    while(j<k){
        int pivot_sum = 0, pivot_sum2 = 0; 
        j = 0; k=n-1;
        while(j<=n && pivot_sum <= sum/2){
            pivot_sum = pivot_sum + A[j];
            j++;
        }
        while(k>=0 && pivot_sum2 <= sum/2){
            pivot_sum = pivot_sum + A[k];
            k--;
        }
    }
    cout<<"The index is "<<k<<endl;
        if (k==n/2)
        cout<< k;
        else cout<< "-1"<<endl;
}
    
int main(){
    int A[] = {1, 7, 3, 6, 5, 6};
    int n = 6;
    pivot(A, n);
        return 0;
}
