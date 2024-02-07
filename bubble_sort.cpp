#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num[205], aux, i, j, n;
	cout << "Ingrese cantidad de espacios del array" << endl;
	cin >> n;
	cout << n << endl;
	
	for(i = 0;i < n; i++) {
		cout << "numero: " << i + 1 << ":" << endl;
		cin >> num[i];
	}
	
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(num[i] > num[j]) {
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	
	for(i = 0; i < n; i++) {
		cout << num[i] << endl;
	}
	
	for(i = n-1; i > 0; i--) {
		cout << num[i] << endl;
	}
	return 0;
}

