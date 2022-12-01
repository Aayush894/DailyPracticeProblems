#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        int n=0;
        string str;
        cin>>str;
        size_t strln=0;
        strln = str.size();
        for( int i = 0 ;i<strln ;i++)
        {
            if( (str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u') )
            if( (str[i+1]=='a')||(str[i+1]=='e')||(str[i+1]=='i')||(str[i+1]=='o')||(str[i+1]=='u') )
            if( (str[i+2]=='a')||(str[i+2]=='e')||(str[i+2]=='i')||(str[i+2]=='o')||(str[i+2]=='u') )
            n = 1;
        
        }
        if( n == 1)
        cout<<"Happy"<<endl;
        else 
        cout<<"Sad"<<endl;
        
    }
	// your code goes here
	return 0;
}
