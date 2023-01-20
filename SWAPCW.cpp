#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        string str ; 
        cin>>str ;
        string s = str ;
        sort(s.begin(),s.end()) ;
        int k =0 ;
        for(int i = 0 ; i< n/2;i++)
        {
            if(s[i] != str[i])
            {
                char temp = str[i] ;
                str[i] = str[n-1-i];
                str[n-1-i] = temp ;
            }
        }
        for(int i = 0 ; i < n ;i++)
        if(str[i] != s[i])
        k++;
        
        
        if( k == 0)
        cout<<"YES"<<endl ;
        else 
        cout<<"NO"<<endl ;
    }
	// your code goes here
	return 0;
}
