//decimal to hexadecimal

#include<iostream>
using namespace std;
string dToh(int n)
{
    int x=1;
   string ans="";
    while(x<=n)
    x*=16;
    x/=16;
    while(x>0)
    {
        int ld=n/x;
        n-=ld*x;
        x/=16;
        if(ld<=9)
       ans=ans+to_string(ld);
       else{
           char c='A'+ld-10;
           ans.push_back(c);
       }
      

        
    }
     return ans;
    
}
int main()
{    int n;
     cin>>n;
    cout<<dToh(n)<<endl;
   return 0;
}