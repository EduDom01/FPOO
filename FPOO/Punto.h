#pragma once
#include"Form1.h"
#include"Conexion.h"
namespace FPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class Punto : public System::Windows::Forms::Form
	{
	public:
		Punto()
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
		~Punto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtID;
	protected:

	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::ComboBox^ cmbMarco;
	private: System::Windows::Forms::ComboBox^ cmbCategoria;
	protected:



	private: System::Windows::Forms::ListBox^ lstProductos;

	private: System::Windows::Forms::Button^ btnEliminar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbCantidad;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnAñadir;


	private: System::Windows::Forms::ListBox^ lstVenta;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnRealizar;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Drawing::Printing::PrintDocument^ pd1;
	private: System::Windows::Forms::PrintPreviewDialog^ tPreview1;
	private: System::Windows::Forms::Button^ btnRegresa;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Punto::typeid));
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->cmbMarco = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->lstProductos = (gcnew System::Windows::Forms::ListBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbCantidad = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnAñadir = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lstVenta = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnRealizar = (gcnew System::Windows::Forms::Button());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pd1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->tPreview1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->btnRegresa = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(73, 59);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(159, 20);
			this->txtID->TabIndex = 0;
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnBuscar->Location = System::Drawing::Point(619, 56);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(62, 23);
			this->btnBuscar->TabIndex = 1;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Punto::btnBuscar_Click);
			// 
			// cmbMarco
			// 
			this->cmbMarco->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbMarco->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbMarco->FormattingEnabled = true;
			this->cmbMarco->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L"ADATA", L"HONEYWELL", L"APPLE", L"INTEL", L"DELL",
					L"NINTENDO", L"BOSE", L"LG", L"GOPRO", L"LRNOVO", L"AMD", L"VORAGO", L"MICROSOFT", L"SAMSUNG", L"XIAOMI", L"CANON", L"LOGITECH",
					L"ACER", L"NIKON", L"JBL", L"ASUS", L"3NSTAR", L"GOOGLE", L"HUAWEI", L"AMAZON", L"TP-LINK", L"INSIGNIA", L"WACOM", L"HP", L"EPSON",
					L"REDLEMON", L"EST", L"BEATS", L"HYPERX", L"XYZPRINTING"
			});
			this->cmbMarco->Location = System::Drawing::Point(266, 58);
			this->cmbMarco->Name = L"cmbMarco";
			this->cmbMarco->Size = System::Drawing::Size(121, 21);
			this->cmbMarco->TabIndex = 2;
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
			this->cmbCategoria->Location = System::Drawing::Point(441, 58);
			this->cmbCategoria->Name = L"cmbCategoria";
			this->cmbCategoria->Size = System::Drawing::Size(121, 21);
			this->cmbCategoria->TabIndex = 3;
			// 
			// lstProductos
			// 
			this->lstProductos->BackColor = System::Drawing::SystemColors::Window;
			this->lstProductos->FormattingEnabled = true;
			this->lstProductos->Location = System::Drawing::Point(39, 124);
			this->lstProductos->Name = L"lstProductos";
			this->lstProductos->Size = System::Drawing::Size(499, 134);
			this->lstProductos->TabIndex = 5;
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEliminar->Location = System::Drawing::Point(556, 311);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(142, 23);
			this->btnEliminar->TabIndex = 6;
			this->btnEliminar->Text = L"Eliminar Producto";
			this->btnEliminar->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(123, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Producto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(202, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Marca";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(273, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Precio";
			// 
			// cmbCantidad
			// 
			this->cmbCantidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCantidad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbCantidad->FormattingEnabled = true;
			this->cmbCantidad->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20"
			});
			this->cmbCantidad->Location = System::Drawing::Point(547, 153);
			this->cmbCantidad->Name = L"cmbCantidad";
			this->cmbCantidad->Size = System::Drawing::Size(121, 21);
			this->cmbCantidad->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(544, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Cantidad";
			// 
			// btnAñadir
			// 
			this->btnAñadir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnAñadir->Location = System::Drawing::Point(572, 180);
			this->btnAñadir->Name = L"btnAñadir";
			this->btnAñadir->Size = System::Drawing::Size(75, 23);
			this->btnAñadir->TabIndex = 15;
			this->btnAñadir->Text = L"Añadir";
			this->btnAñadir->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(288, 295);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Marca";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(438, 295);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Precio total";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(346, 295);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Precio unitario";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(202, 295);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Cantidad";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(123, 295);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Producto";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(48, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"ID";
			// 
			// lstVenta
			// 
			this->lstVenta->FormattingEnabled = true;
			this->lstVenta->Location = System::Drawing::Point(39, 311);
			this->lstVenta->Name = L"lstVenta";
			this->lstVenta->Size = System::Drawing::Size(477, 121);
			this->lstVenta->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(263, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Marca";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(439, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Categoria";
			// 
			// btnRealizar
			// 
			this->btnRealizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnRealizar->Location = System::Drawing::Point(637, 389);
			this->btnRealizar->Name = L"btnRealizar";
			this->btnRealizar->Size = System::Drawing::Size(75, 23);
			this->btnRealizar->TabIndex = 19;
			this->btnRealizar->Text = L"Realizar";
			this->btnRealizar->UseVisualStyleBackColor = false;
			this->btnRealizar->Click += gcnew System::EventHandler(this, &Punto::btnRealizar_Click);
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(603, 351);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(100, 20);
			this->txtTotal->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(553, 354);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Total";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(70, 43);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Ingresa ID";
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnCancelar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCancelar->Location = System::Drawing::Point(547, 389);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 23;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &Punto::btnCancelar_Click);
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(312, 9);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(117, 23);
			this->lblTitulo->TabIndex = 24;
			this->lblTitulo->Text = L"Punto de Venta";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(57, 28);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 16);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Buscar por:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(36, 270);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(156, 16);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Productos seleccionado - Venta";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(38, 93);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 16);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Productos ";
			// 
			// pd1
			// 
			this->pd1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Punto::pd1_PrintPage);
			// 
			// tPreview1
			// 
			this->tPreview1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->tPreview1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->tPreview1->ClientSize = System::Drawing::Size(400, 300);
			this->tPreview1->Document = this->pd1;
			this->tPreview1->Enabled = true;
			this->tPreview1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"tPreview1.Icon")));
			this->tPreview1->Name = L"tPreview1";
			this->tPreview1->Visible = false;
			// 
			// btnRegresa
			// 
			this->btnRegresa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnRegresa->Location = System::Drawing::Point(12, 7);
			this->btnRegresa->Name = L"btnRegresa";
			this->btnRegresa->Size = System::Drawing::Size(25, 23);
			this->btnRegresa->TabIndex = 28;
			this->btnRegresa->Text = L"<-";
			this->btnRegresa->UseVisualStyleBackColor = false;
			this->btnRegresa->Click += gcnew System::EventHandler(this, &Punto::btnRegresa_Click);
			// 
			// Punto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(724, 434);
			this->Controls->Add(this->btnRegresa);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->lstVenta);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->btnRealizar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnAñadir);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmbCantidad);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->lstProductos);
			this->Controls->Add(this->cmbCategoria);
			this->Controls->Add(this->cmbMarco);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtID);
			this->Name = L"Punto";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &Punto::Punto_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Punto_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnRealizar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pd1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);
private: System::Void btnRegresa_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
