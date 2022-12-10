#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,v;
        cin>>n>>k>>v;
        int a[n];
        int sum=0;
        int t = (n+k) * v ;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        int p = t - sum ;
        if(p<=0)
        cout<<"-1"<<endl;
        else 
        {
            if(p%k == 0)
                cout<<(p/k)<<endl;
            else 
                cout<<"-1"<<endl;
        }
    }
	// your code goes here
	return 0;
}
