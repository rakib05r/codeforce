#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=1;n>0;++i,n--)
        if(!(i%m))n++;
    cout<<i-1<<endl;
    return 0;
}
