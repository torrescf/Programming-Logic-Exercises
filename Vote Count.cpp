#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int votosRepresentante1 = 0, votosRepresentante2 = 0, votosRepresentante3 = 0, totalVotos;
  string nomeArquivo, voto, representante1, representante2, representante3;
  
  cin >> nomeArquivo;

  ifstream arquivoEntrada(nomeArquivo);

  getline(arquivoEntrada, representante1);
  getline(arquivoEntrada, representante2);
  getline(arquivoEntrada, representante3);

  arquivoEntrada >> totalVotos;
  arquivoEntrada.ignore(); 
  
  for (int i = 0; i < totalVotos; i++) {
    getline(arquivoEntrada, voto);
    if (voto == representante1) {
      votosRepresentante1++;
    } else if (voto == representante2) {
      votosRepresentante2++;
    } else if (voto == representante3) {
      votosRepresentante3++;
    }
  }

  int votosMaisPopular = max(votosRepresentante1, max(votosRepresentante2, votosRepresentante3));

  cout << votosMaisPopular << endl;

  arquivoEntrada.close();

  return 0;
}
