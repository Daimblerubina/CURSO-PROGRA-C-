

class PlatoDelDia {
public:
    PlatoDelDia(string nombre, float costo, int cantidad) :
        nombre_(nombre), costo_(costo), cantidad_(cantidad) {}

    string getNombre() const {
        return nombre_;
    }

    float getCosto() const {
        return costo_;
    }

    int getCantidad() const {
        return cantidad_;
    }

    void descontar(int cantidad) {
        cantidad_ -= cantidad;
    }

private:
    string nombre_;
    float costo_;
    int cantidad_;
};
