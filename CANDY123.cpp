#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a , b;
        cin>>a>>b ;
        int sum = 0 , sum1 = 0 ;
        int k = 1 ;
        for(int i = 1 ; ; i++)
        {
            if(i%2 == 0)
            sum1 = sum1 + i ;
            else 
            sum = sum + i ;
            
            if(sum > a)
            {
                cout<<"Bob" ;
                break;
            }
            if(sum1 > b)
            {
                cout<<"Limak";
                break;
            }
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
