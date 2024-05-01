#include <bits/stdc++.h>
using namespace std;

struct job_Sequencing
{
    char job[5];
    int deadline;
    int profit;
};

bool compare(job_Sequencing i1, job_Sequencing i2)
{
    return (i1.profit > i2.profit);
}

int main()
{
    struct job_Sequencing arr[5] = {
        {"a", 2, 100},
        {"b", 1, 19},
        {"c", 2, 27}, 
        {"d", 1, 25},
        {"e", 3, 15}
    };
    int n=5;

    sort(arr,arr+n,compare);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].job<<" "<<arr[i].deadline<<" "<<arr[i].profit<<endl;
    }
    


    int result[n];
    bool slot[n]= {false};


    for (int i = 0; i < n; i++)
    {
        for (int j = min(n,arr[i].deadline)-1; j >=0; j--)
        {
            if(slot[j] == false){
                result[j] =i;
                slot[j]=true;
                break;
            }
        }
        
    }
    cout<<"result = ";
    for (int i = 0; i < n; i++)
    {
        if(slot[i])
            cout<<arr[result[i]].job<<" ";
    }
    



    return 0;
}