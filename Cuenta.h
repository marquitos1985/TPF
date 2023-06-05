#ifndef CUENTAS_H_INCLUDED
#define CUENTAS_H_INCLUDED
typedef struct {
    int id; /// campo �nico y autoincremental
    int idCliente; /// Id del Cliente due�o de la Cuenta;
    int monto;
    int nroCuenta;
    int tipoDeCuenta; /// 1. Caja de Ahorro en Pesos, 2. Caja de Ahorro en D�lares, 3. Cta Cte en $
    float costoMensual; /// Costo de mantenimiento del producto;
    int eliminado; /// 0 si est� activo - 1 si est� eliminado
}stCuenta;

stCuenta cargaUnaCuenta (int idCliente);
void muestraUnaCuenta (stCuenta a);

#endif // CUENTAS_H_INCLUDED
