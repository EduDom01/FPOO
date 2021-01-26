#include "pch.h"
#include "Inicio.h"
using FPOO::Punto;


System::Void FPOO::Inicio::btnAcceder_Click(System::Object^ sender, System::EventArgs^ e) {
	Punto^ ing = gcnew Punto();
	ing->Show(); 
}
