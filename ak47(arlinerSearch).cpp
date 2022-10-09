//Linear search;
//search a number;
#include<iostream>
using namespace std;
// int main()
// {
//     //#include<bits/stdc++.h>
//     int n;
//     cin>>n;
//     int c=0;
//     int num;
//     cin>>num;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//        cin>>a[i];
//     } 
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==num)
//         {
//         cout<<"Number is present at "<<i<<" index"<<endl;
//         c=c+1;
//         }
        
//     }
//     if(c==0)
//     {
//         cout<<"number is not present ";
//     }
//     return 0;
// }
int linearSearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
    {
    return 1;
    }
    }

    return -1;
        
        }

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(arr,key,n)<<endl;
}