/*
1*2*3*4*5*6*7*8*9*10
21*22*23*24*25*26*27*28*29*30
41*42*43*44*45*46*47*48*49*50
61*62*63*64*65*66*67*68*69*70
81*82*83*84*85*86*87*88*89*90
91*92*93*94*95*96*97*98*99*100
71*72*73*74*75*76*77*78*79*80
51*52*53*54*55*56*57*58*59*60
31*32*33*34*35*36*37*38*39*40
11*12*13*14*15*16*17*18*19*20
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Rows : ";
    cin>>n;
    int p=n;
    if(n>=1 && n<=100)
    {
    for(int i=1;i<=n;i+=2)
    {
        int k=(i-1)*n+1;
        for(int j=0;j<n-1;j++)
        {
            cout<<k<<"*";
            k++;
        }
        cout<<k<<" ";
        cout<<endl;
    }
    if(n%2==1)
    {
        p=n-1;
    }
    //cout<<"aman\n";
    for(int i=p;i>0;i-=2)
    {
        int k=(i-1)*n+1;
        for(int j=0;j<n-1;j++)
        {
            cout<<k<<"*";
            k++;
        }
        cout<<k<<" ";
        cout<<endl;
    }
    }
    else
    {
        cout<<"Enter a Valid Input(1-100)!";
    }
    return 0;
}
