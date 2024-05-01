#include<bits/stdc++.h>
using namespace std;

struct activity{
    int starting;
    int ending;
    char job[5];
};

bool compare(struct activity i1,struct activity i2){
    return (i1.ending < i2.ending);
}


int main(){
    struct activity arr[5]={{1,13,"j1"},{4,6,"j2"},{12,14,"j3"},{15,19,"j4"},{7,13,"j5"}};
    //sorting based on ending 
    sort(arr,arr+5,compare);
    
    int i=0;
    cout<<arr[i].job<<" "<<endl;

    for (int j = 1; j <= 5; j++)
    {
        if(arr[j].starting >=arr[i].ending ){
            cout<<arr[j].job<<" "<<endl;
            i=j;
        }
    }

   
  return 0;
    
}