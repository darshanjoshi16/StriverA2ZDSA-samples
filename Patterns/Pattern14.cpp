/*
nput: 5

Output:
A
AB
ABC
ABCD
ABCDE

*/
void printTriangle(int n) {
       for(int i=0; i<n; i++)
       {
           for(char ch='A';ch<='A'+i;ch++)
           {
               cout<<ch;
           }
           cout<<endl;
       }
    }
