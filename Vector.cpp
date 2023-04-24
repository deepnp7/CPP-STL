#include<iostream>
#include<vector>    //header 
using namespace std;

int main() 
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for(int i=0; i<v.size(); i++) 
    {
     cout << v[i] << " ";
    }
    cout << endl;
    
    v.pop_back();
    v.insert(v.begin()+1, 4);
    v[2] = 5;
    
    for(auto x : v) 
    {
        cout << x << " ";
    }
    cout << endl;
    
    v.clear();
    
    cout << "Size of vector: " << v.size() << endl;
    
    return 0;
}


