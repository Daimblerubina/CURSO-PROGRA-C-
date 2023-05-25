//todo esta unido en este cpp para menores complicaciones pero igualmente estan separados por herencia multiple para entenderlo mejor.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PlatoDelDia {
public:
    PlatoDelDia(string nombre, float costo, int cantidad)
        : nombre_(nombre), costo_(costo), cantidad_(cantidad) {}

    string getNombre() const { return nombre_; }
    float getCosto() const { return costo_; }
    int getCantidad() const { return cantidad_; }

    void setCantidad(int cantidad) { cantidad_ = cantidad; }

private:
    string nombre_;
    float costo_;
    int cantidad_;
};

class Restaurante {
public:
    Restaurante(string nombre, string direccion, vector<PlatoDelDia> menuDelDia)
        : nombre_(nombre), direccion_(direccion), menuDelDia_(menuDelDia),
          ventasDelivery_(0), ventasMesa_(0) {}

    string getNombre() const { return nombre_; }
    string getDireccion() const { return direccion_; }
    vector<PlatoDelDia> getMenuDelDia() const { return menuDelDia_; }
    float getVentasDelivery() const { return ventasDelivery_; }
    float getVentasMesa() const { return ventasMesa_; }

    void setMenuDelDia(vector<PlatoDelDia> menuDelDia) { menuDelDia_ = menuDelDia; }

    void registrarVentaDelivery(int indicePlato, int cantidad) {
        float monto = menuDelDia_[indicePlato].getCosto() * cantidad;
        menuDelDia_[indicePlato].setCantidad(menuDelDia_[indicePlato].getCantidad() - cantidad);
        ventasDelivery_ += monto;
        cout << "Se registró una venta por delivery de " << cantidad << " platos de " << menuDelDia_[indicePlato].getNombre() << " por un monto de $" << monto << endl;
    }

    void registrarVentaMesa(int indicePlato, int cantidad) {
        float monto = menuDelDia_[indicePlato].getCosto() * cantidad;
        menuDelDia_[indicePlato].setCantidad(menuDelDia_[indicePlato].getCantidad() - cantidad);
        ventasMesa_ += monto;
        cout << "Se registró una venta en mesa de " << cantidad << " platos de " << menuDelDia_[indicePlato].getNombre() << " por un monto de $" << monto << endl;
    }

    void imprimirReporte() const {
        cout << "Restaurante: " << nombre_ << endl;
        cout << "Dirección: " << direccion_ << endl;
        cout << "Menú del día: " << endl;
        for (const auto& plato : menuDelDia_) {
            cout << "- " << plato.getNombre() << " (cantidad: " << plato.getCantidad() << ", costo: $" << plato.getCosto() << ")" << endl;
        }
        cout << "Ventas por delivery: $" << ventasDelivery_ << endl;
        cout << "Ventas en mesa : $" << ventasMesa_ << endl;
}

private:
string nombre_;
string direccion_;
vector<PlatoDelDia> menuDelDia_;
float ventasDelivery_;
float ventasMesa_;
};

int main() {
vector<PlatoDelDia> menu = {
{"Hamburguesa", 8.50, 10},
{"Pizza", 10.00, 8},
{"Ensalada César", 6.75, 15},
{"Sopa de pollo", 5.25, 20}
};
Restaurante miRestaurante("Mi Restaurante", "Calle 123", menu);

// Simulación de ventas
miRestaurante.registrarVentaDelivery(0, 2);
miRestaurante.registrarVentaMesa(1, 1);
miRestaurante.registrarVentaDelivery(2, 3);
miRestaurante.registrarVentaMesa(3, 2);

// Imprimir reporte
miRestaurante.imprimirReporte();

return 0;
}


