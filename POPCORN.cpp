#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2 ;
        cin>>a1>>a2 ;
        int b1,b2 ;
        cin>>b1>>b2 ;
        int c1,c2 ;
        cin>>c1>>c2 ;
        int max_sat =(a1+a2 > b1+b2)?(a1+a2 > c1+c2)?(a1+a2):(c1+c2) : (b1+b2 > c1+c2)?(b1+b2):(c1+c2) ;
        cout<<max_sat<<endl;
    }
	// your code goes here
	return 0;
}
