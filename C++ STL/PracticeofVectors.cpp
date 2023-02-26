#include <bits/stdc++.h>
using namespace std;
int main() 
{
   cout << "Introduction to Vectors" << endl;
   cout << "================================================" << endl;
   
   //*********************************************************************************************************************
   
   //initialization of the vector 
   vector<int>v;
   //pushing the values into the vector
   v.push_back(20);
   v.emplace_back(43);
   //printing the elements
   cout << "First Element of vector: " << v[0] <<" "<< " Second Element of Vector: "<< v[1];
   
   //*********************************************************************************************************************
   
   //initialization of pair vectors
   vector<pair<int,int>>vec;
   //pushing the values into the vector
   vec.push_back({20,43});
   vec.emplace_back(37,43);
   
   //traversing will be same as array + pair combination
   cout << "First element of First pair: " <<vec[0].first << endl;
   cout << "Second element of First pair: " <<vec[0].second << endl;
   cout << "First element of Second pair: " <<vec[1].first << endl;
   cout << "Second element of Second pair: " <<vec[1].second << endl;
   
   //*********************************************************************************************************************
   
   //initialzation of vectors with initially filled instances
   //it will create the vector of 5 instances which are 20
   vector<int>v1(5,20);
   
   //checking if it is properly assigned or not
   cout << "3rd element of vector v1: " << v1[2];
   
   //*********************************************************************************************************************
    
   //we can define the vector without the values too
   //it defines the vector based on the compiler values
   vector<int>v2(5);
   
   //bydefault it will assign NULL(0) value or garbage value based on the compiler
   cout << "3rd element of v2 vector: " << v2[2];
   
   //*********************************************************************************************************************
   
   vector<int>v3(5,50);
   cout << "3rd element of v3 vector: " << v3[2] << endl;
   
   //it will copy the vector v1 into the vector v2
   vector<int>v2(v3);
   //checking if the vector is properly copied or not
   cout << "2nd element of v2 vector: " << v2[2];
   
   
   //*********************************************************************************************************************

   //intialization of vector
    vector<int>vect;
    
    //pushing the value into the vector
    vect.push_back(20);
    vect.emplace_back(37);
    vect.emplace_back(43);
    vect.emplace_back(66);
    
    //initialization of iterator
   //begin will point to the location of the first element of the vector
    vector<int>::iterator it = vect.begin();
    cout << "Value of begining: " << *(it) << endl;
    
   //incrementing the vector value
    it++;
    cout << "After incrementing: " << *(it);
    //here we must use *(it) to print the value residing in the address of it because standalone it acts as memory address and *(it) acts as a pointer
   
  //================================================================================================
    
   //initialization of iterator
    //end will point to the location after the last element of the vector 
    vector<int>::iterator it2 = vect.end();
    cout << "Value of ending: " << *(it2) << endl;
    
   //decrementing the vector value
    it2--;
    cout << "After decrementing: " << *(it2);
   
   // there are functionality of vect.rend(); and vect.rbegin(); but that are not used that much so its skipped
   
   
  //================================================================================================
   
   //now we will try to print the entire vector
   for(vector<int>::iterator it = vect.begin(); it != vect.end();it++)
   {
       cout << "The element : " << *(it) << endl;
   }
   
    //================================================================================================
   
   //we will see the usage of auto 
   //auto is used to assign the datatype automatically
   //suppose auto a = 5, then automatically 'a' becomes the integer
   //auto a = 'Darshan', then automatically 'a' becomes the string
   
   for(auto it=vect.begin();it!=vect.end();it++)
   {
       cout << "The elements: " << *(it) << endl;
   }
   
    //================================================================================================
   
   //we will see the another usage of auto
   //here it iterates on the datatype so it is kind of considered as a foreach loop
  for(auto it:vect)
  {
      cout << it << endl;
  }
   
   
   return 0;
   
}
