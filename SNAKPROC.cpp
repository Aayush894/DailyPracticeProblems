#include <iostream>
using namespace std;

int main() {
    int r;
    cin>>r;
    while(r--)
    {
        int l ;
        cin>>l;
        string s ;
        cin>>s ;
        int k = 0 ,m=0;
        for(int i = 0 ; i< l; i++)
        {
            if(s[i] == 'H' && k == 0 )
            k++;
            else if(s[i] == 'T' && k == 1)
            k--;
            else if(s[i] == 'T' && k == 0)
            m++;
            else if(s[i] == '.')
            continue ;
            else 
            break;
        }
        if(k == 0 && m == 0)
        cout<<"Valid"<<endl;
        else 
        cout<<"Invalid"<<endl;
    }
	// your code goes here
	return 0;
}
