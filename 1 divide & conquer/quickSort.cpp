#include <bits/stdc++.h>
using namespace std;


int pivot(int *arr,int s,int e){
    
    int pivot =arr[s];
    
    int count =0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot)
            count++;
    }
    int p = s+count;
    swap(arr[p],arr[s]);

    int itr1=s,itr2=e;

    while(itr1<p && itr2 > p){
        while (arr[itr1]< pivot)
        {
            itr1++;
        }
        while (arr[itr2]>pivot)
        {
            itr2--;
        }
        if(itr1<p && itr2>p)
            swap(arr[itr1++],arr[itr2--]);
    }

    return p;
}

void quickSort(int* arr,int s ,int e){
    if(s>=e)
        return;
    
    int p = pivot(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}



int main()
{
    int arr[5]={5,3,2,8,1};
    quickSort(arr,0,4);
    for (int i = 0; i <5; i++)
        cout<<arr[i]<<" ";
    



 return 0;
}