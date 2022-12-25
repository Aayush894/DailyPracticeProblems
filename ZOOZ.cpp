#include <iostream>
using namespace std;

void solution()
{
    int N;
	cin >> N;

    for(int i= 0; i< N; i++)
    {
        if(i==0 || i== N - 1)
        {
            cout<< '1';
        }
        else
        {
            cout << '0';
        }
    }
    cout << "\n";
	
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
        solution();
	}
	return 0;
}
