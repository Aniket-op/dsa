#include<bits/stdc++.h>

using namespace std;


int knapsack(int wt[],int profit[],int m,int n){

    vector<vector <int>> k(n+1,vector <int>(m+1));

    for (int i = 0; i <=n; i++)
    {
        for (int  w = 0; w <=m; w++)
        {
            if(i==0 || w ==0)
                k[i][w] =0;
            else if(wt[i-1]<=w)
                k[i][w] = max(profit[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else
                k[i][w] = k[i-1][w];
        }
        
    }
    return k[n][m];
}




int main(){

    int profit[] = { 60, 100, 120 };
    int weight[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout <<"value ="<<knapsack(weight, profit,W, n);


    return 0;
}