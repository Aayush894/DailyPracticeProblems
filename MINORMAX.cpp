#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ;i < n ;i++)
            cin>>a[i];
        
        int mx = a[0] ,mi = a[0] ;
        int l = 0 ;
        for(int i = 0 ;i< n; i++)
        {
          mx = max(a[i],mx);
          mi = min(a[i],mi);
          if(a[i] == mx || a[i] == mi)
          {
              l ++;
          }
        }
        if( l == n )
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
