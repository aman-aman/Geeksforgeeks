/*
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
21*20*19*18*17*16
22*23*24*25*26*27*28
36*35*34*33*32*31*30*29
37*38*39*40*41*42*43*44*45
55*54*53*52*51*50*49*48*47*46
*/
//aman kumar jha
#include<bits/stdc++.h>
int main()
{
    int i,j,n,count=0,k=0;
    printf("Enter N");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=k;
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d",count+i);
                count=count-1;
                if(j!=i)
                    printf("*");
            }
            else
            {
                count=count+1;
                printf("%d",count);
                if(j!=i)
                    printf("*");
            }
             k++;
        }
        printf("\n");
    }
    return 0;
}
