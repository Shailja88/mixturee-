// //print the maximum and minimum value of array element
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
    
//     int A[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>A[i];
//     }
//     int min=A[0];

// int max=A[0];
//      for(int i=1;i<n;i++)
//      {
         
//           if(A[i]>max)
//           {
//              max=A[i];

//           }
//           if(A[i]<min)
         
//           {
//               min=A[i];
//           }
//      }
//      cout<<"Maximum value is : "<<max<<endl<<"Minimum value is : "<<min<<endl;
//     return 0;
// }
#include<iostream>
#include<climits>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
{
   cin>>a[i]; 
}
int maxi=INT_MIN;
int mini=INT_MAX;
for(int i=0;i<n;i++)
{
maxi=max(maxi,a[i]);
mini=min(mini,a[i]);
}
cout<<"Maximum "<<maxi<<endl<<"Minimum "<<mini<<endl;

}