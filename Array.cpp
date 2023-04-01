#include<iostream>
#include<array>  //header to run array stl

// STL array is based on basic array only

using namespace std;
int main()
{
	int basic[4]={1,2,3,4}; //initialisation of array using basic method

	array<int,5> a={1,2,3,4,5}; // initialisation of array using STL 
        // ↑ data type along with the number of elements of the array
	int size=a.size();  // returns the size of the array 
	for (int i = 0; i < size; ++i)
	{
		cout<<" "<<a[i];  // printing of array
	}
     cout<<" \n Element at second index : "<<a.at(2)<<endl; // accessing an element from the array
     cout<<"empty or not ? -> "<<a.empty()<<endl;  // returns boolean value

 cout<<"Element at third index : "<<a[2]<<endl; // returns the element at specific index using basic array method  
  cout<<"Element at fourth index : "<<a.at(4)<<endl; // returns the element at specific index using STL array method

   cout<<"First element : "<<a.front()<<endl; // prints first element
   cout<<"Last element : "<<a.back()<<endl;  // prints last element
}


  /*                           
  
			Time Complexity 
			
			a.at() -> O(1)
		        a.empty -> O(1)								  
		        a.front() -> O(1)								  
	        	a.back() -> O(1)								  
															
															
															
  */
