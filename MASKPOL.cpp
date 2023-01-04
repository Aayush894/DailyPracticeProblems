#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a ;
        cin>>n>>a;
        int infected = a ;
        int uninfected = n - a;
        cout<<min(infected , uninfected)<<endl; 
    }
	// your code goes here
	return 0;
}
