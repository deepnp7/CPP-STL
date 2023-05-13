#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create an empty map object
    map<int, string> m;

    // Insert key-value pairs into the map
    m.insert(make_pair(1, "apple"));
    m.insert(make_pair(2, "banana"));
    m.insert(make_pair(3, "cherry"));

    // Print the size of the map
    cout << "Map size: " << m.size() << endl;

    // Print the values of the map
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    // Erase a key-value pair from the map
    m.erase(2);

    // Print the values of the map after erasing a pair
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    // Check if a key is present in the map and print its value
    if (m.count(1)) {
        cout << "Value of key 1: " << m[1] << endl;
    }

    return 0;
}

