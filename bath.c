#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    for(int i=t;i>0;i--)
    {
        scanf("%d %d",&x,&y);
        int bath = 2*y;
        printf("%d\n",x/(bath));
        
    }
	// your code goes here
	return 0;
}

