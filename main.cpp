#include<iostream>
using namespace std;

int add(int p,int q)
{
   return p+q;
}

main()
{
    int i=10,j=20,result;
    cout<<"Value of i :" <<i<<" and j is :"<<j<<endl;

    result=add(i,j);

    cout<<"Add is :"<<result<<endl;

}