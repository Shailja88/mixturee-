//matrix multiplication .
/* Given two 2-D arrays of sizes n1*n2 and 
n2*n3 . Your task is to multiply these matrices and 
output the multiplied task is to multiply these matrices
 and output the multiplied matrix.
 Constraints
 1<=n1,n2,n3<=300

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1][n2];
    int B[n2][n3];
    int C[n1][n3];
    cout<<"Enter first matrix."<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter second matrix."<<endl;
     for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>B[i][j];
        }
    }
   for(int i=0;i<n1;i++)
   {
       for(int j=0;j<n3;j++)
       {
           C[i][j]=0;
       }
   }
for(int i=0;i<n1;i++)
{
    for(int j=0;j<n3;j++)
    {
        for(int k=0;k<n2;k++)
        {
            C[i][j]+=A[j][k]+B[k][j];
        }
    }
}
for(int i=0;i<n1;i++)
{
    for(int j=0;j<n3;j++)
    
        cout<<C[i][j]<<" ";
        cout<<endl;
    
}
    return 0;
}