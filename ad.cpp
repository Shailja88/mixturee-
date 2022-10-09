#include<bits/stdc++.h>
using namespace std;
int main (){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        //  long long sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
      
    //     for(int i=0;i<n;i++){
    //         sum1=sum1+a[i];
    //         sum2=sum2+b[i];
    //     }
        
    //   if(sum1==sum2){
    //          long long maxx=LLONG_MIN;
    //         for(int i=0;i<n;i++){
    //          long long d=llabs(a[i]-b[i]);
    //         maxx= max(d,maxx);
    //           // long long dif=max(d,maxx);
    //             // if(dif>=maxx){
    //             //     maxx=dif;
    //             // }
    //         }
    //         cout<<maxx<<endl;
    //     }
    //     else{
    //         cout<<-1<<endl;
            
    //     }
    long long x=0,y=0;
    for(int i=0;i<n;i++){
        x=x+(a[i]-b[i]);
        y=y+abs(a[i]-b[i]);
        
    }
    cout<<x<<y;
    if(x!=0){
        cout<<-1<<endl;
    }
    else if (y%2!=0){
        
        cout<<-1<<endl;
    }
    else {
        cout<<y/2<<endl;
    }
    
    }
    return 0;
}