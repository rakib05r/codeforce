#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    a++;
    while(--a){
        if(b >= 2*a && c >= 4*a){
            break;
        }
    }

    cout<< a + 2*a + 4*a<<endl;


return 0;
}
