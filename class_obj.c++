#include <bits/stdc++.h>
using namespace std;

// classs is a blueprint and the things created based on this blueprint named objects.
class A
{
public: // this the access modifier for class properties. if public then can anyone can access from anywhere if private only class scop can acess if protected then derived class can access and also form the same class
    int a; // data
    A(int x)
    {                // methods
        this->a = a; // this refer the current instance of the class.
        // it's a constructor which is used for assign a object.
        cout << "Constructor called" << endl;
    }
}; // this is a class implementnted in c++.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << "Rocky" << endl;

    // for create object think class is a varable
    A obj(10);

    return 0;
}