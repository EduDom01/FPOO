#pragma once
#include"Punto.h"

namespace FPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAcceder;
	protected:
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::TextBox^ txtContraseña;
	private: System::Windows::Forms::Label^ lblUsuario;
	private: System::Windows::Forms::Label^ lblContaseña;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAcceder = (gcnew System::Windows::Forms::Button());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->lblContaseña = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAcceder
			// 
			this->btnAcceder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAcceder->Location = System::Drawing::Point(106, 150);
			this->btnAcceder->Name = L"btnAcceder";
			this->btnAcceder->Size = System::Drawing::Size(75, 23);
			this->btnAcceder->TabIndex = 0;
			this->btnAcceder->Text = L"Acceder";
			this->btnAcceder->UseVisualStyleBackColor = false;
			this->btnAcceder->Click += gcnew System::EventHandler(this, &Inicio::btnAcceder_Click);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(94, 57);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(100, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(94, 110);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(100, 20);
			this->txtContraseña->TabIndex = 2;
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Location = System::Drawing::Point(94, 38);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(43, 13);
			this->lblUsuario->TabIndex = 3;
			this->lblUsuario->Text = L"Usuario";
			// 
			// lblContaseña
			// 
			this->lblContaseña->AutoSize = true;
			this->lblContaseña->Location = System::Drawing::Point(94, 91);
			this->lblContaseña->Name = L"lblContaseña";
			this->lblContaseña->Size = System::Drawing::Size(61, 13);
			this->lblContaseña->TabIndex = 4;
			this->lblContaseña->Text = L"Contraseña";
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblContaseña);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->btnAcceder);
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAcceder_Click(System::Object^ sender, System::EventArgs^ e);
};
}
