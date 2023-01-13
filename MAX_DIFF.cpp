#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>> t;
    while(t--)
    {
        int n, s ;
        cin>> n >> s ;
        int min =abs(s - n) ;
        cout<<(n - min)<<endl ;
        
    }
	// your code goes here
	return 0;
}
