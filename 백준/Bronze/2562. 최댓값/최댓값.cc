#include <iostream>

using namespace std;

int main()
{ int a[9] ;
 int idx = 0;
 int max_val = 0;
 for(int i =0 ; i <9 ; i++){
     cin >> a[i] ;
     if (a[i] > max_val)
     {idx = i;
         max_val = a[i];}
         
 }
  cout << max_val <<"\n" << idx+1;
    
    
    return 0;
}