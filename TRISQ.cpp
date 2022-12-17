#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int b;
        cin>>b;
        int ans=0 ;
        while(b > 2)
        {
            ans = ans + ((b/2) -1) ;
            b = b - 2 ;
        
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
