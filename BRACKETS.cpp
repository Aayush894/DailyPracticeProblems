#include <iostream>
using namespace std;

int main() {
    //"(" - 40 
    // ")" - 41 
    int t;
    cin>>t;
    while(t--)
    {
        string a ;
        cin>>a ;
        int balance = 0 , max_balance = 0 ;
        for( int i = 0 ;i< a.length() ;i++)
        {
            if(a[i] == 40)
            balance++;
            else 
            balance--;
            
            if(balance > max_balance)
            max_balance = balance ;
            
        }
        for(int i = 1 ; i <= (2*max_balance) ;i++ )
        {
            if(i <= max_balance)
            cout<<"(" ;
            else 
            cout<<")" ;
        }
        cout<<endl;
        
    }
	// your code goes here
	return 0;
}
