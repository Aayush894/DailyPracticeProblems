#include <iostream>

using namespace std;

void tower_of_hanoi(int n , char source , char destination , char auxiliary )
{
    if(n == 1)
    {
        cout<<source<<" -> "<<destination<<endl ;
        return ;
    }
    else 
    {
    tower_of_hanoi(n-1 , source, auxiliary , destination) ;
    cout<<source<<" -> "<<destination<<endl ;
    tower_of_hanoi(n-1 , auxiliary ,destination,source ) ;
    }
}

int main()
{
    int n ;
    cout<<"enter the no of disc"<<endl;
    cin>>n;
    tower_of_hanoi(n ,'A','C','B') ;

    return 0;
}
