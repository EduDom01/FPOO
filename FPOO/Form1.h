#pragma once
#include "Punto.h"
#include "Punto.h"
#include "Inventario.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Button^ btnPunto;
	private: System::Windows::Forms::Button^ btnInventario;
	private: System::Windows::Forms::Button^ btnVentas;
	protected:




	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->btnInventario = (gcnew System::Windows::Forms::Button());
			this->btnVentas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(118, -1);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(178, 38);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"\r\nTienda de Tecnología";
			// 
			// btnPunto
			// 
			this->btnPunto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btnPunto->ForeColor = System::Drawing::Color::Black;
			this->btnPunto->Location = System::Drawing::Point(145, 63);
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->Size = System::Drawing::Size(116, 23);
			this->btnPunto->TabIndex = 1;
			this->btnPunto->Text = L"Punto de Venta";
			this->btnPunto->UseVisualStyleBackColor = false;
			this->btnPunto->Click += gcnew System::EventHandler(this, &Form1::btnPunto_Click);
			// 
			// btnInventario
			// 
			this->btnInventario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnInventario->Location = System::Drawing::Point(145, 102);
			this->btnInventario->Name = L"btnInventario";
			this->btnInventario->Size = System::Drawing::Size(116, 23);
			this->btnInventario->TabIndex = 2;
			this->btnInventario->Text = L"Consultar Inventario";
			this->btnInventario->UseVisualStyleBackColor = false;
			this->btnInventario->Click += gcnew System::EventHandler(this, &Form1::btnInventario_Click);
			// 
			// btnVentas
			// 
			this->btnVentas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnVentas->Location = System::Drawing::Point(145, 147);
			this->btnVentas->Name = L"btnVentas";
			this->btnVentas->Size = System::Drawing::Size(116, 23);
			this->btnVentas->TabIndex = 3;
			this->btnVentas->Text = L"Información";
			this->btnVentas->UseVisualStyleBackColor = false;
			this->btnVentas->Click += gcnew System::EventHandler(this, &Form1::btnVentas_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(404, 230);
			this->Controls->Add(this->btnVentas);
			this->Controls->Add(this->btnInventario);
			this->Controls->Add(this->btnPunto);
			this->Controls->Add(this->lblNombre);
			this->Name = L"Form1";
			this->Text = L"FPOO";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnPunto_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnInventario_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnVentas_Click(System::Object^ sender, System::EventArgs^ e);
};
}

