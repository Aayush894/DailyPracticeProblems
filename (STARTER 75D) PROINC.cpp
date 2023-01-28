#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t  ;
    while(t--)
    {
        int x , y ;
        cin>> x >> y ;
        int buy_s = x - y ;
        int new_s =(11 * x )/10 ; 
        cout<< new_s - buy_s << endl ;
    }
	// your code goes here
	return 0;
}
