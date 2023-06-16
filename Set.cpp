#include <iostream>
#include <set>

using namespace std;

int main() 
{
    set<int> mySet;
    
    // Insertion
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(15);
    
    // Size
    cout << "Size: " << mySet.size() << endl;
    
    // Traversal
    cout << "Set elements: ";
    for (auto it = mySet.begin(); it != mySet.end(); it++) 
    {
       cout << *it << " ";
    }
    cout << endl;
    
    // Accessing
    auto it = mySet.find(5);
    if (it != mySet.end()) 
    {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    // Deletion
    mySet.erase(2);
    
    // Traversal
    cout << "Set elements: ";
    for (auto x : mySet) {
        cout << x << " ";
    }
    cout << endl;
    
    // Clear
    mySet.clear();
    
    // Empty
    if (mySet.empty()) {
        cout << "Set is empty" << endl;
    }
    
    return 0;
}

// This code defines a set mySet, and demonstrates the following operations:

// Insertion of elements using the insert() function.
// Finding the size of the set using the size() function.
// Traversing the set using an iterator and the begin() and end() functions.
// Accessing elements in the set using the find() function.
// Deletion of elements using the erase() function.
// Traversing the set using a range-based loop.
// Clearing the set using the clear() function.
// Checking if the set is empty using the empty() function.

