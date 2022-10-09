///inheritance 
// derived class base class 
// single, multiple,multi level, hybrid, hierarchical inheritance
//polymorphism start krte hai 
//function overloading 
#include<bits/stdc++.h>
using namespace std;
class ApnaCollege{
public:
void fun(){
    cout<<"I am a function with no arguments"<<endl;

}
void fun(int x){
    cout<<"I am a function with int argument"<<endl;

}
void fun(double d)
{
    cout<< "I am a function with double argument"<<endl;
}

};
int main (){
ApnaCollege obj;
obj.fun();
obj.fun(4);
obj.fun(6.3);
}