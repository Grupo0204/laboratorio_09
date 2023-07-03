#include <iostream>
#include <string>
#include <cmath>
using namespace std;


template<typename T>
T calcularDistancia(T x1, T y1, T x2, T y2) {
    T dx = x2 - x1;
    T dy = y2 - y1;
    T distancia = sqrt(dx * dx + dy * dy);
    return distancia;
}

template<typename T>
T calcularTiempoEntrega(T distancia, T velocidadPromedio) {
    T tiempo = distancia / velocidadPromedio;
    return tiempo;
}

class Ruta
{
private:
    string nombre;
    double distancia;
    double tiempo;
public:
    Ruta(string nombre,double distancia,double tiempo):
    nombre(nombre),distancia(distancia),tiempo(tiempo){}
    
    friend ostream& operator<<(std::ostream& o, const Ruta& rt) {
        o << "Ruta: " << rt.nombre << endl ;
        o << "Distancia: " << rt.distancia << " km"<<endl;
        o << "Tiempo estimado de entrega: " << rt.tiempo << " horas"<<endl;
        return o;
    }
    void generarInformeRutas(Ruta* rutas, int numRutas) {
        for (int i = 0; i < numRutas; ++i) {
            const Ruta& ruta = rutas[i];
            cout << ruta << endl;
        }
    }
};




int main(){
    double dA,tA;
    dA = calcularDistancia<double>(2.5,3.8,1.5,5.6);
    tA = calcularTiempoEntrega<double>(dA,70.4);
    Ruta A("Alex",dA,tA);
    A.generarInformeRutas(&A,1);
}