#include <stdio.h>

int main(void) {
    int t,n,k,a;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(k>=a)
            {
                printf("1");
                k = k-a;
            }
            else 
                printf("0");
        }
        printf("\n");
    }
	// your code goes here
	return 0;
}
