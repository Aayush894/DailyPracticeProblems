#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
    {
        int d , c ;
        cin>>d>>c ;
        int a1,a2,a3 ;
        cin>>a1>>a2>>a3 ;
        int b1,b2,b3 ;
        cin>>b1>>b2>>b3 ;
        int without_coupen = a1 + a2 + a3 + b1 + b2 + b3 + 2*d  ;
        int total_coupen_cost  = c;
        if(a1 + a2 + a3 >= 150)
        {
            total_coupen_cost =total_coupen_cost + a1 + a2 + a3 ;
        }
        else 
        {
            total_coupen_cost = total_coupen_cost + a1 + a2 + a3 + d ;
        }
        if(b1 + b2 + b3 >= 150)
        {
            total_coupen_cost = total_coupen_cost + b1+ b2 + b3 ;
        }
        else 
        {
            total_coupen_cost = total_coupen_cost + b1 + b2 + b3 + d ;
        }
     
        if(total_coupen_cost < without_coupen)
        cout<<"YES"<<endl ;
        else 
        cout<<"NO"<<endl ;
    }
	// your code goes here
	return 0;
}
