#include "informes.h"

int InicializarClientes(eCliente list[], int len)
{
	int estado;
	estado = -1;

	if (list != NULL && len > 0)
	{
		for(int i=0; i<len; i++)
		{
			list[i].isEmpty = 1;
			list[i].idCliente = 0;
		}
		estado = 0;
	}

	return estado;
}

int HayEspacioVacioCliente (eCliente list[], int len)
{
	int exist;
	exist = -1;
	if(list != NULL && len > 0)
	{
		exist = 0;
		for (int i = 0; i < len; i++)
		{
			if(list[i].isEmpty)
			{
				exist = 1;
				break;
			}
		}
	}
	return exist;
}

int HayUnCliente (eCliente list[], int len)
{
	int exist;
	exist = 0;
	if(list != NULL && len > 0)
	{
		for (int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty)
			{
				exist = 1;
				break;
			}
		}
	}
	return exist;
}

int ContarClientes (eCliente list[], int len)
{
	int count = -1;

	if (list != NULL && len > 0)
	{
		count = 0;
		for(int i = 0; i < len; i++)
			{
				if(!list[i].isEmpty)
				{
					count++;
				}
			}
	}

	return count;
}

int EncontrarUltimoIdCliente(eCliente list[], int len)
{
	int lastId;
	lastId = 0;

	if (list != NULL && len > 0 && HayUnCliente(list, len))
	{
		for(int i=0; i<len; i++)
		{
			if(list[i].idCliente > lastId)
			{
				lastId = list[i].idCliente;
			}
		}
	}
	return lastId;
}

int EncontrarClientePorId(eCliente list[], int len, int id)
{
	int indexID;
	indexID = -1;

	if (list != NULL && len > 0 && HayUnCliente(list, len))
	{
		for(int i = 0; i < len; i++)
		{
			if(!list[i].isEmpty && list[i].idCliente == id)
			{
				indexID = i;
			}
		}
	}
	return indexID;
}


int EditarCliente(eCliente list[], int len, int index)
{
	int estado;
	estado = -1;
	int opcion;
	char respuesta[2];


	if (list != NULL && len > 0 && HayUnCliente(list, len))
	{
		estado = 0;

		do
		{
			opcion = PedirEnteroEnRango("\n 1 - Direccion."
										"\n 2 - Localidad."
										"\n\n Ingrese la opcion que desea editar: ", 1, 2);

			switch (opcion)
			{
				case 1:
					while(PedirCadena("\n Ingrese direccion: ", list[index].direccion, sizeof(list[index].direccion))==-1)
					{
						system("cls");
						printf("\n Datos erroneos.\n");
					}
				break;

				case 2:
					list[index].idLocalidad = PedirEntero("Ingrese ID localidad: ");
				break;
			}

			PedirCadena("\n Desea editar otro dato? S/N: ", respuesta, sizeof(respuesta));
		}while(stricmp(respuesta, "S") == 0);
	}
	system("cls");
	return estado;
}






