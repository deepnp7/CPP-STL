#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> mylist; // create an empty list

    // insert elements at the front
    mylist.push_front(10);
    mylist.push_front(20);
    mylist.push_front(30);
    mylist.push_front(40);

    // insert elements at the back
    mylist.push_back(50);
    mylist.push_back(60);
    mylist.push_back(70);
    mylist.push_back(80);

    // display the list elements using iterator
    list<int>::iterator itr;
    for (itr = mylist.begin(); itr != mylist.end(); ++itr) 
    {
        cout << *itr << " ";
    }
    cout << endl;

    // insert elements at a specific position
    itr = mylist.begin();
    ++itr;
    mylist.insert(itr, 99);
    ++itr;
    mylist.insert(itr, 98);

    // remove an element from the list
    itr = mylist.begin();
    ++itr;
    mylist.erase(itr);

    // display the list elements again
    for (itr = mylist.begin(); itr != mylist.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}

