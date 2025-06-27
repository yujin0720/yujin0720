#include <iostream>

using namespace std;

int main()
    
{ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
 cin >> n ;
 int a[n];
    int min_val = 1000000;
    int max_val = -1000000;
 for (int i = 0; i < n  ; i++)
 {
     cin >> a[i];
     if (a[i] > max_val) max_val = a[i];
     if (a[i] < min_val) min_val = a[i];
 }
    cout << min_val << " "<< max_val;
 
    
    return 0;
}