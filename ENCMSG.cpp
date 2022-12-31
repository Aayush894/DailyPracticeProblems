#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s ;
        cin>>s;
        for(int i = 0 ; i < (n-1) ; i+=2)
        {
            int temp = s[i] ;
            s[i] = s[i+1] ;
            s[i+1] = temp ;
        }
        for(int i = 0 ; i < n ;i++)
            s[i] = (219 - s[i]) ;
        cout<<s<<endl;
    }
	// your code goes here
	return 0;
}
