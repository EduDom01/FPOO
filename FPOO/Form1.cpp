#include "pch.h"
#include "Form1.h"


using FPOO::Punto;
using FPOO::Inventario;

System::Void CppCLRWinformsProjekt::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
	btnPunto->Enabled = true;
}

System::Void CppCLRWinformsProjekt::Form1::btnPunto_Click(System::Object^ sender, System::EventArgs^ e)
{
	Punto^ punto = gcnew Punto;
	punto->Show();
	
 }
System::Void CppCLRWinformsProjekt::Form1::btnInventario_Click(System::Object^ sender, System::EventArgs^ e)
{
	Inventario^ inventario = gcnew Inventario;
	inventario->Show();
 }
System::Void CppCLRWinformsProjekt::Form1::btnVentas_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Desarrollado por:\n *Cardozo Ramirez Karla Paola\n *Campech Arenas Luis Roberto\n *Dominguez Navarrete Eduardo\n *Flores Sanchez Jesus Ricardo\n Alumnos de la Unidad Profesional Interdisciplinaria de Ingiener�a y Ciencias Sociales y Administrativas (UPIICSA) del programa acad�mico Licenciatura en Ingenier�a en Inform�tica\n Unidad de Aprendizaje: Fundamentos de la Programaci�n Orientada a Objetos, impartida por el profesor Erick Huerta Valdepa�a en la secuencia 2NM20");
 }

