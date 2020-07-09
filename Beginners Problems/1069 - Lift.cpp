#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b,c=0,s,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        d = abs(a-b);
        s=d*4+(3+5+3)+(a*4)+(5+3);
        cout<<"Case "<<++c<<": "<<s<<"\n";
    }
    return 0;
}


