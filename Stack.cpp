#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack<int> s; // create an empty stack of integers
    
    // push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // print the top element
    cout << "Top element: " << s.top() << endl;

    // pop the top element
    s.pop();

    // print the size of the stack
    cout << "Size of stack: " << s.size() << endl;

    // check if stack is empty
    if (s.empty()) 
    {
        cout << "Stack is empty" << endl;
    } 
    else 
    {
        cout << "Stack is not empty" << endl;
    }

    // print all elements of the stack
    cout << "Elements in the stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
