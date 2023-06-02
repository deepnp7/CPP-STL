#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create an empty multiset
    multiset<int> ms;

    // Insert elements
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    // Count the occurrences of an element
    cout << "The count of 20 is " << ms.count(20) << endl;

    // Find an element
    auto it = ms.find(20);
    if (it != ms.end()) 
    {
       cout << "20 found at position " << distance(ms.begin(), it) + 1 << endl;
    } 
    else 
    {
       cout << "20 not found in the multiset" << endl;
    }

    // Erase an element
    ms.erase(20);

    // Iterate over all elements
    cout << "Elements in the multiset are: ";
    for (auto itr = ms.begin(); itr != ms.end(); ++itr) 
    {
       cout << *itr << " ";
    }
    cout << endl;

    // Check if the multiset is empty
    if (ms.empty()) 
    {
        cout << "The multiset is empty" << endl;
    } 
    else 
    {
        cout << "The multiset is not empty" << endl;
    }

    // Get the size of the multiset
    cout << "The size of the multiset is " << ms.size() << endl;

    // Clear the multiset
    ms.clear();

    // Check if the multiset is empty
    if (ms.empty()) 
    {
        cout << "The multiset is empty" << endl;
    } else {
        cout << "The multiset is not empty" << endl;
    }
    return 0;
}

