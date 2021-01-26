#include "pch.h"
#include "Inventario.h"

System::Void FPOO::Inventario::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{

	cmbCategoria->SelectedIndex = 0;
	cmbMarca->SelectedIndex = 0;
}
System::Void FPOO::Inventario::cmbMarca_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int indice = cmbMarca->SelectedIndex;
	cmbMarca->Items[indice]->ToString();
}

System::Void FPOO::Inventario::btnAñadir_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	int indice = cmbMarca->SelectedIndex;
	int index = cmbCategoria->SelectedIndex;
	cldatos.Insertar(Convert::ToString(txtdescrip->Text), Convert::ToInt16(txtexistencia->Text), Convert::ToInt16(txtprecio->Text), cmbMarca->Items[indice]->ToString(), cmbCategoria->Items[index]->ToString());
	MessageBox::Show("Agregado Correctamente");
}
System::Void FPOO::Inventario::btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion eliminar;
	eliminar.Eliminar(Convert::ToInt16(txtEliminar->Text));
	MessageBox::Show("Producto eliminado");
}
System::Void FPOO::Inventario::btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion modi;
	modi.Modificar(Convert::ToInt16(txtNueva->Text), Convert::ToInt16(txtID->Text));
}

System::Void FPOO::Inventario::btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion  cnd;
	cnd.Mostrar();

}

System::Void FPOO::Inventario::btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
