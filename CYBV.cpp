#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n < k)
        cout<<(k/n)<<endl;
        else if( n == k )
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
    }
	// your code goes here
	return 0;
}
