
#ifndef INFORMES_H_
#define INFORMES_H_
#include "clientes.h"
#include "pedidos.h"
#include "localidades.h"
#include "myFunctions.h"

typedef struct
{
	int idCliente;
	int contador;

}eAuxiliar;


int MostrarMenuDeOpciones ();

int CargarCliente (eCliente listaClientes[], int lenClientes, eLocalidad listaLocalidades[], int lenLocalidades);

int ImprimirUnClientePorId (eCliente listaClientes[], int lenClientes, eLocalidad listaLocalidades[], int lenLocalidades, int id);

int ImprimirClientes(eCliente listaClientes[], int lenClientes, eLocalidad listaLocalidades[], int lenLocalidades);

int ImprimirUnPedidoPendientePorId (ePedido list[], int len, int id);

int ImprimirPedidosPendientes(ePedido listaPedidos[], int lenPedidos, eCliente listaClientes[], int lenClientes);

int ProcesarResiduos (ePedido list[], int len, int idCliente);

int ImprimirClientesConPedidosPendientes(eCliente listaClientes[], int lenClientes, eLocalidad listaLocalidades[], int lenLocalidades, ePedido listaPedidos[], int lenPedidos);

int ImprimirPedidosPendientesConDatosCliente(ePedido listaPedidos[], int lenPedidos, eCliente listaClientes[], int lenClientes);

int ImprimirPedidosCompletadosConDatosCliente(ePedido listaPedidos[], int lenPedidos, eCliente listaClientes[], int lenClientes);

int ContarPedidosPendientesPorLocalidad (ePedido listaPedidos[], int lenPedidos, eCliente listaClientes[], int lenClientes, eLocalidad listaLocalidades[], int lenLocalidades, int* cantidadPendientes);

int CalcularPromedioKilosReciclados (eCliente listaClientes[], int lenClientes, ePedido listaPedidos[], int lenPedidos, float* promedio );

int EliminarCliente(eCliente listaClientes[], int lenClientes, ePedido listaPedidos[], int lenPedidos, int id);

int BajaLocalidad (eCliente listaClientes[], int lenClientes, ePedido listaPedidos[], int lenPedidos, eLocalidad listaLocalidades[], int lenLocalidades, int idLocalidad);

int ContarPedidosPorEstado (ePedido listaPedidos[], int lenPedidos, eCliente listaClientes[], int lenClientes, int estadoPedido);


int EditarCliente(eCliente listaClientes[], int lenClientes, eLocalidad listaLocalidades[], int lenLocalidades, int index);

int VerificarCargaDeKilos (float kilosTotales, float* kilosHDPE, float* kilosLDPE, float* kilosPP, char mensajeError[], int cantidadReintentos);

int ContarClientes (eCliente listaClientes[], int lenClientes, ePedido listaPedidos[], int lenPedidos);










#endif /* INFORMES_H_ */
