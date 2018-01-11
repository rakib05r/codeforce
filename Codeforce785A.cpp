#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t,i,j,k,sum=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a;
        if(a=="Icosahedron"){
            j=20;
        }
        else if(a=="Tetrahedron"){
            j=4;
        }
        else if(a=="Cube"){
            j=6;
        }
        else if(a=="Dodecahedron"){
            j=12;
        }
        else if(a=="Octahedron"){
            j=8;
        }
        sum=sum+j;
    }
    cout<<sum<<endl;
    return 0;
}
