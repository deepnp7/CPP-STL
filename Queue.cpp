#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Creating a queue of integers
    queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Printing the front and back element of the queue
    cout << "Front Element: " << q.front() << endl;
    cout << "Back Element: " << q.back() << endl;

    // Printing the size of the queue
    cout << "Size of queue: " << q.size() << endl;

    // Removing elements from the queue
    q.pop();

    // Printing the front and back element of the queue
    cout << "Front Element: " << q.front() << endl;
    cout << "Back Element: " << q.back() << endl;

    // Printing the size of the queue
    cout << "Size of queue: " << q.size() << endl;

    // Checking if the queue is empty or not
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}

