#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    string name;
    void show(){
        cout<<name<<"from class a"<<endl;
    }
};
class B{
    public:
    string age;
};
class C:public A,public B{
    public:
    C(int c){
        this->age =c;
    }
    void show_age(){
        cout<<age<<endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    C obj(10);
    obj.show_age();

    return 0;
}