#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        string s ;
        cin>>s ;
        sort(s.begin(),s.end()) ;
    
        int ans = 0 ;
        for(int i = 0 ; i< s.length();i++)
        {
            char ch = s[i] ;
            int a = ch ;
            ans = ans + (i + 1)*(a - 96 ) ;
        }
        cout<<ans<<endl ;
    }
	// your code goes here
	return 0;
}
