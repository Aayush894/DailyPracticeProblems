#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if( n % 2 == 1 && m % 2 == 1 )
        cout<<(m + n) -1 <<endl;
        else if( n % 2 == 1)
        cout<<m<<endl;
        else if( m % 2 == 1)
        cout<<n<<endl;
        else
        cout<<"0"<<endl;
    }
	// your code goes here
	return 0;
}
