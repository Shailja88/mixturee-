#include<iostream>
using namespace std;
int main()
{
    // array[0]=1;
    // array[1]=2;
    // array[2]=4;
    // array[3]=5;
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
      for(int i=0;i<n;i++)
    {
       cout<<array[i]<<endl;
    }
    return 0;
}