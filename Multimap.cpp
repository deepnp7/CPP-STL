
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // create an empty multimap
    multimap<string, int> mm;

    // insert key-value pairs into the multimap
    mm.insert(make_pair("John", 25));
    mm.insert(make_pair("Alice", 30));
    mm.insert(make_pair("Alice", 35));
    mm.insert(make_pair("Bob", 40));
    mm.insert(make_pair("Bob", 45));
    mm.insert(make_pair("Charlie", 50));

    // print the multimap
    cout << "Multimap: " << endl;
    for (auto it = mm.begin(); it != mm.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    // find the values associated with a key
    string key = "Alice";
    auto range = mm.equal_range(key);
    cout << "Values for key " << key << ": " << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << endl;
    }
    cout << endl;

    // erase a key-value pair
    key = "Bob";
    auto it = mm.find(key);
    if (it != mm.end()) {
        mm.erase(it);
        cout << "Key " << key << " erased" << endl;
    } else {
        cout << "Key " << key << " not found" << endl;
    }
    cout << endl;

    // check if a key exists
    key = "Charlie";
    it = mm.find(key);
    if (it != mm.end()) {
        cout << "Key " << key << " found" << endl;
    } else {
        cout << "Key " << key << " not found" << endl;
    }
    cout << endl;

    // count the number of key-value pairs with a specific key
    key = "Alice";
    int count = mm.count(key);
    cout << "Number of values for key " << key << ": " << count << endl;
    cout << endl;

    return 0;
}
