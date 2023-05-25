class Restaurante {
private:
    string nombre;
    string direccion;
    vector<PlatoDelDia> menuDelDia;
    float ventasDelivery;
    float ventasMesa;
public:
    Restaurante(string _nombre, string _direccion, vector<PlatoDelDia> _menuDelDia) {
        nombre = _nombre;
        direccion = _direccion;
        menuDelDia = _menuDelDia;
        ventasDelivery = 0;
        ventasMesa = 0;
    }

    void registrarVentaDelivery(int indicePlato, int cantidad) {
        // Verificar que el índice del plato es válido
        if (indicePlato >= 0 && indicePlato < menuDelDia.size()) {
            PlatoDelDia& plato = menuDelDia[indicePlato];
            // Verificar que haya suficientes platos del día disponibles
            if (plato.cantidad >= cantidad) {
                float costoVenta = plato.costo * cantidad;
                plato.cantidad -= cantidad;
                ventasDelivery += costoVenta;
            } else {
                cout << "No hay suficientes platos del día disponibles para vender por delivery" << endl;
            }
        } else {
            cout << "El índice del plato no es válido" << endl;
        }
    }

    void registrarVentaMesa(int indicePlato, int cantidad) {
        // Verificar que el índice del plato es válido
        if (indicePlato >= 0 && indicePlato < menuDelDia.size()) {
            PlatoDelDia& plato = menuDelDia[indicePlato];
            // Verificar que haya suficientes platos del día disponibles
            if (plato.cantidad >= cantidad) {
                float costoVenta = plato.costo * cantidad;
                plato.cantidad -= cantidad;
                ventasMesa += costoVenta;
            } else {
                cout << "No hay suficientes platos del día disponibles para vender en mesa" << endl;
            }
        } else {
            cout << "El índice del plato no es válido" << endl;
        }
    }
1
    void imprimirReporte() {
        cout << "Restaurante " << nombre << endl;
        cout << "Dirección: " << direccion << endl;
        cout << "Menú del día:" << endl;
        for (int i = 0; i < menuDelDia.size(); i++) {
            PlatoDelDia& plato = menuDelDia[i];
            cout << i << ") " << plato.nombre << " - S/ " << plato.costo << " - " << plato.cantidad << " disponibles" << endl;
        }
        cout << "Ventas por delivery: S/ " << ventasDelivery << endl;
        cout << "Ventas en mesa: S/ " << ventasMesa << endl;
    }
};
