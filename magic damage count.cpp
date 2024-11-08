#include <iostream>
using namespace std;

int main() {
	int vet[10], cont=0;
    for (int i=0; i<10; i++) cin>>vet[i];
    bool mortos=0;
    do{ mortos = false;
		for (int i=0; i<10; i++){
		 vet[i]--;
		 if (vet[i]==0){ mortos = true;
			 cont++;
			 }
		} }while (mortos);
		cout<<cont;
    
    return 0;
    
    }
