#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][2];
        int diff[n];
        int i,j;
        for( i=0 ;i<n;i++)
        {
            for( j =0 ;j<2;j++)
            {
                cin>>a[i][j];
            }
            diff[i] = a[i][1] - a[i][0];
        }
        
        int k=0;
        for( int i =0 ;i<n;i++)
        {
            if( diff[i] > 5)
            k++;
        }
        cout<<k<<endl;
    }
	// your code goes here
	return 0;
}
