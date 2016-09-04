#include <bits/stdc++.h>
using namespace std;
  int*  selection_sort (int A[ ], int n) {
        // temporary variable to store the position of minimum element

        int minimum;        
        // reduces the effective size of the array by one in  each iteration.

        for(int i = 0; i < n-1 ; i++)  {

           // assuming the first element to be the minimum of the unsorted array .
             minimum = i ;

          // gives the effective size of the unsorted  array .

            for(int j = i+1; j < n ; j++ ) {
                if(A[ j ] < A[ minimum ])  {                //finds the minimum element
                minimum = j ;
                }
             }
          // putting minimum element on its proper position.
          swap ( A[ minimum ], A[ i ]) ; 
        }
		return A;
   }
int main()
{
  int n;
  cin>>n;int a[n];	 int i=0;	int *b;
  while(i++<n)
  {
	  cin>>a[i];
  }
	 b= selection_sort(a,n);
	 for(int i=0;i<n;i++)
		 cout<<b[i]<<" ";
    return 0;
}
	


