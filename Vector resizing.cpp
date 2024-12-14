#include <iostream>

using namespace std;

int main() {
   int capacidade = 2, tamanho = 0, n = 0; 
   int* vet = new int[capacidade];
       while(cin>>n and n!= -1){
		    if(tamanho == capacidade){
			  capacidade +=2;
			  int* newvet = new int[capacidade];
			     for(int i=0; i<tamanho; i++){
				newvet[i] = vet[i];
				 }
			delete[]vet;
			vet = newvet;
			}
		 vet[tamanho++] = n;
	   }
    
    if(tamanho%2 == 1){
		cout<<vet[tamanho/2]/2.0<<endl;
		}else{
			double media = (vet[tamanho/2-1]+vet[tamanho/2])/2.0;
			cout<<media<<endl;
			}
    return 0;
    
}
