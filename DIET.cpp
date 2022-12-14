#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i = 0 ;i < n;i++) cin>>a[i] ;
        int m  = 0;
        int j ,l = 0;
        for(int i = 0 ;i< n;i++)
        {
            m = m - k +a[i];
            if(m < 0)
            {
                j = i ;
                l++;
                break;
            }
            
        }
        if(l == 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO "<<j+1<<endl;
    }
	// your code goes here
	return 0;
}
