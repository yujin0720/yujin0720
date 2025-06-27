#include <iostream>

using namespace std;

int main()
{ int h, m , c;
 cin >> h >> m >> c;
 
 m += c % 60;
 if (m>=60)
 {  h += m /60;
     m = m%60;

 }
 h = (h+ c/60)%24;
cout << h << " " << m;
    return 0;
}