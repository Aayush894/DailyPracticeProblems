#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t ;
    while(t--)
    {
        int a , b;
        cin>>a>>b ;
        int sum  = 0 ;
        for(int i = a ; i <= b ;i++)
        {
            int d , rev = 0 ;
            int c = i;
            int num = c ;
            while(c)
            {
                d = c % 10 ;
                rev = rev * 10 + d ;   
                c = c/10 ;
            }
            if(num == rev)
            {
                sum = sum + num ;
            }
        }
        cout<<sum<<endl ;
    }
	// your code goes here
	return 0;
}
