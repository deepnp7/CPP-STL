
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;
    p=make_pair(69,"zatch");    // to initialise values to a pair
    p={69,"zatch"};            // to initialise values to a pair(there are two ways)

    pair<int,string> &p1=p;  // by using reference '&',we assign the values of p1 to p.
                            // without using reference we will only create a copy
    p1.first=7;            // 7 is assigned to p.first 

    cout<<p.first<<" "<<p.second<<endl;

    pair<string,pair<int,double>> p2={"Deep",{19,11.03}};   //nested pair
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<" "<<endl;

   int a[]={1,2,3};
   int b[]={2,3,4};
    
   pair<int,int> p_arr[3];  //array of pairs
   p_arr[0]={1,2};
   p_arr[1]={2,3};
   p_arr[2]={3,4};
    
   swap(p_arr[0],p_arr[2]);
   for (int i = 0; i < 3; i++)
   {
     cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl; //printing of array pairs
   }
   
    return 0;
}
