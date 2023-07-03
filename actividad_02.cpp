#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Entrega {
private:
    string direccion;
public:
    Entrega(const string& dir) : direccion(dir) {
    }
};


class Ruta {
private:
    vector<Entrega> entregas;
public:
    void agregarEntrega(const Entrega& entrega) {
        entregas.push_back(entrega);
    }


    int obtenerNumeroEntregas() const {
        return entregas.size();
    }


    template<typename T>
    void asignarVehiculo(const T& vehiculo) {
        cout << "Asignando vehículo a la ruta: " << vehiculo <<endl;
    }


    template<typename T>
    void planificarHorarios(const T& horarios) {
        cout << "Planificando horarios: " << horarios <<endl;
    }
};
int main() {
    Ruta ruta;


    Entrega entrega1("Dirección 1");
    Entrega entrega2("Dirección 2");
    Entrega entrega3("Dirección 3");


    ruta.agregarEntrega(entrega1);
    ruta.agregarEntrega(entrega2);
    ruta.agregarEntrega(entrega3);


    ruta.asignarVehiculo("Camión");
    ruta.planificarHorarios("Lunes a Viernes");


    cout<<"Número de entregas en la ruta: "<<ruta.obtenerNumeroEntregas()  <<endl;


    return 0;
}
