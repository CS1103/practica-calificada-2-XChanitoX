#include <iostream>
#include "heap.h"
#include "Archivo.h"

using namespace std;

int main()
{
    vector<int> h;

    load_from("data.txt", h);
    cout << "heap" << endl;
    cout << h;
    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(50);
    h.insert(10);

    h.push_back(5);
    h.push_back(7);
    h.push_back(56);

    cout << "heap" << endl;
    cout << h;
    cout << "heap" << endl;
    cout << h;
    cin >> h;
    cout << "heap" << endl;
    cout << h;
    insert(h, 100, 200);
    cout << "heap" << endl;
    cout << h;
    load_from("data.txt", h);
    cout << h;

    maxheap<int> b(h);
    h.Heap();
    h.print();

    return 0;
}