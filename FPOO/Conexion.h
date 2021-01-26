#pragma once
#include"Inventario.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
ref class Conexion : public System::Object
{
public:
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	SqlCommand cmd;


	void Conectar()
	{
		cn = gcnew SqlConnection("Data Source=DESKTOP-4TE2C57;Initial Catalog=FPOO;Integrated Security=True");
		cn->Open();
	}
	void Insertar(String^ Producto, int Existencia, int Precio, String^ Marca, String^ Categoria)
	{
		Conectar();
		String^ sentencia = "Insert into articulo values(@produc,@exis,@pre,@marc,@cat)";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@produc", Producto);
		ejecutar->Parameters->AddWithValue("@exis", Existencia);
		ejecutar->Parameters->AddWithValue("@pre", Precio);
		ejecutar->Parameters->AddWithValue("@marc", Marca);
		ejecutar->Parameters->AddWithValue("@cat", Categoria);
		ejecutar->ExecuteNonQuery();
		cn->Close();
	}
	void Mostrar()
	{
		Conectar();
		String^ sentencia = "Select * from articulos";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	}
	void Modificar(int existencia, int id)
	{
		Conectar();
		String^ sentencia = "update articulo set cantidad = @exis where id =@id";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id", id);
		ejecutar->Parameters->AddWithValue("@exis", existencia);
	}
	void Eliminar(int id)
	{
		Conectar();
		String^ sentencia = "Delete from articulos where ID=@id";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id", id);
		ejecutar->BeginExecuteNonQuery();
		cn->Close();

	}
	
};

