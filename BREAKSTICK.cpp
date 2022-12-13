#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if((n%x)%x== 0 )
        cout<<"yes"<<endl;
        else if( (n % 2 == 0) && (x % 2 == 0) || x % 2 == 1 )
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
