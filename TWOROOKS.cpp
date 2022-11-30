#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if( a == c || b == d )
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
