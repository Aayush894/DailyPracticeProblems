//#include <bit/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
  
int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        
        int k=0 ;    
        for( int i =0 ;i<n ; i+=2 )
        {
            if( s[i] != s[i+1] )
               k++;
        }
        
        if( k == 0 )
            cout<<"yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
