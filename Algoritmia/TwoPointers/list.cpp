// C++ program to demonstrate the use of list containers
#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    // defining list
    list<int> lista{12,45,8,6};
 
    for (auto i : lista) {
        cout << i << ' ';
    }

    cout<<"\n";

    lista.remove(12);

    for (auto i : lista) {
        cout << i << ' ';
    }

    return 0;
}
