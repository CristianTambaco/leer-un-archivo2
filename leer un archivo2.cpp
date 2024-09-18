#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(){

ifstream archivo("C:\\Users\\PROGRAMACION\\Desktop\\hola.txt");
string contenido;


	if (archivo.is_open()){
		stringstream buffer;
		buffer << archivo.rdbuf(); // leer todo el archivo en un buffer
		contenido = buffer.str(); // convertir el buffer en un string
		cout << contenido<< endl; //mostrar el contenido del archivo
		archivo.close();
	} else {
		cerr << "No se pudo abrir el archivo para lectura. " <<endl;
	}
	return 0;
}

