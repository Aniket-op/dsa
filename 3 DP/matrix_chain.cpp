#include<bits/stdc++.h>
using namespace std;

int matrix_chain(int arr[],int n){
    
    int m[n][n]={0};

    for (int L = 2; L < n; L++)
    {
        for (int row = 0, col = L; row < n-L; row++,col++)
        {
            m[row][col] = INT_MAX;
            for (int k= row+1; k< col; k++)
            {
                m[row][col] = min(m[row][col],m[row][k]+m[k][col]+arr[row]*arr[k]*arr[col] );
            }
        }
    }
    
return m[0][n-1];

    
}


int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<matrix_chain(arr,n);

    return 0;
}