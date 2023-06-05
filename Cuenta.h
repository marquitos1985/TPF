#ifndef CUENTAS_H_INCLUDED
#define CUENTAS_H_INCLUDED
typedef struct {
    int id; /// campo único y autoincremental
    int idCliente; /// Id del Cliente dueño de la Cuenta;
    int monto;
    int nroCuenta;
    int tipoDeCuenta; /// 1. Caja de Ahorro en Pesos, 2. Caja de Ahorro en Dólares, 3. Cta Cte en $
    float costoMensual; /// Costo de mantenimiento del producto;
    int eliminado; /// 0 si está activo - 1 si está eliminado
}stCuenta;

stCuenta cargaUnaCuenta (int idCliente);
void muestraUnaCuenta (stCuenta a);

#endif // CUENTAS_H_INCLUDED
