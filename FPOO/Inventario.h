#pragma once
#include "Conexion.h"

namespace FPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class Inventario : public System::Windows::Forms::Form
	{
	public:
		Inventario(void)
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
		~Inventario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnAñadir;













	private: System::Windows::Forms::TextBox^ txtdescrip;
	private: System::Windows::Forms::TextBox^ txtexistencia;

	private: System::Windows::Forms::TextBox^ txtprecio;


	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::ComboBox^ cmbMarca;

	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtNueva;



	private: System::Windows::Forms::Label^ lblDatos;
	private: System::Windows::Forms::Label^ lblModificar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtEliminar;
	private: System::Windows::Forms::ListBox^ lstProductos;














	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnAñadir = (gcnew System::Windows::Forms::Button());
			this->txtdescrip = (gcnew System::Windows::Forms::TextBox());
			this->txtexistencia = (gcnew System::Windows::Forms::TextBox());
			this->txtprecio = (gcnew System::Windows::Forms::TextBox());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->cmbMarca = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNueva = (gcnew System::Windows::Forms::TextBox());
			this->lblDatos = (gcnew System::Windows::Forms::Label());
			this->lblModificar = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEliminar = (gcnew System::Windows::Forms::TextBox());
			this->lstProductos = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(293, 5);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(105, 25);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Inventario";
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnEliminar->Location = System::Drawing::Point(314, 466);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 2;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Inventario::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnModificar->Location = System::Drawing::Point(314, 365);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 3;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = false;
			this->btnModificar->Click += gcnew System::EventHandler(this, &Inventario::btnModificar_Click);
			// 
			// btnAñadir
			// 
			this->btnAñadir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnAñadir->Location = System::Drawing::Point(314, 267);
			this->btnAñadir->Name = L"btnAñadir";
			this->btnAñadir->Size = System::Drawing::Size(75, 23);
			this->btnAñadir->TabIndex = 4;
			this->btnAñadir->Text = L"Añadir";
			this->btnAñadir->UseVisualStyleBackColor = false;
			this->btnAñadir->Click += gcnew System::EventHandler(this, &Inventario::btnAñadir_Click);
			// 
			// txtdescrip
			// 
			this->txtdescrip->Location = System::Drawing::Point(30, 227);
			this->txtdescrip->Name = L"txtdescrip";
			this->txtdescrip->Size = System::Drawing::Size(100, 20);
			this->txtdescrip->TabIndex = 5;
			// 
			// txtexistencia
			// 
			this->txtexistencia->Location = System::Drawing::Point(158, 226);
			this->txtexistencia->Name = L"txtexistencia";
			this->txtexistencia->Size = System::Drawing::Size(100, 20);
			this->txtexistencia->TabIndex = 6;
			// 
			// txtprecio
			// 
			this->txtprecio->Location = System::Drawing::Point(289, 228);
			this->txtprecio->Name = L"txtprecio";
			this->txtprecio->Size = System::Drawing::Size(100, 20);
			this->txtprecio->TabIndex = 7;
			// 
			// btnActualizar
			// 
			this->btnActualizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnActualizar->Location = System::Drawing::Point(652, 101);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(75, 23);
			this->btnActualizar->TabIndex = 10;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = false;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &Inventario::btnActualizar_Click);
			// 
			// cmbMarca
			// 
			this->cmbMarca->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbMarca->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbMarca->FormattingEnabled = true;
			this->cmbMarca->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L"ADATA", L"HONEYWELL", L"APPLE", L"INTEL", L"DELL",
					L"NINTENDO", L"BOSE", L"LG", L"GOPRO", L"LRNOVO", L"AMD", L"VORAGO", L"MICROSOFT", L"SAMSUNG", L"XIAOMI", L"CANON", L"LOGITECH",
					L"ACER", L"NIKON", L"JBL", L"ASUS", L"3NSTAR", L"GOOGLE", L"HUAWEI", L"AMAZON", L"TP-LINK", L"INSIGNIA", L"WACOM", L"HP", L"EPSON",
					L"REDLEMON", L"EST", L"BEATS", L"HYPERX", L"XYZPRINTING"
			});
			this->cmbMarca->Location = System::Drawing::Point(411, 227);
			this->cmbMarca->Name = L"cmbMarca";
			this->cmbMarca->Size = System::Drawing::Size(121, 21);
			this->cmbMarca->TabIndex = 11;
			this->cmbMarca->SelectedIndexChanged += gcnew System::EventHandler(this, &Inventario::cmbMarca_SelectedIndexChanged);
			// 
			// cmbCategoria
			// 
			this->cmbCategoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCategoria->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbCategoria->FormattingEnabled = true;
			this->cmbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"COMPUTADORAS", L"IMPRESIÓN", L"REDES", L"COMPLEMENTOS",
					L"ALMACENAMIENTO", L"ACCESORIOS", L"PROYECTORES"
			});
			this->cmbCategoria->Location = System::Drawing::Point(551, 226);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(121, 21);
			this->cmbCategoria->TabIndex = 12;
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(168, 321);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 20);
			this->txtID->TabIndex = 13;
			// 
			// txtNueva
			// 
			this->txtNueva->Location = System::Drawing::Point(411, 321);
			this->txtNueva->Name = L"txtNueva";
			this->txtNueva->Size = System::Drawing::Size(100, 20);
			this->txtNueva->TabIndex = 14;
			// 
			// lblDatos
			// 
			this->lblDatos->AutoSize = true;
			this->lblDatos->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDatos->Location = System::Drawing::Point(27, 198);
			this->lblDatos->Name = L"lblDatos";
			this->lblDatos->Size = System::Drawing::Size(316, 26);
			this->lblDatos->TabIndex = 15;
			this->lblDatos->Text = L"Ingrese los datos del nuevo producto";
			// 
			// lblModificar
			// 
			this->lblModificar->AutoSize = true;
			this->lblModificar->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F));
			this->lblModificar->Location = System::Drawing::Point(33, 292);
			this->lblModificar->Name = L"lblModificar";
			this->lblModificar->Size = System::Drawing::Size(327, 23);
			this->lblModificar->TabIndex = 17;
			this->lblModificar->Text = L"Ingrese los datos del producto a modificar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(168, 348);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(411, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nuevas existencias";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Producto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(155, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Existencias";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(411, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Marca";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(548, 250);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Categoria";
			// 
			// btnRegresar
			// 
			this->btnRegresar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnRegresar->Location = System::Drawing::Point(13, 5);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(26, 22);
			this->btnRegresar->TabIndex = 25;
			this->btnRegresar->Text = L"<-";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &Inventario::btnRegresar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(286, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Precio";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(295, 450);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 28;
			this->label8->Text = L"ID";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(32, 399);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(315, 26);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Ingrese el ID del producto a eliminar";
			// 
			// txtEliminar
			// 
			this->txtEliminar->Location = System::Drawing::Point(298, 427);
			this->txtEliminar->Name = L"txtEliminar";
			this->txtEliminar->Size = System::Drawing::Size(100, 20);
			this->txtEliminar->TabIndex = 30;
			// 
			// lstProductos
			// 
			this->lstProductos->FormattingEnabled = true;
			this->lstProductos->Location = System::Drawing::Point(30, 43);
			this->lstProductos->Name = L"lstProductos";
			this->lstProductos->Size = System::Drawing::Size(603, 147);
			this->lstProductos->TabIndex = 31;
			// 
			// Inventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(731, 525);
			this->Controls->Add(this->lstProductos);
			this->Controls->Add(this->txtEliminar);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblModificar);
			this->Controls->Add(this->lblDatos);
			this->Controls->Add(this->txtNueva);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->cmbCategoria);
			this->Controls->Add(this->cmbMarca);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->txtprecio);
			this->Controls->Add(this->txtexistencia);
			this->Controls->Add(this->txtdescrip);
			this->Controls->Add(this->btnAñadir);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"Inventario";
			this->Text = L"Inventario";
			this->Load += gcnew System::EventHandler(this, &Inventario::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: ArrayList^ lstPoductos;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAñadir_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void cmbMarca_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e);
   private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e);
 
};
}

