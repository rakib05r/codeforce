#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cost= 0;
    cin>>n;
    cost=cost+ n/5;
    n=n%5;
    cost+= n/4;
    n %= 4;
    cost+= n/3;
    n %= 3;
    cost+= n/2;
    n %= 2;
    cost+= n/1;
    n %= 1;
    cout << cost <<endl;
    return 0;
}
