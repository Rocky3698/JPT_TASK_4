#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    string name;
    void show(){
        cout<<name<<"from class a"<<endl;
    }
};
class B:public A{
    public:
    B(string name){
        this->name =name;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    B obj("Rocky");
    obj.show();

    return 0;
}