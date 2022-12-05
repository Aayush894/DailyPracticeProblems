#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        int n = s.length();
        int flag = 0;
        for(int i =0 ; i<n ; i+=2)
        {
            if(s[i] == s[i+1])
            {
                flag = 1 ;
                break;
            }
        }
        if( flag == 0 )
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
