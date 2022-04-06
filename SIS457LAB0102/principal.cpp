#include <iostream>
using namespace std;

int main(){
	string respuesta;
	string respuesta2;

	cout << "Hola mi nombre es Sergio Alejandro Huarachi Navarro" << endl;
	cout << "deceas conocer mas sobre mi?...   ";
	cout << "digita Y para continuar o N para salir" << endl;
	cin >> respuesta;

	do {		
		if (respuesta == "y") {
			cout << "tengo 28 anos y cumplo años el 06 de agosto, naci en la ciudad de Tupiza y actualmente estoy cursando la materia de SIS-457 PROGRAMACION AVANZADA la cual me parece muy interesante y espero el Ingeniero Pacheco me deje pasar la materia ggg" << endl;
			cout << "me gusta el futbol pero ya las lesiones no me dejan jugar a un nivel mas competitivo por lo cual ya solo me queda hacerlo por diversion" << endl;
			cout << "Si deceas volver a imprimir mis datos?... preciona S o N para salir" <<endl;
			cin >> respuesta2;
		}
	} while (respuesta2 == "s");

	//Trabajo realizado...

	

	system("pause");
	return 0;
}