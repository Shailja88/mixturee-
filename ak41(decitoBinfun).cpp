//Decimal to binary 

#include<iostream>
using namespace std;
int BtoD(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
    x*=2;
    x=x/2;
    while(x>0)
    {
        int ld=n/x;
        n=n-ld*x;
        x=x/2;
        ans=ans*10+ld;
     }
    return ans;
}
int main()
{     
    int n;
    cin>>n;
    cout<<BtoD(n)<<endl;
    
    return 0;
}