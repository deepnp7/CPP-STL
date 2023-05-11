#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq; // create an empty deque

    // pushing elements at the back of the deque
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // pushing elements at the front of the deque
    dq.push_front(5);
    dq.push_front(15);

    // accessing elements
    cout << "Elements in the deque: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;

    // removing elements from the back of the deque
    dq.pop_back();
    dq.pop_back();

    // removing elements from the front of the deque
    dq.pop_front();

    // accessing elements using iterator
    deque<int>::iterator it;
    cout << "Elements in the deque: ";
    for (it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // inserting element at a specific position
    it = dq.begin() + 1;
    dq.insert(it, 25);

    // erasing element at a specific position
    it = dq.begin() + 2;
    dq.erase(it);

    // accessing first and last element of deque
    cout << "First element of deque: " << dq.front() << endl;
    cout << "Last element of deque: " << dq.back() << endl;

    // checking if deque is empty or not
    if (dq.empty()) {
        cout << "Deque is empty" << endl;
    } else {
        cout << "Deque is not empty" << endl;
    }

    // clearing the deque
    dq.clear();

    // checking size of deque after clearing
    cout << "Size of deque after clearing: " << dq.size() << endl;

    return 0;
}
