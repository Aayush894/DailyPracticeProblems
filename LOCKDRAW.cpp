#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a , b, c ;
        cin>>a>>b>>c ;
        if( (a == (b + c)) || (b == (a + c)) || (c == (a + b)) )
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl ;
    }
	// your code goes here
	return 0;
}
