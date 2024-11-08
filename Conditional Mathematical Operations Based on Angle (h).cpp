#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int h;
    double x,y,calculo;
      cin>>h>>x>>y;
      h=h%360;
    if (h<=91)
      calculo=x+y;
    if (h>90 and h<=179)
      calculo=x*y;
    if (h>180 and h<270)
      calculo=x/y;
    if (h>270)
      calculo= double (pow (x,y));
    cout<<calculo;
    return 0;
    
    }
