#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int profit;
    int weight;
};

bool
compare(Item i1, Item i2)
{
    double r1 = (double)i1.profit / (double)i1.weight;
    double r2 = (double)i2.profit / (double)i2.weight;
    return (r1 > r2);
}

int main()
{
    int n = 3, W = 50;
    struct Item arr[n] = {{60, 10}, {100, 20}, {120, 30}};
    sort(arr, arr + n, compare);

    float profit = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            profit += arr[i].profit;
        }
        else
        {
            profit += arr[i].profit * ((double)W / (double)arr[i].weight);
            break;
        }
    }

    cout<< profit<<endl;
    return 0;
}