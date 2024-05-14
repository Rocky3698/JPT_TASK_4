#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x;
    A(int x)
    { // constructor method for assign value in object
        this->x = x;
        cout << "Hi i'm insider constructor" << endl;
    }
    // custom method
    void show()
    {
        cout << x << endl;
    }

    // we can also define a class outlite the class
    void outMethod(int v);
};

// outside method definition
void A::outMethod(int v)
{
    cout << "you gave me " << v << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    A obj(10);
    obj.show();
    obj.outMethod(40);
    return 0;
}