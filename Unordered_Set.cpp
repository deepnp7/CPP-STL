#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Declare an unordered set of integers
    unordered_set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Print the size of the set
    cout << "Size of set: " << mySet.size() << endl;

    // Check if element is present in set
    if(mySet.find(20) != mySet.end()) 
    {
       cout << "Element 20 is present in the set" << endl;
    }
    else 
    {
        cout << "Element 20 is not present in the set" << endl;
    }

    // Remove an element from the set
    mySet.erase(10);

    // Iterate over the elements in the set
    for(auto it = mySet.begin(); it != mySet.end(); ++it) 
    {
        cout << *it << " ";
    }
    cout << endl;

    // Clear the set
    mySet.clear();

    return 0;
}

