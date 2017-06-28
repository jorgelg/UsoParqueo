#pragma once
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
	/// Summary for RegistroUsuario
	/// </summary>
	public ref class RegistroUsuario : public System::Windows::Forms::Form
	{
	public:
			ARREGLO<ESTUDIANTE> * listEstudiante;
			ARREGLO<ADMINISTRATIVO>* listAdmin;
			ARREGLO<DOCENTE> *listDoc;
			ARREGLO<EXTERNO> *listExterno;
			ARREGLO<USOPARQUEO> *A;
			ARREGLO<USOPARQUEO> *B;
	private: System::Windows::Forms::RadioButton^  ralumno;
	private: System::Windows::Forms::RadioButton^  rdocente;
	private: System::Windows::Forms::RadioButton^  radministrativo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	public: 



	public: 


			 ARREGLO<USOPARQUEO> *C;
		RegistroUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			listEstudiante=new ARREGLO<ESTUDIANTE>();
			listAdmin=new ARREGLO<ADMINISTRATIVO>();
			listDoc=new ARREGLO<DOCENTE>();
			listExterno=new ARREGLO<EXTERNO>();
			A=new ARREGLO<USOPARQUEO>();
			B=new ARREGLO<USOPARQUEO>();
			C=new ARREGLO<USOPARQUEO>();
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
		~RegistroUsuario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  bmostrar_alumno;
	private: System::Windows::Forms::Button^  binsertar_alumno;
	private: System::Windows::Forms::DataGridView^  grilla;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::TextBox^  tcodigo;

private: System::Windows::Forms::TextBox^  tci;

private: System::Windows::Forms::TextBox^  tapellido;

private: System::Windows::Forms::TextBox^  tnombre;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistroUsuario::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bmostrar_alumno = (gcnew System::Windows::Forms::Button());
			this->binsertar_alumno = (gcnew System::Windows::Forms::Button());
			this->grilla = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tcodigo = (gcnew System::Windows::Forms::TextBox());
			this->tci = (gcnew System::Windows::Forms::TextBox());
			this->tapellido = (gcnew System::Windows::Forms::TextBox());
			this->tnombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ralumno = (gcnew System::Windows::Forms::RadioButton());
			this->rdocente = (gcnew System::Windows::Forms::RadioButton());
			this->radministrativo = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grilla))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(3, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 204;
			this->label5->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(3, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 13);
			this->label4->TabIndex = 203;
			this->label4->Text = L"C.I.:";
			// 
			// bmostrar_alumno
			// 
			this->bmostrar_alumno->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->bmostrar_alumno->Location = System::Drawing::Point(674, 79);
			this->bmostrar_alumno->Name = L"bmostrar_alumno";
			this->bmostrar_alumno->Size = System::Drawing::Size(102, 23);
			this->bmostrar_alumno->TabIndex = 202;
			this->bmostrar_alumno->Text = L"Modificar";
			this->bmostrar_alumno->UseVisualStyleBackColor = false;
			this->bmostrar_alumno->Click += gcnew System::EventHandler(this, &RegistroUsuario::bmostrar_alumno_Click);
			// 
			// binsertar_alumno
			// 
			this->binsertar_alumno->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->binsertar_alumno->Location = System::Drawing::Point(674, 50);
			this->binsertar_alumno->Name = L"binsertar_alumno";
			this->binsertar_alumno->Size = System::Drawing::Size(102, 23);
			this->binsertar_alumno->TabIndex = 201;
			this->binsertar_alumno->Text = L"Insertar";
			this->binsertar_alumno->UseVisualStyleBackColor = false;
			this->binsertar_alumno->Click += gcnew System::EventHandler(this, &RegistroUsuario::binsertar_alumno_Click);
			// 
			// grilla
			// 
			this->grilla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column2, this->Column3,
					this->Column4, this->Column1
			});
			this->grilla->Location = System::Drawing::Point(204, 50);
			this->grilla->Name = L"grilla";
			this->grilla->Size = System::Drawing::Size(452, 98);
			this->grilla->TabIndex = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"C.I.";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// tcodigo
			// 
			this->tcodigo->Location = System::Drawing::Point(87, 128);
			this->tcodigo->Name = L"tcodigo";
			this->tcodigo->Size = System::Drawing::Size(100, 20);
			this->tcodigo->TabIndex = 199;
			// 
			// tci
			// 
			this->tci->Location = System::Drawing::Point(87, 102);
			this->tci->Name = L"tci";
			this->tci->Size = System::Drawing::Size(100, 20);
			this->tci->TabIndex = 198;
			// 
			// tapellido
			// 
			this->tapellido->Location = System::Drawing::Point(87, 76);
			this->tapellido->Name = L"tapellido";
			this->tapellido->Size = System::Drawing::Size(100, 20);
			this->tapellido->TabIndex = 197;
			// 
			// tnombre
			// 
			this->tnombre->Location = System::Drawing::Point(87, 50);
			this->tnombre->Name = L"tnombre";
			this->tnombre->Size = System::Drawing::Size(100, 20);
			this->tnombre->TabIndex = 196;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(3, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 195;
			this->label3->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(3, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 194;
			this->label1->Text = L"Codigo:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->button2->Location = System::Drawing::Point(674, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 23);
			this->button2->TabIndex = 231;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// ralumno
			// 
			this->ralumno->AutoSize = true;
			this->ralumno->Checked = true;
			this->ralumno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ralumno->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ralumno->Location = System::Drawing::Point(24, 20);
			this->ralumno->Name = L"ralumno";
			this->ralumno->Size = System::Drawing::Size(87, 24);
			this->ralumno->TabIndex = 232;
			this->ralumno->TabStop = true;
			this->ralumno->Text = L"Alumno";
			this->ralumno->UseVisualStyleBackColor = true;
			// 
			// rdocente
			// 
			this->rdocente->AutoSize = true;
			this->rdocente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdocente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rdocente->Location = System::Drawing::Point(137, 20);
			this->rdocente->Name = L"rdocente";
			this->rdocente->Size = System::Drawing::Size(95, 24);
			this->rdocente->TabIndex = 233;
			this->rdocente->Text = L"Docente";
			this->rdocente->UseVisualStyleBackColor = true;
			// 
			// radministrativo
			// 
			this->radministrativo->AutoSize = true;
			this->radministrativo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radministrativo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radministrativo->Location = System::Drawing::Point(256, 20);
			this->radministrativo->Name = L"radministrativo";
			this->radministrativo->Size = System::Drawing::Size(140, 24);
			this->radministrativo->TabIndex = 234;
			this->radministrativo->Text = L"Administrativo";
			this->radministrativo->UseVisualStyleBackColor = true;
			this->radministrativo->CheckedChanged += gcnew System::EventHandler(this, &RegistroUsuario::radioButton3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(261, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 39);
			this->label2->TabIndex = 235;
			this->label2->Text = L"Registrar Usuario";
			this->label2->Click += gcnew System::EventHandler(this, &RegistroUsuario::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(241, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(326, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 236;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel1->Controls->Add(this->radministrativo);
			this->panel1->Controls->Add(this->rdocente);
			this->panel1->Controls->Add(this->ralumno);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->bmostrar_alumno);
			this->panel1->Controls->Add(this->binsertar_alumno);
			this->panel1->Controls->Add(this->grilla);
			this->panel1->Controls->Add(this->tcodigo);
			this->panel1->Controls->Add(this->tci);
			this->panel1->Controls->Add(this->tapellido);
			this->panel1->Controls->Add(this->tnombre);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 191);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 174);
			this->panel1->TabIndex = 237;
			// 
			// RegistroUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(810, 377);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Name = L"RegistroUsuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistroUsuario";
			this->Load += gcnew System::EventHandler(this, &RegistroUsuario::RegistroUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grilla))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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

	private: System::Void binsertar_alumno_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(verificar_palabra(marshal_as<std::string>(tnombre->Text)) || verificar_palabra(marshal_as<std::string>(tapellido->Text)) || verificar_numero(marshal_as<std::string>(tci->Text))|| verificar_numero(marshal_as<std::string>(tcodigo->Text)) || Existe(marshal_as<std::string>(tcodigo->Text))){
					tnombre->Text="";
					tapellido->Text = "";
					tci->Text="";
					tcodigo->Text = "";
				 }
				 else
				 {
					 if(ralumno -> Checked)
					 {
						 ESTUDIANTE x;
						 x.ESTUDIANTE::Registro_estudiante(marshal_as<std::string>(tcodigo->Text));
						 x.ESTUDIANTE::PERSONA::Nombre_persona(marshal_as<std::string>(tnombre->Text));
						 x.ESTUDIANTE::PERSONA::Apellido_persona(marshal_as<std::string>(tapellido->Text));
						 x.ESTUDIANTE::PERSONA::Ci_persona(marshal_as<std::string>(tci->Text));
						 listEstudiante->V(x);
						 grilla->ColumnCount = 4;
						 grilla->RowCount = listEstudiante->N();

						 for(int i = 0; i < listEstudiante->N(); i++)
						 {
							 grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Nombre_persona());
							 grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Apellido_persona());
							 grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(listEstudiante->Vec(i).ESTUDIANTE::PERSONA::Ci_persona());
							 grilla->Rows[i]->Cells[3]->Value = marshal_as<System::String^>(listEstudiante->Vec(i).ESTUDIANTE::Registro_estudiante());
						 }
					 }
					 if(rdocente -> Checked)
					 {
						 DOCENTE x;
						 x.DOCENTE::Codigo_docente(marshal_as<std::string>(tcodigo->Text));
						 x.DOCENTE::PERSONA::Nombre_persona(marshal_as<std::string>(tnombre->Text));
						 x.DOCENTE::PERSONA::Apellido_persona(marshal_as<std::string>(tapellido->Text));
						 x.DOCENTE::PERSONA::Ci_persona(marshal_as<std::string>(tci->Text));
						 listDoc->V(x);
						 grilla->ColumnCount = 4;
						 grilla->RowCount = listDoc->N();

						 for(int i = 0; i < listDoc->N(); i++)
						 {
							 grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(listDoc->Vec(i).DOCENTE::PERSONA::Nombre_persona());
							 grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(listDoc->Vec(i).DOCENTE::PERSONA::Apellido_persona());
							 grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(listDoc->Vec(i).DOCENTE::PERSONA::Ci_persona());
							 grilla->Rows[i]->Cells[3]->Value = marshal_as<System::String^>(listDoc->Vec(i).DOCENTE::Codigo_docente());
						 }
					 }
					 if(radministrativo -> Checked)
					 {
						 ADMINISTRATIVO x;
						 x.ADMINISTRATIVO::Codigo_administrativo(marshal_as<std::string>(tcodigo->Text));
						 x.ADMINISTRATIVO::PERSONA::Nombre_persona(marshal_as<std::string>(tnombre->Text));
						 x.ADMINISTRATIVO::PERSONA::Apellido_persona(marshal_as<std::string>(tapellido->Text));
						 x.ADMINISTRATIVO::PERSONA::Ci_persona(marshal_as<std::string>(tci->Text));
						 listAdmin->V(x);
						 grilla->ColumnCount = 4;
						 grilla->RowCount = listAdmin->N();

						 for(int i = 0; i < listAdmin->N(); i++)
						 {
							 grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(listAdmin->Vec(i).ADMINISTRATIVO::PERSONA::Nombre_persona());
							 grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(listAdmin->Vec(i).ADMINISTRATIVO::PERSONA::Apellido_persona());
							 grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(listAdmin->Vec(i).ADMINISTRATIVO::PERSONA::Ci_persona());
							 grilla->Rows[i]->Cells[3]->Value = marshal_as<System::String^>(listAdmin->Vec(i).ADMINISTRATIVO::Codigo_administrativo());
						 }
					 }
				 }
			 }
