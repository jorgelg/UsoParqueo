#pragma once
#include "MostrarInfo.h"
#include "APLICACION.h"
#include "INTERFAZ.h"
namespace AlgoritmosIIv1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EntradaSalida
	/// </summary>

		
			
	public ref class EntradaSalida : public System::Windows::Forms::Form
	{
	public:

			ARREGLO<ESTUDIANTE> * listEstudiante;
			ARREGLO<ADMINISTRATIVO>* listAdmin;
			ARREGLO<DOCENTE> *listDoc;
			ARREGLO<EXTERNO> *listExterno;
			ARREGLO<USOPARQUEO> *A;
			ARREGLO<USOPARQUEO> *B;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public: 
		ARREGLO<USOPARQUEO> *C;

		EntradaSalida(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			listEstudiante=new ARREGLO<ESTUDIANTE>();
			listAdmin=new ARREGLO<ADMINISTRATIVO>();
			listDoc=new ARREGLO<DOCENTE>();
			listExterno=new ARREGLO<EXTERNO>();
			A=new ARREGLO<USOPARQUEO>(100);
			B=new ARREGLO<USOPARQUEO>(80);
			C=new ARREGLO<USOPARQUEO>(120);
		}

		void cargar(ARREGLO<ESTUDIANTE>* a,	ARREGLO<ADMINISTRATIVO> *b,	ARREGLO<DOCENTE> *c,ARREGLO<EXTERNO> *d,ARREGLO<USOPARQUEO> *e,ARREGLO<USOPARQUEO> *f,ARREGLO<USOPARQUEO> *g){
		
			listEstudiante=a;
			listAdmin=b;
			listDoc=c;
			listExterno=d;
			A=e;
			B=f;
			C=g;
		}

		ARREGLO<ESTUDIANTE> *lista_estudiante()
		{	return listEstudiante;
		}
		ARREGLO<DOCENTE> *lista_docente()
		{	return listDoc;
		}
		ARREGLO<ADMINISTRATIVO> *lista_administrativo()
		{	return listAdmin;
		}
		ARREGLO<EXTERNO> *lista_externo()
		{	return listExterno;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EntradaSalida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected: 
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  bsalida_Ext;

	private: System::Windows::Forms::Button^  bentrada_Ext;
	private: System::Windows::Forms::Button^  tsalida_UPSA;
	private: System::Windows::Forms::Button^  tentrada_UPSA;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tcod_UPSA;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tespacios_UPSA;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tnombre_Ext;
	private: System::Windows::Forms::TextBox^  tci_Ext;
	private: System::Windows::Forms::TextBox^  tapellido_Ext;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  tsalida_CARP;
	private: System::Windows::Forms::Button^  tentrada_CARP;
	private: System::Windows::Forms::TextBox^  tcod_CARP;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tespacios_CARP;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  tsalida_COL;
	private: System::Windows::Forms::Button^  tentrada_COL;
	private: System::Windows::Forms::TextBox^  tcod_COL;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tespacios_COL;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EntradaSalida::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->bsalida_Ext = (gcnew System::Windows::Forms::Button());
			this->bentrada_Ext = (gcnew System::Windows::Forms::Button());
			this->tsalida_UPSA = (gcnew System::Windows::Forms::Button());
			this->tentrada_UPSA = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tcod_UPSA = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tespacios_UPSA = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tnombre_Ext = (gcnew System::Windows::Forms::TextBox());
			this->tci_Ext = (gcnew System::Windows::Forms::TextBox());
			this->tapellido_Ext = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tsalida_CARP = (gcnew System::Windows::Forms::Button());
			this->tentrada_CARP = (gcnew System::Windows::Forms::Button());
			this->tcod_CARP = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tespacios_CARP = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tsalida_COL = (gcnew System::Windows::Forms::Button());
			this->tentrada_COL = (gcnew System::Windows::Forms::Button());
			this->tcod_COL = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tespacios_COL = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->bsalida_Ext);
			this->panel3->Controls->Add(this->bentrada_Ext);
			this->panel3->Controls->Add(this->tsalida_UPSA);
			this->panel3->Controls->Add(this->tentrada_UPSA);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->tcod_UPSA);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->tespacios_UPSA);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->tnombre_Ext);
			this->panel3->Controls->Add(this->tci_Ext);
			this->panel3->Controls->Add(this->tapellido_Ext);
			this->panel3->Location = System::Drawing::Point(24, 161);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(237, 483);
			this->panel3->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(21, 102);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Codigo:";
			// 
			// bsalida_Ext
			// 
			this->bsalida_Ext->BackColor = System::Drawing::Color::FloralWhite;
			this->bsalida_Ext->Location = System::Drawing::Point(91, 428);
			this->bsalida_Ext->Name = L"bsalida_Ext";
			this->bsalida_Ext->Size = System::Drawing::Size(105, 20);
			this->bsalida_Ext->TabIndex = 21;
			this->bsalida_Ext->Text = L"Salida";
			this->bsalida_Ext->UseVisualStyleBackColor = false;
			this->bsalida_Ext->Click += gcnew System::EventHandler(this, &EntradaSalida::bsalida_Ext_Click);
			// 
			// bentrada_Ext
			// 
			this->bentrada_Ext->BackColor = System::Drawing::Color::FloralWhite;
			this->bentrada_Ext->Location = System::Drawing::Point(91, 402);
			this->bentrada_Ext->Name = L"bentrada_Ext";
			this->bentrada_Ext->Size = System::Drawing::Size(105, 20);
			this->bentrada_Ext->TabIndex = 21;
			this->bentrada_Ext->Text = L"Entrada";
			this->bentrada_Ext->UseVisualStyleBackColor = false;
			this->bentrada_Ext->Click += gcnew System::EventHandler(this, &EntradaSalida::bentrada_Ext_Click);
			// 
			// tsalida_UPSA
			// 
			this->tsalida_UPSA->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tsalida_UPSA->Location = System::Drawing::Point(91, 185);
			this->tsalida_UPSA->Name = L"tsalida_UPSA";
			this->tsalida_UPSA->Size = System::Drawing::Size(105, 20);
			this->tsalida_UPSA->TabIndex = 17;
			this->tsalida_UPSA->Text = L"Salida";
			this->tsalida_UPSA->UseVisualStyleBackColor = false;
			this->tsalida_UPSA->Click += gcnew System::EventHandler(this, &EntradaSalida::tsalida_UPSA_Click);
			// 
			// tentrada_UPSA
			// 
			this->tentrada_UPSA->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tentrada_UPSA->Location = System::Drawing::Point(91, 146);
			this->tentrada_UPSA->Name = L"tentrada_UPSA";
			this->tentrada_UPSA->Size = System::Drawing::Size(105, 20);
			this->tentrada_UPSA->TabIndex = 14;
			this->tentrada_UPSA->Text = L"Entrada";
			this->tentrada_UPSA->UseVisualStyleBackColor = false;
			this->tentrada_UPSA->Click += gcnew System::EventHandler(this, &EntradaSalida::tentrada_UPSA_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(2, 339);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Apellido:";
			this->label13->Click += gcnew System::EventHandler(this, &EntradaSalida::label13_Click);
			// 
			// tcod_UPSA
			// 
			this->tcod_UPSA->Location = System::Drawing::Point(91, 99);
			this->tcod_UPSA->Name = L"tcod_UPSA";
			this->tcod_UPSA->Size = System::Drawing::Size(105, 20);
			this->tcod_UPSA->TabIndex = 11;
			this->tcod_UPSA->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tcod_UPSA_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(21, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Parqueo UPSA";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(2, 365);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"C.I.:";
			this->label12->Click += gcnew System::EventHandler(this, &EntradaSalida::label12_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Espacios Disponibles:";
			// 
			// tespacios_UPSA
			// 
			this->tespacios_UPSA->Location = System::Drawing::Point(137, 45);
			this->tespacios_UPSA->Name = L"tespacios_UPSA";
			this->tespacios_UPSA->Size = System::Drawing::Size(59, 20);
			this->tespacios_UPSA->TabIndex = 2;
			this->tespacios_UPSA->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tespacios_UPSA_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(2, 311);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Nombre:";
			this->label11->Click += gcnew System::EventHandler(this, &EntradaSalida::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(21, 272);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(174, 20);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Entrada de Externos";
			this->label10->Click += gcnew System::EventHandler(this, &EntradaSalida::label10_Click);
			// 
			// tnombre_Ext
			// 
			this->tnombre_Ext->Location = System::Drawing::Point(91, 308);
			this->tnombre_Ext->Name = L"tnombre_Ext";
			this->tnombre_Ext->Size = System::Drawing::Size(105, 20);
			this->tnombre_Ext->TabIndex = 21;
			this->tnombre_Ext->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tnombre_Ext_TextChanged);
			// 
			// tci_Ext
			// 
			this->tci_Ext->Location = System::Drawing::Point(91, 362);
			this->tci_Ext->Name = L"tci_Ext";
			this->tci_Ext->Size = System::Drawing::Size(105, 20);
			this->tci_Ext->TabIndex = 19;
			this->tci_Ext->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tci_Ext_TextChanged);
			// 
			// tapellido_Ext
			// 
			this->tapellido_Ext->Location = System::Drawing::Point(91, 336);
			this->tapellido_Ext->Name = L"tapellido_Ext";
			this->tapellido_Ext->Size = System::Drawing::Size(105, 20);
			this->tapellido_Ext->TabIndex = 20;
			this->tapellido_Ext->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tapellido_Ext_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->tsalida_CARP);
			this->panel2->Controls->Add(this->tentrada_CARP);
			this->panel2->Controls->Add(this->tcod_CARP);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->tespacios_CARP);
			this->panel2->Location = System::Drawing::Point(267, 161);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(237, 271);
			this->panel2->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(18, 102);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(43, 13);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Codigo:";
			// 
			// tsalida_CARP
			// 
			this->tsalida_CARP->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tsalida_CARP->Location = System::Drawing::Point(88, 185);
			this->tsalida_CARP->Name = L"tsalida_CARP";
			this->tsalida_CARP->Size = System::Drawing::Size(105, 20);
			this->tsalida_CARP->TabIndex = 18;
			this->tsalida_CARP->Text = L"Salida";
			this->tsalida_CARP->UseVisualStyleBackColor = false;
			this->tsalida_CARP->Click += gcnew System::EventHandler(this, &EntradaSalida::tsalida_CARP_Click);
			// 
			// tentrada_CARP
			// 
			this->tentrada_CARP->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tentrada_CARP->Location = System::Drawing::Point(88, 146);
			this->tentrada_CARP->Name = L"tentrada_CARP";
			this->tentrada_CARP->Size = System::Drawing::Size(105, 20);
			this->tentrada_CARP->TabIndex = 15;
			this->tentrada_CARP->Text = L"Entrada";
			this->tentrada_CARP->UseVisualStyleBackColor = false;
			this->tentrada_CARP->Click += gcnew System::EventHandler(this, &EntradaSalida::tentrada_CARP_Click);
			// 
			// tcod_CARP
			// 
			this->tcod_CARP->Location = System::Drawing::Point(88, 99);
			this->tcod_CARP->Name = L"tcod_CARP";
			this->tcod_CARP->Size = System::Drawing::Size(105, 20);
			this->tcod_CARP->TabIndex = 12;
			this->tcod_CARP->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tcod_CARP_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(18, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Parqueo Carpinteria";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(118, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(18, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Espacios Disponibles:";
			// 
			// tespacios_CARP
			// 
			this->tespacios_CARP->Location = System::Drawing::Point(134, 45);
			this->tespacios_CARP->Name = L"tespacios_CARP";
			this->tespacios_CARP->Size = System::Drawing::Size(59, 20);
			this->tespacios_CARP->TabIndex = 0;
			this->tespacios_CARP->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tespacios_CARP_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->tsalida_COL);
			this->panel1->Controls->Add(this->tentrada_COL);
			this->panel1->Controls->Add(this->tcod_COL);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->tespacios_COL);
			this->panel1->Location = System::Drawing::Point(510, 161);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 271);
			this->panel1->TabIndex = 25;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(18, 102);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Codigo:";
			// 
			// tsalida_COL
			// 
			this->tsalida_COL->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tsalida_COL->Location = System::Drawing::Point(88, 185);
			this->tsalida_COL->Name = L"tsalida_COL";
			this->tsalida_COL->Size = System::Drawing::Size(105, 20);
			this->tsalida_COL->TabIndex = 19;
			this->tsalida_COL->Text = L"Salida";
			this->tsalida_COL->UseVisualStyleBackColor = false;
			this->tsalida_COL->Click += gcnew System::EventHandler(this, &EntradaSalida::tsalida_COL_Click);
			// 
			// tentrada_COL
			// 
			this->tentrada_COL->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->tentrada_COL->Location = System::Drawing::Point(88, 146);
			this->tentrada_COL->Name = L"tentrada_COL";
			this->tentrada_COL->Size = System::Drawing::Size(105, 20);
			this->tentrada_COL->TabIndex = 16;
			this->tentrada_COL->Text = L"Entrada";
			this->tentrada_COL->UseVisualStyleBackColor = false;
			this->tentrada_COL->Click += gcnew System::EventHandler(this, &EntradaSalida::tentrada_COL_Click);
			// 
			// tcod_COL
			// 
			this->tcod_COL->Location = System::Drawing::Point(88, 99);
			this->tcod_COL->Name = L"tcod_COL";
			this->tcod_COL->Size = System::Drawing::Size(105, 20);
			this->tcod_COL->TabIndex = 13;
			this->tcod_COL->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tcod_COL_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(18, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 20);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Parqueo Coliseo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(18, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Espacios Disponibles:";
			// 
			// tespacios_COL
			// 
			this->tespacios_COL->Location = System::Drawing::Point(134, 44);
			this->tespacios_COL->Name = L"tespacios_COL";
			this->tespacios_COL->Size = System::Drawing::Size(59, 20);
			this->tespacios_COL->TabIndex = 3;
			this->tespacios_COL->TextChanged += gcnew System::EventHandler(this, &EntradaSalida::tespacios_COL_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(242, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Control de Parqueos";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(224, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(347, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// EntradaSalida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(785, 741);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"EntradaSalida";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EntradaSalida";
			this->Load += gcnew System::EventHandler(this, &EntradaSalida::EntradaSalida_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: bool verificar_palabra(string s){
			string aux="0123456789";
			for(int i=0;i<s.length();i++){
				if(aux.find(s[i])!=-1){
					return true;
				}
			}
			return false;
		}
		private: bool verificar_numero(string s){
			string aux="abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
			for(int i=0;i<s.length();i++){
				if(aux.find(s[i])!=-1){
					return true;
				}
			}
			return false;
		}
		 private: bool Existe(string s){
			for(int i=0;i<listEstudiante->N();i++){
				if(listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante() == s)
					return true;
			}
			for(int i=0;i<listDoc->N();i++){
				if(listDoc->Vec(i).DOCENTE::Codigo_docente() == s)
					return true;
			}
			for(int i=0;i<listAdmin->N();i++){
				if(listAdmin->Vec(i).ADMINISTRATIVO::Codigo_administrativo() == s)
					return true;
			}
			return false;
		}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void bentrada_Ext_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void bsalida_Ext_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tnombre_Ext_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tci_Ext_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tapellido_Ext_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void tentrada_UPSA_Click(System::Object^  sender, System::EventArgs^  e) 		 
		 {
			 int i,j,k;
			 MostrarInfo form;
			 USOPARQUEO UPaux;
			 UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta(marshal_as<std::string>(tcod_UPSA->Text));
			 for(i=0;i<(listEstudiante->N());i++)
				{
					if((listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
					{
						A->V(UPaux);
						listEstudiante->Vec(i).ESTUDIANTE::Cuenta_estudiante(listEstudiante->Vec(i).ESTUDIANTE::Cuenta_estudiante()); //aqui daba errores por un nombre de metodo que cambiaste
						form.llenarDatos(listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Nombre_persona()+' '+listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Apellido_persona(),listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante(), listEstudiante->Vec(i).ESTUDIANTE::Cuenta_estudiante()); //aqui tambien estaba el mismo error
						//no tienes un metodo para mostrar el saldo actual del estudiante, lo que hace cuenta estudiante es directamente consumir un ticket y recien devolverte el saldo de tickets, quizas te haga falta un "SALDO actual"
						form.ShowDialog();
					}
				}
			 for(j=0;j<(listDoc->N());j++)
				{
					if((listDoc->Vec(j).DOCENTE::Codigo_docente())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
					{
						A->V(UPaux);
					}
				}
			 for(k=0;k<(listAdmin->N());k++)
				{
					if((listAdmin->Vec(k).ADMINISTRATIVO::Codigo_administrativo())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
					{
						A->V(UPaux);
					}
				}
			 tespacios_UPSA->Text = System::Convert::ToString(A->Max()-A->N()); 
			 //tcod_UPSA->Text=marshal_as<System::String^>(listEstudiante->Vec(0).Registro_estudiante());
		 }
private: System::Void tespacios_UPSA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tespacios_CARP_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tespacios_COL_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tcod_UPSA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tcod_CARP_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tcod_COL_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tsalida_UPSA_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int i,j,k;
			 MostrarInfo form;
			 USOPARQUEO UPaux;
			 UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta(marshal_as<std::string>(tcod_UPSA->Text));
			 for(i=0;i<(listEstudiante->N());i++)
				{
					if((listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
					{
						A->Eliminar(UPaux);
						form.llenarDatos(listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Nombre_persona()+' '+listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Apellido_persona(),listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante(),listEstudiante->Vec(i).ESTUDIANTE::Cuenta_estudiante());
						form.ShowDialog();
					}
				}
			 for(j=0;j<(listDoc->N());j++)
				{
					if((listDoc->Vec(j).DOCENTE::Codigo_docente())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
					{
						A->Eliminar(UPaux);
					}
				}
			 for(k=0;k<(listAdmin->N());k++)
				{
					if((listAdmin->Vec(k).ADMINISTRATIVO::Codigo_administrativo())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
					{
						A->Eliminar(UPaux);
					}
				}
			 tespacios_UPSA->Text = System::Convert::ToString(A->Max()-A->N()); 
		 }
private: System::Void tentrada_CARP_Click(System::Object^  sender, System::EventArgs^  e) 
		 {	int i,j,k;
			 USOPARQUEO UPaux;
			 UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta(marshal_as<std::string>(tcod_CARP->Text));
			for(i=0;i<(listEstudiante->N());i++)
			{
				if((listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					B->V(UPaux);
				}
			}
			for(j=0;j<(listDoc->N());j++)
			{
				if((listDoc->Vec(j).DOCENTE::Codigo_docente())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					B->V(UPaux);
				}
			}
			for(k=0;k<(listAdmin->N());k++)
			{
				if((listAdmin->Vec(k).ADMINISTRATIVO::Codigo_administrativo())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					B->V(UPaux);
				}
			}
			tespacios_CARP->Text = System::Convert::ToString(B->Max()-B->N()); 
		 }
private: System::Void tsalida_CARP_Click(System::Object^  sender, System::EventArgs^  e) {
			int i,j,k;
			USOPARQUEO UPaux;
			UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta(marshal_as<std::string>(tcod_CARP->Text));
			for(i=0;i<(listEstudiante->N());i++)
			{
				if((listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					B->Eliminar(UPaux);
				}
			}
			for(j=0;j<(listDoc->N());j++)
			{
				if((listDoc->Vec(j).DOCENTE::Codigo_docente())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					B->Eliminar(UPaux);
				}
			}
			for(k=0;k<(listAdmin->N());k++)
			{
				if((listAdmin->Vec(k).ADMINISTRATIVO::Codigo_administrativo())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					B->Eliminar(UPaux);
				}
			}
			tespacios_CARP->Text = System::Convert::ToString(B->Max()-B->N()); 
		 }
private: System::Void tentrada_COL_Click(System::Object^  sender, System::EventArgs^  e) 
		 {	int i,j,k;
			USOPARQUEO UPaux;
			UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta(marshal_as<std::string>(tcod_COL->Text));
			for(i=0;i<(listEstudiante->N());i++)
			{
				if((listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					C->V(UPaux);
				}
			}
			for(j=0;j<(listDoc->N());j++)
			{
				if((listDoc->Vec(j).DOCENTE::Codigo_docente())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					C->V(UPaux);
				}
			}
			for(k=0;k<(listAdmin->N());k++)
			{
				if((listAdmin->Vec(k).ADMINISTRATIVO::Codigo_administrativo())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					C->V(UPaux);
				}
			}
			tespacios_COL->Text = System::Convert::ToString(C->Max()-C->N());
		 }
private: System::Void tsalida_COL_Click(System::Object^  sender, System::EventArgs^  e) {
			int i,j,k;
			USOPARQUEO UPaux;
			UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta(marshal_as<std::string>(tcod_COL->Text));
			for(i=0;i<(listEstudiante->N());i++)
			{
				if((listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					C->Eliminar(UPaux);
				}
			}
			for(j=0;j<(listDoc->N());j++)
			{
				if((listDoc->Vec(j).DOCENTE::Codigo_docente())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					C->Eliminar(UPaux);
				}
			}
			for(k=0;k<(listAdmin->N());k++)
			{
				if((listAdmin->Vec(k).ADMINISTRATIVO::Codigo_administrativo())==(UPaux.USOPARQUEO::TARJETA::Codigo_tarjeta()))
				{
					C->Eliminar(UPaux);
				}
			}
			tespacios_COL->Text = System::Convert::ToString(C->Max()-C->N());
		 }
private: System::Void EntradaSalida_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
