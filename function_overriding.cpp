#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void show(int a){
        cout<<"given "<<a<<endl;
    }
    
};
class B:public A{
    public:
    void show(int a){
        cout<<"given "<<a*20<<endl; 
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    B obj;
    obj.show(10);

    return 0;
}