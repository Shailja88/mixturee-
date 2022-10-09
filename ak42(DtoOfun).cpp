//decimal to octal
#include<iostream>
using namespace std;
int dToo(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
    x=x*8;
    x/=8;
    while(x>0)
    {
        int ld=n/x;
        n=n-ld*x;
        x=x/8;
        ans=ans*10+ld;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dToo(n)<<endl;
    return 0;
}
