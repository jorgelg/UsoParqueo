#pragma once
#include "EntradaSalida.h"
#include "RegistroUsuario.h"
#include "ComprarTickets.h"

namespace AlgoritmosIIv1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1

	 
	
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
	ARREGLO<ESTUDIANTE> *listEstudiante;
			 ARREGLO<ADMINISTRATIVO> *listAdmin;
			 ARREGLO<DOCENTE> *listDoc;
			 ARREGLO<EXTERNO> *listExterno;
			 ARREGLO<USOPARQUEO> *A;
			 ARREGLO<USOPARQUEO> *B;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public: 
		ARREGLO<USOPARQUEO> *C;
	
		Form1(void)
		{
			InitializeComponent();
			listEstudiante=new ARREGLO<ESTUDIANTE>();
			listAdmin=new ARREGLO<ADMINISTRATIVO>();
			listDoc=new ARREGLO<DOCENTE>();
			listExterno=new ARREGLO<EXTERNO>();
			 A=new ARREGLO<USOPARQUEO>();
			 B=new ARREGLO<USOPARQUEO>();
			 C=new ARREGLO<USOPARQUEO>();
	
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  b_registrar_es;
	protected: 
	private: System::Windows::Forms::Button^  b_registrar_usuario;
	private: System::Windows::Forms::Button^  b_comprar_tickets;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->b_registrar_es = (gcnew System::Windows::Forms::Button());
			this->b_registrar_usuario = (gcnew System::Windows::Forms::Button());
			this->b_comprar_tickets = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// b_registrar_es
			// 
			this->b_registrar_es->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->b_registrar_es->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b_registrar_es->ForeColor = System::Drawing::Color::LightGoldenrodYellow;
			this->b_registrar_es->Location = System::Drawing::Point(49, 126);
			this->b_registrar_es->Name = L"b_registrar_es";
			this->b_registrar_es->Size = System::Drawing::Size(129, 93);
			this->b_registrar_es->TabIndex = 0;
			this->b_registrar_es->Text = L"REGISTRAR ENTRADA/SALIDA";
			this->b_registrar_es->UseVisualStyleBackColor = false;
			this->b_registrar_es->Click += gcnew System::EventHandler(this, &Form1::b_registrar_es_Click);
			// 
			// b_registrar_usuario
			// 
			this->b_registrar_usuario->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->b_registrar_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b_registrar_usuario->ForeColor = System::Drawing::Color::LightGoldenrodYellow;
			this->b_registrar_usuario->Location = System::Drawing::Point(196, 126);
			this->b_registrar_usuario->Name = L"b_registrar_usuario";
			this->b_registrar_usuario->Size = System::Drawing::Size(129, 93);
			this->b_registrar_usuario->TabIndex = 1;
			this->b_registrar_usuario->Text = L"REGISTRAR USUARIO";
			this->b_registrar_usuario->UseVisualStyleBackColor = false;
			this->b_registrar_usuario->Click += gcnew System::EventHandler(this, &Form1::b_registrar_usuario_Click);
			// 
			// b_comprar_tickets
			// 
			this->b_comprar_tickets->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->b_comprar_tickets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b_comprar_tickets->ForeColor = System::Drawing::Color::LightGoldenrodYellow;
			this->b_comprar_tickets->Location = System::Drawing::Point(343, 126);
			this->b_comprar_tickets->Name = L"b_comprar_tickets";
			this->b_comprar_tickets->Size = System::Drawing::Size(129, 93);
			this->b_comprar_tickets->TabIndex = 2;
			this->b_comprar_tickets->Text = L"COMPRAR TICKETS";
			this->b_comprar_tickets->UseVisualStyleBackColor = false;
			this->b_comprar_tickets->Click += gcnew System::EventHandler(this, &Form1::b_comprar_tickets_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(113, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(303, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(522, 243);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->b_comprar_tickets);
			this->Controls->Add(this->b_registrar_usuario);
			this->Controls->Add(this->b_registrar_es);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void b_registrar_es_Click(System::Object^  sender, System::EventArgs^  e) {
				 EntradaSalida form;
				 form.cargar(listEstudiante, listAdmin, listDoc, listExterno, A,B,C);
				 form.ShowDialog();
			 }
	private: System::Void b_registrar_usuario_Click(System::Object^  sender, System::EventArgs^  e) {
				 RegistroUsuario form;
				 form.cargar(listEstudiante, listAdmin, listDoc, listExterno, A,B,C);
				 form.ShowDialog();
				 listEstudiante=form.lista_estudiante();
				 listDoc=form.lista_docente();
				 listAdmin=form.lista_administrativo();
				 listExterno=form.lista_externo();
			 }
	private: System::Void b_comprar_tickets_Click(System::Object^  sender, System::EventArgs^  e) {
				 ComprarTickets form;
				 form.cargar(listEstudiante);
				 form.ShowDialog();
				 listEstudiante = form.lista_estudiante();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}

