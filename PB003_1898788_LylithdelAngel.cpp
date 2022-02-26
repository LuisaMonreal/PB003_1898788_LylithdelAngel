#include<iostream>
using namespace std;
int main()
{
	int regresar = 1;
	int menu;
	int hora;
	char nombre[100];
	char tratamiento[100];
	
	while (regresar == 1)
	{
		cout << endl << "Menu de opciones" << endl;
	cout << endl << "1.-Agendar cita" << endl << "2.-Modificar cita" << endl << "3.-Eliminar cita" << endl << "4.-Lista de citas vigentes" << endl << "5.-Limpiar pantalla" << endl << "6.-Salir" << endl;

		cout << endl << "Ingrese el numero correspondiente respecto al menu:" << endl;
			cin >> menu;

			//Cada numero marcado en el menu, es el correspondiente para elegir cada una de las opciones.

		switch (menu)
		{
		case 1:
			cout << endl << "Agendar cita" << endl;
			cout << endl << "Nombre del paciente:" << endl;
			cin >> nombre;
			cout << endl << "Nombre del tratamiento" << endl;
			cin >> tratamiento;
			cout << endl << "Hora de la cita (formato 24hrs)" << endl;
			cin >> hora;
			break;

			//Aquí es donde se introducen los datos del paciente, nombre, tratamiento, hora de cita, etc.

		case 2:
			cout << endl << "Modificar cita" << endl;
			break;
		case 3:
			cout << endl << "Eliminar cita" << endl;
			break;
		case 4:
			cout << endl << "Lista de citas vigentes" << endl;
			break;
		case 5:
			cout << endl << "Limpiar pantalla" << endl;
			break;
		case 6:
			cout << endl << "Salir" << endl;
			break;

		default:
			cout << endl <<"Error al seleccionar, favor de seguir las indicacioner siguientes" << endl;

		}
		cout << endl << "Inserte un 1 si desea regresar al menu, un 2 si desea salir del programa:" << endl;
		cin >> regresar;

		//Insertar el numero 1 llevara al menu principal, insertar el numero 2 hara que salga del programa.

	}
}