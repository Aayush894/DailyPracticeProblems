#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        string s;
        string r;
        cin>>n>>s>>r;
        for( int i=0;i<n;i++)
        {
            if(s[i] == '1' )
            k ++;;
            if(r[i] == '1')
            k++;
        }
        if( k%2 == 0 )
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
    }
	// your code goes here
	return 0;
}
