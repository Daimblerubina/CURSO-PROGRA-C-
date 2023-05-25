int main() {
    // Crear un vector con los platos del día
    vector<PlatoDelDia> menuDelDia = {
        PlatoDelDia("Arroz con pollo", 15.50, 10),
        PlatoDelDia("Lomo saltado", 20.00, 8),
        PlatoDelDia("Ceviche", 18.00, 12)
    };

    // Crear un objeto de la clase Restaurante
    Restaurante miRestaurante("Mi Restaurante", "Calle Los Olivos 123", menuDelDia);

    // Hacer algunas ventas
    miRestaurante.registrarVentaDelivery(0, 2); // Vender 2 platos de Arroz con pollo por delivery
    miRestaurante.registrarVentaMesa(1, 3); // Vender 3 platos de Lomo saltado en mesa

    // Imprimir reporte del restaurante
    miRestaurante.imprimirReporte();

    return 0;
}
