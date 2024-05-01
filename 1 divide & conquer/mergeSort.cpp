#include<bits/stdc++.h>
using namespace std;


void sort(int *arr,int s, int mid, int e){
    int len1 = mid - s +1;
    int len2 = e-mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k1=s;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k1++];
    }
    k1=mid+1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k1++];
    }
    
    int itr1=0,itr2=0;
    k1=s;
    while(itr1 < len1 && itr2 < len2){
        if(arr1[itr1]>arr2[itr2])
            arr[k1++]=arr2[itr2++];
        else    
            arr[k1++] = arr1[itr1++];
    }
    while(itr1 < len1){
        arr[k1++] = arr1[itr1++];
    }
    while(itr2 < len2){
        arr[k1++] = arr2[itr2++];
    }

    delete[] arr1;
    delete[] arr2;
}


void mergeSort(int *arr, int s , int e){
    if(s>=e)
        return ;
    int mid =(s+e)/2 ;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    sort(arr,s,mid,e);
}





int main(){
    int arr[5]={5,3,2,8,1};
    mergeSort(arr,0,4);
    for (int i = 0; i <5; i++)
        cout<<arr[i]<<" ";
    
    return 0;
};