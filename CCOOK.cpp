#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int a[5],sum = 0;
        for(int i=0;i<5;i++)
            cin>>a[i];
        for(int i =0 ;i<5; i++)
            sum = sum + a[i];
            
        if(sum == 0)
        cout<<"Beginner"<<endl;
        else if( sum == 1 )
        cout<<"Junior Developer"<<endl;
        else if( sum == 2 )
        cout<<"Middle Developer"<<endl;
        else if( sum == 3 )
        cout<<"Senior Developer"<<endl;
        else if( sum == 4 )
        cout<<"Hacker "<<endl;
        else 
        cout<<"Jeff Dean"<<endl;
            
      
    }
	// your code goes here
	return 0;
}
