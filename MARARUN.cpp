#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int D,d,a,b,c;
	    cin>>D>>d>>a>>b>>c;
	    int res=D*d;
	    if(res>=10&&res<21)
	      cout<<a<<endl;
	    else if(res>=21&&res<42)
	      cout<<b<<endl;
	    else if(res>=42)
	      cout<<c<<endl;
	    else 
	      cout<<"0"<<endl;
	}
	return 0;
}