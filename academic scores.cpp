#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
    float trabalho,avaliacao,exame,media;
      cin>>trabalho>>avaliacao>>exame;
      media=((trabalho*2)+(avaliacao*3)+(exame*5))/10;
    if (media>=8.0)
      cout<<media<<endl<<"A";
    if (media>=7.0 and media<=7.9)
      cout<<media<<endl<<"B";
    if (media>=6.0 and media<=7.0)
      cout<<media<<endl<<"C";
    if (media>=5.0 and media<=6.0)
      cout<<media<<endl<<"D";
    if (media<5.0)
      cout<<media<<endl<<"E";
    
    return 0;
    
    }
