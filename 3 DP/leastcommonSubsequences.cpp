#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2, int m, int n){
    //create matrix of m+1 X n+1 
    int L[m+1][n+1];

    for (int i = 0; i <=m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i == 0 || j == 0)
                L[i][j] = 0 ;
            
            else if(s1[i] == s2[j])
                L[i][j] = 1 + L[i-1][j-1];

            else
                L[i][j] = max(L[i-1][j],L[i][j-1]);
        }
        
    }

    return L[m][n];
}



int main(){
    string s1 ="Aniket Kumar";
    string s2 ="nitin";
    int a = s1.size();
    int b = s2.size();
    cout<<lcs(s1,s2,a,b);



    return 0;
}