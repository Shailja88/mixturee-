/*Given a square matrix A and its number of rows(or columns)N,
return the transpose of A. The transpose of a matrix is the matrix flipped over it's main
diagonal, switching the row nd column indices of the amtrix.*/

 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
   
//     cout<<"Enter the no of rows you want to use"<<endl;
//     cin>>n;
//    int A[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for( int j=0;j<n;j++)
//        {

//            cin>>A[i][j];
//        }
     
//    }
//    cout<<"the final matrix is :"<<endl;
//    for( int i=0;i<n;i++)
//    {
//        for( int j =0;j<n;j++)
//        {
//          cout<<A[j][i]<<" ";
//        }
//         cout<<"\n";
//    }



//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n];
    cout<<"Enter the array element.\n";

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    //transpose process
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         int temp=A[i][j];
         A[i][j]=A[j][i];
         A[j][i]=temp;

        }
    }
        for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<[i][j];
        }
        cout<<"\n";
    }

    return 0;
}