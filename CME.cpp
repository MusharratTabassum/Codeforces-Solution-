#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,p;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n==2)
            cout<<n<<endl;
        else
        {
            if(n%2==0)
                cout<<"0"<<endl;
            else
                cout<<2*(n/2+1)-n<<endl;
        }
 
    }
    
    return 0;
}