
#include<iostream>

//Single line comment
using namespace std;

string in_name, out_extracted;
//string names[9] = [Alessandro, Marco, Carlo, Silvia, Edoardo, Assunta, Ignazio, Sara, Alessandra]
string names[3] = {"ale","marco","carlo"};
int i = 0;
int ok = 0;


//This is where the execution of program begins
int main() {
	//immagazzina il nome dell'utente nella variabile in_name
	cout << "Come ti chiami?" << endl;
	cin >> in_name;

	//controlla che il nome sia effettivamente nella lista
	for (int i = 0; i<9; i++) {
		if (in_name == names[i]) 
			cout << "Bene! Ecco a chi dovrai fare il regalo:" << endl;
		    ok = 1;
	}
	if (ok != 1)
		cout << "Il tuo nome non e' nella lista. Contatta Alessandro Tuveri!" << endl;

	//estrai un numero casuale compreso fra 0 e 2 e stampa il nome della persona
	int j = (rand() % 2);
	cout << names[j] << endl;
    return 0;
}