#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int e , k ;
        cin>>e>>k ;
        int m = 0 ;
        for(int i = 1 ;e != 0 ; i++ )
        {
            e = e / k;
            m++ ;
        }
            
        cout<<m<<endl;
    }
	// your code goes here
	return 0;
}
