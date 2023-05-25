int main() {
    vector<PlatoDelDia> menuDelDia = {
        {"Hamburguesa", 8.5, 10},
        {"Pizza", 10, 8},
        {"Ensalada", 7, 15}
    };

    Restaurante restaurante("Mi Restaurante", "Calle 123", menuDelDia);

    // Simulación de ventas por delivery
    restaurante.registrarVentaDelivery(0, 3);
    restaurante.registrarVentaDelivery(1, 2);
    restaurante.registrarVentaDelivery(2, 4);

    // Simulación de ventas en mesa
    restaurante.registrarVentaMesa(0, 2);
    restaurante.registrarVentaMesa(2, 3);

    // Impresión del reporte
    restaurante.imprimirReporte();

    return 0;
}




