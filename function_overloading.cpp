#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void show(int a){
        cout<<"given "<<a<<endl;
    }
    void show(float a){
        cout<<"given "<<a<<endl;
    }
    void show(int a, int b){
        cout<<"given "<<a+b<<endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    A obj;
    obj.show(10);
    // obj.show(10.5);
    obj.show(10,20);

    return 0;
}