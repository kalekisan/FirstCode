#include<iostream>
using namespace std;


class Add
{
    private:
    int i,j;
    public:

    Add()
    {
        cout<<"In default Condtructor"<<endl;
    }
    ~Add()
    {
        cout<<"Mem Is deallocated Successfully"<<endl;
    }

    int add(int p,int q)
{
    i=p;
    j=q;
   return i+j;
}


};



int main()
{

    int i=10,j=20,result;
    Add obj;
    //cout<<"Value of i :" <<i<<" and j is :"<<j<<endl;

    result=obj.add(i,j);

    cout<<"Add is :"<<result<<endl;

}