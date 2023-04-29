#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>v)
{
    int size =v.size();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"The elements are : ";
   /*
      for (int i = 0; i < size; i++)\
      {
       cout<<v[i]<<" ";        // Iterating through a vector 
      }
   */ 
       for(auto it : v)
       {
        cout<<it<<" ";       // Iterating through a vector
       }
    cout<<endl;
}

int main()
{
 vector<int>v;
 v.push_back(1);     // adding elements to the vector
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 v.push_back(5);
 v.push_back(6);
 printVector(v);   // printing the vector after pushing the elements to the vector
 cout<<endl;

 cout<<"After the Operations "<<endl<<endl;

 v.insert(v.begin(),8);     // inserting an element at 1st index
 v.insert(v.begin()+2,7);  // inserting an element at 2nd index
 v.pop_back();            //removing the last element from the vector
 v.erase(v.begin()+3);   // removing the element from 3rd index
 int a=v.at(2);         // printing the element at 2nd index
 v.at(3)=9;            // modifying the 3rd element to 9
 int b=v.back();      // printing the last element of the vector
 cout<<"Element at 2nd index: "<<a<<endl<<"Last element: "<<b<<endl;
 
  printVector(v);  // printing the vector after performing different operations
  return 0;
} 
