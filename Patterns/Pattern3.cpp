/*
Input: 5

Output:
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

*/

void printTriangle(int n) {
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1; j<=i;j++)
            {
                cout << j << " ";
            }
            
            cout << endl;
        }
    }

