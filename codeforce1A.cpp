#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long int n,m,a,flagsByRow,flagsByColumn;
     cin>>n>>m>>a;
    if(n % a == 0) {
        flagsByRow = n / a;
    }
    else{
        flagsByRow = n / a;
        flagsByRow++;
    }
    if (m % a == 0) {
        flagsByColumn = m / a;
    } else {
        flagsByColumn = m / a;
        flagsByColumn++;
    }
    cout << flagsByRow * flagsByColumn << endl;
    return 0;
}
