//Adding two binary numbers.
#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int ans=0;
    while(n>0)
    {
        int ld=n%10;
        ans=ans*10+ld;
        n=n/10;

    }
    return ans;
}
int addBin(int a ,int b)
{
    int ans=0;
    int precar=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10+precar;
            precar=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0))

        {
            if(precar==0)
          {  
          ans=ans*10+1;
          precar=0;
          }
        

          else 
          {
          ans=ans*10+0;
          precar=1;

          }
        }

else
{
    ans=ans*10+precar;
    precar=1;
}
a/=10;
b/=10;
    }
    while(a>0)
    {
        if(precar==1)
        {
            if(a%2==1)
        {
            ans=ans*10+0;
            precar=1;
        }
        else{
            ans=ans*10+1;
            precar=0;
        }
    }
    else
    {
        ans=ans*10+a%2;
    }
    a/=10;

    
    }
    while(b>0)
    {
        if(precar==1)
        {
            if(b%2==1)
        {
            ans=ans*10+0;
            precar=1;
        }
        else{
            ans=ans*10+1;
            precar=0;
        }
    }
    else
    {
        ans=ans*10+a%2;
    }
    b/=10;

    
    }
    if(precar==1)
    {
        ans=ans*10+1;
    }
    ans=reverse(ans);
    return ans;
}
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<addBin(a,b)<<endl;
    return 0;
}