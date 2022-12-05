#include <iostream>
using namespace std;
#include <string>

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n];
        for( int i=0 ; i<n ; i++)
            cin>>s[i];
        string v;
        cin>>v;
        int sum = 0 ;
        for( int i =0;i<n;i++)
        {
            if(v[i] == '0')
            {
                if( sum == 0 )
                sum = s[i];
                else if( s[i] < sum)
                sum = s[i];
            }
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
