#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f,g;
        cin>>a>>b>>c>>d>>e>>f>>g;
        if( ( e >= a ) && ( f >= b ) && ( g >= c ) && ( ( e + f + g ) >= d ) )
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
        
    }
	// your code goes here
	return 0;
}
