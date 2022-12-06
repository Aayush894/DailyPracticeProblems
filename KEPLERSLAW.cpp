#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        float a,b;
        cin>>a>>b;
        float c,d;
        cin>>c>>d;
        float  tim = ( pow(a,2) / pow(c,3) );
        float sm = ( pow(b,2) / pow(d,3) );
        if(tim == sm )
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
