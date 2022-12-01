#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
      int a,b,c,d,i=0;
      string str;
      while( i < 4 )
      {
          cin>>str;
          
          if( str == "Barcelona" )
          cin>>a;
          else if( str == "Malaga")
          cin>>b;
          else if( str == "Eibar")
          cin>>c;
          else 
          cin>>d;
        
        i++;  
       }
      if( (d < b) && (a > c) )
      cout<<"Barcelona"<<endl;
      else 
      cout<<"RealMadrid"<<endl;
    }
	// your code goes here
	return 0;
}
