#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    if (y >= 45)
        y -= 45;
    else{
        y += 15;
        x = (x+23) % 24;
      
        
    }
    cout << x << " "<< y ;
    
    return 0;
}
