
#ifndef CLIENTES_H_
#define CLIENTES_H_
#define LC 5 //Cantidad de clientes.

typedef struct
{
	int idCliente;
	char nombreEmpresa[41];
	char cuit[12];
	char direccion[41];
	int idLocalidad;
	int isEmpty;

}eCliente;

int InicializarClientes(eCliente list[], int len);


int HayEspacioVacioCliente (eCliente list[], int len);


int HayUnCliente (eCliente list[], int len);


int ContarClientes (eCliente list[], int len, int* cantidadClientes);


int EncontrarUltimoIdCliente(eCliente list[], int len);


int EncontrarClientePorId(eCliente list[], int len, int id);















#endif /* CLIENTES_H_ */
