// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=10;
//     int*aptr=&a;
//     cout<<*aptr<<endl;
    
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *aptr=&a;
//     cout<<aptr<<endl;
//     aptr++;
//     cout<<aptr<<endl;
//     return 0;
// }
//*******************************************************
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int arr[]={10,20,30};
// cout<<arr<<endl;
// int *ptr=arr;
// for(int i=0;i<3;i++)
// {
//     cout<<*ptr<<endl;
//     ptr++;
// }
// return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int a=10;
//     int*p;
//     p=&a;
//     cout<<*p<<endl;
//     int **q=&p;
//     return 0;
// }

//************************
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()

{
    int a=2;
    int b=4;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;

}