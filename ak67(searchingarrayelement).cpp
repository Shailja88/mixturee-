
//searching a matrix
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
       {
           if(arr[i][j]==x)
           {
               cout<<"Element is present";
           }
       }
   }

    return 0;
}