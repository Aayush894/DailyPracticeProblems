#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin>>t ;
    while(t--)
    {
        int a , b , c , d ;
        cin>>a>>b>>c >>d ;
        int total_integer, uncommon_integer = 0 ;
        total_integer = max(b,d) - min(a,c) + 1; 
        if(c > b )
        uncommon_integer = c - b - 1 ;
        if(d < a )
        uncommon_integer = a - d - 1 ;
        
        cout<<total_integer - uncommon_integer<<endl ;
    }
	// your code goes here
	return 0;
}
