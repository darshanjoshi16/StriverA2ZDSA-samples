#include <bits/stdc++.h>
using namespace std;
int main() 
{
   
   //initialization of the vector 
   vector<int>v;
   //pushing the values into the vector
   v.push_back(20);
   v.emplace_back(43);
   
   //initialization of pair vectors
   vector<pair<int,int>>vec;
   //pushing the values into the vector
   vec.push_back({20,43});
   vec_emplace_back({37,43});
  
  //initialzation of vectors with initially filled instances
   //it will create the vector of 5 instances which are 20
   vector<int>v1(5,20);
  
  //we can define the vector without the values too
   //it defines the vector based on the compiler values
   vector<int>v2(5);
   
   //it will copy the vector v1 into the vector v2
   vector<int>v2(v1);

    return 0;
}
