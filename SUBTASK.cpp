#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n , m , k;
        cin>>n>>m>>k;
        int a[n];
        for(int i = 0 ; i < n ; i++) cin>>a[i] ;
        int points = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 1)
            points++;
            else 
            break ;
        }
        if(points == n)
        cout<<"100"<<endl;
        else if(points >= m)
        cout<<k<<endl;
        else 
        cout<<"0"<<endl;
        
    }
	// your code goes here
	return 0;
}
