#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a ,b,sum;
        cin>>a>>b;
        while(a>0)
        {
            sum = 0;
            for(int i =1;i<=b;i++)
            {
                sum = sum + i ;
            }
            b = sum;
            a--;
            
        }
        cout<<sum<<endl;
        
    }
	// your code goes here
	return 0;
}
