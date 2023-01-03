#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a , b , c , d , e ;
        cin>>a>>b>>c>>d>>e ;
        
        if((a+b <= d && c <= e) || (c+b <= d && a <= e) || (a+c <= d && b <= e))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
