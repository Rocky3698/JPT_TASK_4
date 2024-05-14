#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void show(){
        cout<<"from class a"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"from class b"<<endl;
    }
};
class C:public B{
    public:
    void show(){
        cout<<"from class c"<<endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    C obj;
    obj.show();
// output the class method 
    return 0;
}