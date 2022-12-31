#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n , b;
        cin>>n>>b;
        int a[n][3] ;
        for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < 3 ; j++)
        cin>>a[i][j] ;
        
        int max_area = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i][0]*a[i][1] > max_area  && a[i][2] <= b)
            {
                max_area = a[i][0]*a[i][1] ;
            }
        }
        if(max_area == 0)
        cout<<"no tablet"<<endl;
        else 
        cout<<max_area<<endl;
    }
	// your code goes here
	return 0;
}
