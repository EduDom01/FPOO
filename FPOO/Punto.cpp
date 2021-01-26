#include "pch.h"
#include "Punto.h"

using  FPOO::Form;
System::Void FPOO::Punto::btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Esta seguro de cancelar esta operación", "Sistema", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
	
	if (System::Windows::Forms::DialogResult::OK == result)
	{
		txtTotal->Text = String::Format("{0:$}", 0);
		lstVenta->Items->Clear();
		txtID->Text = L"";
	}

}

System::Void FPOO::Punto::btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	

}

System::Void FPOO::Punto::btnRealizar_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("¿Está suguro que el pedido es correcto", "Sistema", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);

	if (System::Windows::Forms::DialogResult::OK == result)
	{
		tPreview1->Show();
	}
}

System::Void FPOO::Punto::pd1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	int altura = 50;
	for (int i = 0; i < lstVenta->Items->Count-1; i++)
	{
		lstProductos->SelectedIndex = i;
		e->Graphics->DrawString(lstVenta->SelectedItem->ToString(), lstVenta->Font, gcnew SolidBrush(lstVenta->ForeColor), 50, altura, StringFormat::GenericDefault);
			altura += lstVenta->ItemHeight;
	}
	e->Graphics->DrawString(txtTotal->Text->ToString(), txtTotal->Font, gcnew SolidBrush(txtTotal->ForeColor), 50, altura, StringFormat::GenericDefault);
}

System::Void FPOO::Punto::btnRegresa_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
