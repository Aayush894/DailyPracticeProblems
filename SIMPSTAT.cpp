#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--)
    {
        int n, k ; 
        cin>>n>>k ; 
        int a[n] ;
        for(int i = 0 ;i < n;i++)
        cin>>a[i] ; 
        
        sort(a,a + n ) ; 
        double avg = 0 ; 
        for(int i = k ; i < n-k ;i++)
        {
            avg += a[i] ; 
        }
        cout<<fixed<<setprecision(6)<<avg/(n - (2 * k))<<endl ; 
        //use fixed and setprecision for the result in 6 precise value
    }
	// your code goes here
	return 0;
}
