#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],i,dif1,dif2,sum;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    dif1=a[2]-a[1];
    dif2=a[1]-a[0];
    sum=dif1+dif2;
    cout<<sum<<endl;
    return 0;
}
