#include <iostream>
#include <vector>
  
using namespace std;
int main() {
  int i, c;
  cout << "Quante persone ci sono nella classe: ";
  cin >> c;
  string tempNome;
  vector<string> nomi(c);
  vector<float> voti(c), assenze(c);
  for(i=0; i < c; i++)
    {
      cout << "Ins nome: ";
      cin >> nomi[i];
      cout << "Ins voto: ";
      cin >> voti[i];
      cout << "Ins assenze: ";
      cin >> assenze[i];
    }
  cout << "Ins indice studente da visualizzare [0 - " << c-1 << "]: " ;
  cin >> i;
  cout << "Nome: " << nomi[i] << ", voto: " << voti[i] << ", assenze: " << assenze[i] << endl;
  for(i = 0; i < c; i++)
    {
     cout << "Nome: " << nomi[i] << ", voto: " << voti[i] << ", assenze: " << assenze[i] << endl;
    }
  cout << "Ins nome: ";
  cin >> tempNome;
  for(i = 0; i < c; i++)
    {
      if(tempNome == nomi[i])
      {
        cout << "Nome: " << nomi[i] << ", voto: " << voti[i] << ", assenze: " << assenze[i] << endl;
      }
    }
}

