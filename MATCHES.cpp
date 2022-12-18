#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b ;
        cin>>a>>b;
        int sum = a + b ;
        int k = 0,d;
        while(sum > 0)
        {
            d = sum%10;
            sum = sum/10 ;
            switch (d)
            {
                case 0 : 
                k +=6 ;
                break;
                case 1 :
                k +=2 ;
                break;
                case 2 :
                k +=5 ;
                break;
                case 3 :
                k +=5 ;
                break;
                case 4 :
                k +=4 ;
                break;
                case 5 : 
                k +=5 ;
                break;
                case 6 :
                k +=6 ;
                break;
                case 7 :
                k +=3 ;
                break;
                case 8 :
                k +=7 ;
                break;
                default :
                k +=6 ;
                break ;
                
            }
        }
        cout<<k<<endl ;
    }
	// your code goes here
	return 0;
}
