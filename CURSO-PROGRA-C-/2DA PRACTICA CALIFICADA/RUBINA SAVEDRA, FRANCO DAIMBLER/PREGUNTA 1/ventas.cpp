class Restaurante {
public:
    Restaurante(string nombre, string direccion, vector<PlatoDelDia> menuDelDia) :
        nombre_(nombre), direccion_(direccion), menuDelDia_(menuDelDia), ventasDelivery_(0), ventasMesa_(0) {}

    void registrarVentaDelivery(int indice, int cantidad) {
        if (indice < 0 || indice >= menuDelDia_.size()) {
            cout << "Plato del día inválido" << endl;
            return;
        }

        PlatoDelDia& plato = menuDelDia_[indice];

        if (cantidad > plato.getCantidad()) {
            cout << "No hay suficientes platos del día" << endl;
            return;
        }

        float venta = plato.getCosto() * cantidad;
        plato.descontar(cantidad);
        ventasDelivery_ += venta;
    }

    void registrarVentaMesa(int indice, int cantidad) {
        if (indice < 0 || indice >= menuDelDia_.size()) {
            cout << "Plato del día inválido" << endl;
            return;
        }

        PlatoDelDia& plato = menuDelDia_[indice];

        if (cantidad > plato.getCantidad()) {
            cout << "No hay suficientes platos del día" << endl;
            return;
        }

        float venta = plato.getCosto() * cantidad;
        plato.descontar(cantidad);
        ventasMesa_ += venta;
    }

    void imprimirReporte() const {
        cout << "Restaurante: " << nombre_ << endl;
        cout << "Dirección: " << direccion_ << endl;
        cout << "Menú del día:" << endl;

        for (const PlatoDelDia& plato : menuDelDia_) {
            cout << "- " << plato.getNombre() << " ($" << plato.getCosto() << ") - " << plato.getCantidad() << " disponibles" << endl;
        }

        cout << "Ventas por delivery: $" << ventasDelivery_ << endl;
        cout << "Ventas en mesa: $" << ventasMesa_ << endl;
    }

private:
    string nombre_;
    string direccion_;
    vector<PlatoDelDia> menuDelDia_;
    float ventasDelivery_;
    float ventasMesa_;
};
private:
string nombre_;
string direccion_;
vector <plato_del dia>
float VentasDelivery< menu del dia
