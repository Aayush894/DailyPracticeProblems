# include <iostream>
using namespace std ;
int prime( int a , int b );
int main()
{
    int a, b ;
    cin>>a>>b;
    prime( a , b );
    return 0;

}
int prime( int a ,int b)
{
    for( int i = a ;i <= b ;i++)
    {
        int flag = 0 ;
        for( int j = 2 ;j < i ;j++ )
        {
            if ( i % j == 0 )
            {
                flag = 1 ;
            }
        }
        if( flag == 0 )
        cout<<i<<endl;
    }
}