#include <iostream>
#include <vector>
using namespace std;




class Ruta {
public:
  Ruta(const string& nombre) : nombre_(nombre) {}


  void agregarUbicacion(const string& ubicacion) {
    ubicaciones_.push_back(ubicacion);
  }


  void imprimirRuta() const {
    cout << "Ruta: " << nombre_ <<endl;
    cout << "Ubicaciones:" <<endl;
    for (const auto& ubicacion : ubicaciones_) {
      cout << "- " << ubicacion <<endl;
    }
  }


private:
  string nombre_;
  vector<string> ubicaciones_;
};


template<typename T>
class SistemaGestionRutas {
public:
  void agregarRuta(const T& ruta) {
    rutas_.push_back(ruta);
  }


  void imprimirRutas() const {
    for (const auto& ruta : rutas_) {
      ruta.imprimirRuta();
      cout <<endl;
    }
  }


private:
  vector<T> rutas_;
};


int main() {
  SistemaGestionRutas<Ruta> sistema;


  Ruta ruta1("Ruta 1");
  ruta1.agregarUbicacion("Ubicación A");
  ruta1.agregarUbicacion("Ubicación B");
  ruta1.agregarUbicacion("Ubicación C");


  Ruta ruta2("Ruta 2");
  ruta2.agregarUbicacion("Ubicación X");
  ruta2.agregarUbicacion("Ubicación Y");
  ruta2.agregarUbicacion("Ubicación Z");




  sistema.agregarRuta(ruta1);
  sistema.agregarRuta(ruta2);


  sistema.imprimirRutas();


  return 0;
}
