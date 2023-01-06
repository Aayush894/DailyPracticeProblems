#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        int m = 0 ;
        for(int i = 0 ; i < n ; i++ )
        {
            int k = count(s.begin(),s.end(),s[i]) ;
            if(k%2 == 1)
            m++ ;
        }
        if(m == 0)
        cout<<"YES"<<endl; 
        else 
        cout<<"NO"<<endl; 
        
    }
	// your code goes here
	return 0;
}
