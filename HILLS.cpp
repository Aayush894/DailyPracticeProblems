#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,d;
        cin>>n>>u>>d;
        int h[n];
        for(int i = 0;i<n;i++)
            cin>>h[i];
        int k = 0 ,l = 0 ;    
        for(int i = 0 ;i < n;i++)
        {
            if( ((h[i] >= h[i+1])&&((h[i]-h[i+1])<=d)) || ((h[i]<=h[i+1])&&((h[i+1]-h[i])<=u)) )
            k++;
            else if(((h[i] - h[i+1]) > d) && (l == 0) )
            {
                k++;
                l++;
            }
            else 
            break;
        }
        cout<<k+1<<endl;
    }

	// your code goes here
	return 0;
}
