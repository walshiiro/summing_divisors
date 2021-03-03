#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
bool snt(ull k)
{
    if(k<2)
        return false;
    else
        for(ull i=2;i<=sqrt(k);i++)
            if(k%i==0)
                return false;
    return true;
}
int main() {
    ull x=1000000000,d=0,d1=0,a[1000],b[1000];
    ull i=2;
    while (x!=1)
    {
        if(snt(i) && x%i==0) {
            d++;
            x/=i;
        }
        else
        {


            a[d1]=i;
            b[d1]=d;
            d1++;
            d=0;
            i++;
        }
        if(x==1)
        {
            a[d1]=i;
            b[d1]=d;
        }
    }
    for(int i=0;i<=d1;i++)
        if(!snt(a[i]))
            a[i]=-99;

    ull t=1,t1=1;
    for(ull i=0;i<=d1;i++) {
        if(a[i]!=-99) {
            
            for (ull j = 1; j <= b[i]; j++) {
                ull o=1;
                for (ull ii=1;ii<=j;ii++)
                    o*=a[i];


                t1 += o;
               

            }
            t *= t1;

            t1 = 1;
        }
        else
            continue;
    }
    cout<<t;







}