private: System::Void bmostrar_alumno_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(verificar_palabra(marshal_as<std::string>(tnombre->Text)) || verificar_palabra(marshal_as<std::string>(tapellido->Text)) || verificar_numero(marshal_as<std::string>(tci->Text))|| verificar_numero(marshal_as<std::string>(tcodigo->Text)) || !Existe(marshal_as<std::string>(tcodigo->Text))){
					tnombre->Text="";
					tapellido->Text = "";
					tci->Text="";
					tcodigo->Text = "";
				 }
			 else
			 {
				 if(ralumno -> Checked)
				 {
					 ESTUDIANTE x;
					 x.ESTUDIANTE::Registro_estudiante(marshal_as<std::string>(tcodigo->Text));
					 x.ESTUDIANTE::PERSONA::Nombre_persona(marshal_as<std::string>(tnombre->Text));
					 x.ESTUDIANTE::PERSONA::Apellido_persona(marshal_as<std::string>(tapellido->Text));
					 x.ESTUDIANTE::PERSONA::Ci_persona(marshal_as<std::string>(tci->Text));
					for(int i = 0 ; i < listEstudiante->N(); i++)
					{
						if(listEstudiante->Vec(i).Registro_estudiante() == x.Registro_estudiante())
						{	
							listEstudiante->Modificar(i, x);
						}
					}
				 }
				 if(rdocente -> Checked)
				 {
					 DOCENTE x;
					 x.DOCENTE::Codigo_docente(marshal_as<std::string>(tcodigo->Text));
					 x.DOCENTE::PERSONA::Nombre_persona(marshal_as<std::string>(tnombre->Text));
					 x.DOCENTE::PERSONA::Apellido_persona(marshal_as<std::string>(tapellido->Text));
					 x.DOCENTE::PERSONA::Ci_persona(marshal_as<std::string>(tci->Text));
					 for(int i = 0 ; i < listDoc->N(); i++)
			  		 {
						 if(listDoc->Vec(i).Codigo_docente() == x.Codigo_docente())
						 {	
							 listDoc->Modificar(i, x);
						 }
					 }
				 }
				 if(radministrativo -> Checked)
				{
					ADMINISTRATIVO x;
					x.ADMINISTRATIVO::Codigo_administrativo(marshal_as<std::string>(tcodigo->Text));
					x.ADMINISTRATIVO::PERSONA::Nombre_persona(marshal_as<std::string>(tnombre->Text));
					x.ADMINISTRATIVO::PERSONA::Apellido_persona(marshal_as<std::string>(tapellido->Text));
					x.ADMINISTRATIVO::PERSONA::Ci_persona(marshal_as<std::string>(tci->Text));
					 for(int i = 0 ; i < listAdmin->N(); i++)
			  		 {
						 if(listAdmin->Vec(i).Codigo_administrativo() == x.Codigo_administrativo())
						 {	
							 listAdmin->Modificar(i, x);
						 }
					 }
				 }
			 }

		 }
private: System::Void RegistroUsuario_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tnombre_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			/* tnombre->Text = tnombre->Text->Remove(0,tnombre->Text->Count()-1);*/
			 string original=marshal_as<std::string>(tnombre->Text);
			 original=original.substr(0,original.size());
			 tnombre->Text=marshal_as<System::String^>(original);
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

