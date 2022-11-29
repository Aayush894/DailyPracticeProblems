#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d,e,f;
        cin>>d>>e>>f;
        if( ( a + b + c ) == ( d + e + f ))
        cout<<"Pass"<<endl;
        else 
        cout<<"Fail"<<endl;
    }
	// your code goes here
	return 0;
}
