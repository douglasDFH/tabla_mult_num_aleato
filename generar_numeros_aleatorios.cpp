// generar numero aleatorios 
//objetivos escribir un programa en c++ que imprima N numeros aleatorios
// entre 0 y 99don de n sera ingresado por el usuario
// cuantos numero quiere generar :3 
//3,45,12
#include <iostream>// libreria principal 
#include <cstdlib> // para usar la funci�n rand()
#include <ctime> // para usar la funci�n time()
using namespace std;

int main()
{
	int n; // declarar una variable para almacenar el n�mero de n�meros aleatorios
	cout << "Ingrese un numero : "; // pedir al usuario que ingrese el n�mero
	cin >> n; // leer el n�mero desde la entrada est�ndar
	                
	// inicializar el generador de n�meros aleatorios con la hora actual
    // para que cada vez que se ejecute el programa se obtengan valores diferentes
	srand(time(0));
	// ejecutar un bucle desde 1 hasta n
	// generar e imprimir los n�meros aleatorios
	for (int i = 1; i <= n; i++)// obtener un n�mero aleatorio entre 0 y RAND_MAX, por ejemplo 32767
	{
		int r = rand() % 100;// para reducir el rango a 0 y 99, se usa el operador m�dulo (%)
		cout << r << " ";// mostrar el n�mero aleatorio en la salida est�ndar
	}
	  
	cout << endl;// mostrar un salto de l�nea al final
	return 0;
}
