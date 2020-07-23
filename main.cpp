#include <iostream>
using namespace std;

void  ingresar (int a[], int r);
void numerosPares (int a[], int r);


int main() {
  int arreglo[100];
	int rango;
	cout << "Ingrese el tamaño del arreglo: ";
	cin >>rango;
  ingresar (arreglo,rango);
  numerosPares (arreglo,rango);
 return 0;
}

void  ingresar (int a[], int r){
  int num[100];
  for (int i=0;i<r;i++){
  cout << "Ingrese el numero " << i+1 << " del arreglo: " << endl;
  cin >> num[i];
  }
  
}

void numerosPares (int a[], int r){
  int num[100];
  cout << "NUMEROS PARES: " << endl;
  for (int i=0;i<r;i++){
  if (num[i] %2==0){
    cout << "numero " << i+1 <<": "<< num[i] << endl;
  }
  }
  
}

