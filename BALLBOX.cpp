#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k ;
        int mn = ((k*(k+1))/2) ;
        
        if(mn <= n)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
