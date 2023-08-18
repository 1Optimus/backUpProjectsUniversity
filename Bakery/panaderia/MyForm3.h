#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
namespace panaderia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form ^ob;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm3(Form ^ob1)
		{
			ob = ob1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^  btnguardar;
	private: System::Windows::Forms::Button^  btnimg;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  txtpreu;
	private: System::Windows::Forms::TextBox^  txtnom;
	private: System::Windows::Forms::TextBox^  txtcant;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  txtcod;
	private: System::Windows::Forms::Label^  codigo;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbtnuevo;
	private: System::Windows::Forms::RadioButton^  rbtexis;
	private: System::Windows::Forms::RadioButton^  exe;
	private: System::Windows::Forms::Button^  btnoperaciones;
	private: System::Windows::Forms::Button^  btnmenu;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  cmbcod;
	private: System::Windows::Forms::ComboBox^  cmbnombre;





	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnguardar = (gcnew System::Windows::Forms::Button());
			this->btnimg = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtpreu = (gcnew System::Windows::Forms::TextBox());
			this->txtnom = (gcnew System::Windows::Forms::TextBox());
			this->txtcant = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtcod = (gcnew System::Windows::Forms::TextBox());
			this->codigo = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->exe = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnuevo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtexis = (gcnew System::Windows::Forms::RadioButton());
			this->btnoperaciones = (gcnew System::Windows::Forms::Button());
			this->btnmenu = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbcod = (gcnew System::Windows::Forms::ComboBox());
			this->cmbnombre = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnguardar
			// 
			this->btnguardar->Location = System::Drawing::Point(30, 514);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(308, 82);
			this->btnguardar->TabIndex = 27;
			this->btnguardar->Text = L"GUARDAR DATOS";
			this->btnguardar->UseVisualStyleBackColor = true;
			this->btnguardar->Visible = false;
			this->btnguardar->Click += gcnew System::EventHandler(this, &MyForm3::btnguardar_Click);
			// 
			// btnimg
			// 
			this->btnimg->Location = System::Drawing::Point(598, 558);
			this->btnimg->Name = L"btnimg";
			this->btnimg->Size = System::Drawing::Size(210, 34);
			this->btnimg->TabIndex = 26;
			this->btnimg->Text = L"EXAMINAR";
			this->btnimg->UseVisualStyleBackColor = true;
			this->btnimg->Visible = false;
			this->btnimg->Click += gcnew System::EventHandler(this, &MyForm3::btnimg_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(514, 166);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(358, 355);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// txtpreu
			// 
			this->txtpreu->Location = System::Drawing::Point(234, 342);
			this->txtpreu->Name = L"txtpreu";
			this->txtpreu->Size = System::Drawing::Size(200, 26);
			this->txtpreu->TabIndex = 24;
			this->txtpreu->Visible = false;
			// 
			// txtnom
			// 
			this->txtnom->Location = System::Drawing::Point(256, 166);
			this->txtnom->Name = L"txtnom";
			this->txtnom->Size = System::Drawing::Size(236, 26);
			this->txtnom->TabIndex = 23;
			this->txtnom->Visible = false;
			// 
			// txtcant
			// 
			this->txtcant->Location = System::Drawing::Point(266, 231);
			this->txtcant->Name = L"txtcant";
			this->txtcant->Size = System::Drawing::Size(144, 26);
			this->txtcant->TabIndex = 22;
			this->txtcant->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(654, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"IMAGEN";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"FECHA DE INGRESO";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 342);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"PRECIO UNITARIO";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"NOMBRE DEL PRODUCTO";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"CANTIDAD A INGRESAR:";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(262, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 20);
			this->label1->TabIndex = 16;
			this->label1->Text = L"INGRESO DE PRODUCTO NUEVO";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(676, 535);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(0, 20);
			this->label->TabIndex = 29;
			this->label->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// txtcod
			// 
			this->txtcod->Location = System::Drawing::Point(234, 405);
			this->txtcod->Name = L"txtcod";
			this->txtcod->Size = System::Drawing::Size(200, 26);
			this->txtcod->TabIndex = 30;
			this->txtcod->Visible = false;
			// 
			// codigo
			// 
			this->codigo->AutoSize = true;
			this->codigo->Location = System::Drawing::Point(46, 408);
			this->codigo->Name = L"codigo";
			this->codigo->Size = System::Drawing::Size(74, 20);
			this->codigo->TabIndex = 31;
			this->codigo->Text = L"CODIGO";
			this->codigo->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->exe);
			this->groupBox1->Controls->Add(this->rbtnuevo);
			this->groupBox1->Controls->Add(this->rbtexis);
			this->groupBox1->Location = System::Drawing::Point(198, 51);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(458, 72);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccione";
			// 
			// exe
			// 
			this->exe->AutoSize = true;
			this->exe->Location = System::Drawing::Point(214, 8);
			this->exe->Name = L"exe";
			this->exe->Size = System::Drawing::Size(21, 20);
			this->exe->TabIndex = 33;
			this->exe->TabStop = true;
			this->exe->UseVisualStyleBackColor = true;
			this->exe->Visible = false;
			this->exe->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::ex_CheckedChanged);
			// 
			// rbtnuevo
			// 
			this->rbtnuevo->AutoSize = true;
			this->rbtnuevo->Location = System::Drawing::Point(36, 34);
			this->rbtnuevo->Name = L"rbtnuevo";
			this->rbtnuevo->Size = System::Drawing::Size(185, 24);
			this->rbtnuevo->TabIndex = 33;
			this->rbtnuevo->TabStop = true;
			this->rbtnuevo->Text = L"PRODUCTO NUEVO";
			this->rbtnuevo->UseVisualStyleBackColor = true;
			this->rbtnuevo->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::rbtnuevo_CheckedChanged);
			// 
			// rbtexis
			// 
			this->rbtexis->AutoSize = true;
			this->rbtexis->Location = System::Drawing::Point(234, 34);
			this->rbtexis->Name = L"rbtexis";
			this->rbtexis->Size = System::Drawing::Size(217, 24);
			this->rbtexis->TabIndex = 34;
			this->rbtexis->TabStop = true;
			this->rbtexis->Text = L"PRODUCTO EXISTENTE";
			this->rbtexis->UseVisualStyleBackColor = true;
			this->rbtexis->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::rbtexis_CheckedChanged);
			// 
			// btnoperaciones
			// 
			this->btnoperaciones->Location = System::Drawing::Point(360, 580);
			this->btnoperaciones->Name = L"btnoperaciones";
			this->btnoperaciones->Size = System::Drawing::Size(186, 43);
			this->btnoperaciones->TabIndex = 33;
			this->btnoperaciones->Text = L"Menu de operaciones";
			this->btnoperaciones->UseVisualStyleBackColor = true;
			this->btnoperaciones->Click += gcnew System::EventHandler(this, &MyForm3::btnoperaciones_Click);
			// 
			// btnmenu
			// 
			this->btnmenu->Location = System::Drawing::Point(360, 532);
			this->btnmenu->Name = L"btnmenu";
			this->btnmenu->Size = System::Drawing::Size(186, 43);
			this->btnmenu->TabIndex = 0;
			this->btnmenu->Text = L"Menu principal";
			this->btnmenu->UseVisualStyleBackColor = true;
			this->btnmenu->Click += gcnew System::EventHandler(this, &MyForm3::btnmenu_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(234, 285);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 28;
			this->dateTimePicker1->Value = System::DateTime(2018, 2, 15, 0, 0, 0, 0);
			this->dateTimePicker1->Visible = false;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm3::dateTimePicker1_ValueChanged);
			// 
			// cmbcod
			// 
			this->cmbcod->FormattingEnabled = true;
			this->cmbcod->Location = System::Drawing::Point(189, 405);
			this->cmbcod->Name = L"cmbcod";
			this->cmbcod->Size = System::Drawing::Size(121, 28);
			this->cmbcod->TabIndex = 34;
			this->cmbcod->Visible = false;
			this->cmbcod->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::cmbcod_SelectedIndexChanged);
			// 
			// cmbnombre
			// 
			this->cmbnombre->FormattingEnabled = true;
			this->cmbnombre->Location = System::Drawing::Point(198, 166);
			this->cmbnombre->Name = L"cmbnombre";
			this->cmbnombre->Size = System::Drawing::Size(121, 28);
			this->cmbnombre->TabIndex = 35;
			this->cmbnombre->Visible = false;
			this->cmbnombre->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::cmbnombre_SelectedIndexChanged);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 635);
			this->Controls->Add(this->cmbnombre);
			this->Controls->Add(this->cmbcod);
			this->Controls->Add(this->btnmenu);
			this->Controls->Add(this->btnoperaciones);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->codigo);
			this->Controls->Add(this->txtcod);
			this->Controls->Add(this->label);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnguardar);
			this->Controls->Add(this->btnimg);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtpreu);
			this->Controls->Add(this->txtnom);
			this->Controls->Add(this->txtcant);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"INVENTARIO";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
	exe->Checked = true;
	char str[1000], de[20];
	FILE *fe;
	
	if ((fe = fopen("pasteleria.txt", "r"))==NULL){
		MessageBox::Show("No se pudo abrir el archivo");
	}
	else{
		char  *dato1, *dato2, *dato4, *dato5, *dato3;
		rewind(fe);
		do{
			fgets(str, 1000, fe);
			dato1 = strtok(str, ";");
			dato2 = strtok(NULL, ";");
			dato3 = strtok(NULL, ";");
			dato4 = strtok(NULL, ";");
			dato5 = strtok(NULL, ";");

			String^srtNew1 = gcnew String(dato1);
			String^srtNew2 = gcnew String(dato2);
			String^srtNew3 = gcnew String(dato3);
			String^srtNew4 = gcnew String(dato4);
			String^srtNew5 = gcnew String(dato5);
			String^fecha = gcnew String(dateTimePicker1->Text);

			cmbcod->Items->Add(srtNew1);
			cmbnombre->Items->Add(srtNew2);

		} while (feof(fe) == 0);
	}
	
	}
private: System::Void btnimg_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = "C:/Users/Miguel Angel Chamizo/Documents/Visual Studio 2013/Projects/proyecto/imagenes";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		pictureBox1->Tag = openFileDialog1->FileName;
		String^ nombrei = Path::GetFileName(pictureBox1->Tag->ToString());
		this->label->Text = nombrei;
		this->pictureBox1->Visible = true;
	}

}
	private: System::Void btnguardar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (rbtnuevo->Checked == true)
		{
			StreamWriter^ rd = gcnew StreamWriter("pasteleria.txt", "a+");
			int error = 1;
			if (txtcant->Text == "")
			{
				MessageBox::Show("Debes escribir CANTIDAD...", "FALTA DE DATOS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				error = 0;
			}
			if (txtnom->Text == "")
			{
				MessageBox::Show("Debes escribir NOMBRE DEL PRODUCTO...", "FALTA DE DATOS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				error = 0;
			}
			if (txtpreu->Text == "")
			{
				MessageBox::Show("Debes escribir PRECIO UNITARIO...", "FALTA DE DATOS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				error = 0;
			}
			if (txtcod->Text == "")
			{
				MessageBox::Show("Debes escribir CODIGO...", "FALTA DE DATOS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				error = 0;
			}
			if (error != 0){
				rd->Write("\r\n");
				rd->Write(txtcod->Text); rd->Write(";");
				rd->Write(txtnom->Text); rd->Write(";");
				rd->Write(txtpreu->Text); rd->Write(";");
				rd->Write(txtcant->Text); rd->Write(";");
				rd->Write(dateTimePicker1->Text); rd->Write(";");
				rd->Write(label->Text); rd->Write(";");
				MessageBox::Show("HAZ INGRESADO LOS DATOS CORRECTAMENTE....", "PASTELES", MessageBoxButtons::OK, MessageBoxIcon::Information);
				rd->Close();
				txtcant->Clear();
				txtnom->Clear();
				txtpreu->Clear();
				txtcod->Clear();
				label->Text = "";
				this->pictureBox1->Visible = false();
			}
		}
		if (rbtexis->Checked == true)
		{
			StreamReader ^ds = gcnew StreamReader("pasteleria.txt","r");
			FILE *fe;
			fe = fopen("pasteleria.txt", "r");
			int error = 1;
			char rt[1000], *d1, *d2, *d3, *d4, *d5, *d6;
			if (txtcant->Text == "")
			{
				MessageBox::Show("Debes escribir CANTIDAD...", "FALTA DE DATOS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				error = 0;
			}
			if (error != 0){
				String ^cod, ^nom, ^im, ^preu, ^fec, ^cant;
				rewind(fe);
				StreamWriter^ rd = gcnew StreamWriter("temp.txt", "a+");
				do
				{
					fgets(rt, 1000, fe); d1 = strtok(rt, ";"); d2 = strtok(NULL, ";"); d3 = strtok(NULL, ";"); d4 = strtok(NULL, ";");
					d5 = strtok(NULL, ";"); d6 = strtok(NULL, ";");
					String ^ srtNew1 = gcnew String(d1);
					String ^ srtNew2 = gcnew String(d2);
					String ^ srtNew3 = gcnew String(d3);
					String ^ srtNew4 = gcnew String(d4);
					String ^ srtNew5 = gcnew String(d5);
					String ^ srtNew6 = gcnew String(d6);
					if (srtNew1 == cmbcod->Text)
					{
						cod = gcnew String(d1); nom = gcnew String(d2); preu = gcnew String(d3); cant = gcnew String(d4);
						fec = gcnew String(d5); im = gcnew String(d6);
						int newcanti = Convert::ToInt32(cant) + Convert::ToInt32(txtcant->Text);
						String ^srtNew7 = gcnew String(Convert::ToString( newcanti));
						rd->Write(srtNew1); rd->Write(";");
						rd->Write(srtNew2); rd->Write(";");
						rd->Write(srtNew3); rd->Write(";");
						rd->Write(srtNew7); rd->Write(";");
						rd->Write(srtNew5); rd->Write(";");
						rd->Write(srtNew6); rd->Write(";");				rd->Write("\r\n");
						MessageBox::Show("se ingresaron los datos...", "AGREGR", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else
					{
						rd->Write(srtNew1); rd->Write(";");
						rd->Write(srtNew2); rd->Write(";");
						rd->Write(srtNew3); rd->Write(";");
						rd->Write(srtNew4); rd->Write(";");
						rd->Write(srtNew5); rd->Write(";");
						rd->Write(srtNew6); rd->Write(";");				rd->Write("\r\n");
					}

				} while (feof(fe) == 0);
				rd->Close();
				fclose(fe);
				int _cdedfclose(FILE *fe);
				txtcant->Clear();
				txtnom->Clear();
				txtpreu->Clear();
				txtcod->Clear();
				label->Text = "";
				this->pictureBox1->Visible = false();
					}
			//String^ path = "C:/Users/Miguel Angel Chamizo/Desktop/panaderia/panaderia/pasteleria.txt";
			//File::Delete(path);
			//rename("C:/Users/Miguel Angel Chamizo/Desktop/panaderia/panaderia/temp.txt", "pass.txt");
		}

		
}
private: System::Void rbtexis_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	cmbcod->Items->Clear();
	cmbnombre->Items->Clear();
		char str[1000], de[20];
	FILE *fe;

	if ((fe = fopen("pasteleria.txt", "r")) == NULL){
		MessageBox::Show("No se pudo abrir el archivo");
	}
	else{
		char  *dato1, *dato2, *dato4, *dato5, *dato3;
		rewind(fe);
		do{
			fgets(str, 1000, fe);
			dato1 = strtok(str, ";");
			dato2 = strtok(NULL, ";");
			dato3 = strtok(NULL, ";");
			dato4 = strtok(NULL, ";");
			dato5 = strtok(NULL, ";");

			String^srtNew1 = gcnew String(dato1);
			String^srtNew2 = gcnew String(dato2);
			String^srtNew3 = gcnew String(dato3);
			String^srtNew4 = gcnew String(dato4);
			String^srtNew5 = gcnew String(dato5);
			String^fecha = gcnew String(dateTimePicker1->Text);

			cmbcod->Items->Add(srtNew1);
			cmbnombre->Items->Add(srtNew2);

		} while (feof(fe) == 0);
	}

	this->txtcant->Visible = true;
	this->txtcod->Visible = false;
	this->txtnom->Visible = false;
	this->txtpreu->Visible = false;
	this->dateTimePicker1->Visible = true;
	this->pictureBox1->Visible = true;
	this->label1->Visible = true;
	this->label2->Visible = true;
	this->label3->Visible = false;
	this->label4->Visible = false;
	this->label5->Visible = true;
	this->codigo->Visible = false;
	this->label6->Visible = false;
	this->btnimg->Visible = false;
	this->btnguardar->Visible = true;
	this->cmbcod->Visible = false;
	this->cmbnombre->Visible = true;
}
private: System::Void rbtnuevo_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->txtcant->Visible = true;
	this->txtcod->Visible = true;
	this->txtnom->Visible = true;
	this->txtpreu->Visible = true;
	this->dateTimePicker1->Visible = true;
	this->pictureBox1->Visible = true;
	this->label1->Visible = true;
	this->label2->Visible = true;
	this->cmbcod->Visible = false;
	this->cmbnombre->Visible = false;
	this->label3->Visible = true;
	this->label4->Visible = true;
	this->label5->Visible = true;
	this->codigo->Visible = true;
	this->label6->Visible = true;
	this->btnimg->Visible = true;
	this->btnguardar->Visible = true;
}
private: System::Void ex_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->txtcant->Visible = false;
	this->txtcod->Visible = false;
	this->txtnom->Visible = false;
	this->txtpreu->Visible = false;
	this->dateTimePicker1->Visible = false;
	this->pictureBox1->Visible = false;
	this->label2->Visible = false;
	this->label3->Visible = false;
	this->label4->Visible = false;
	this->label5->Visible = false;
	this->codigo->Visible = false;
	this->label6->Visible = false;
	this->btnimg->Visible = false;
	this->btnguardar->Visible = false;
}
private: System::Void btnoperaciones_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	ob->Show();
}
private: System::Void btnmenu_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void cmbcod_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void cmbnombre_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	cmbcod->SelectedIndex = cmbnombre->SelectedIndex;
		char str[1000];
		int  i, en;
		int com = 0;
		String^a = gcnew String(cmbcod->Text);
			FILE *fe;
			fe = fopen("pasteleria.txt", "r");
			char  *dato1, *dato2, *dato4, *dato5, *dato6, *dato3;
			rewind(fe);
			do{
				fgets(str, 1000, fe);
				dato1 = strtok(str, ";");
				dato2 = strtok(NULL, ";");
				dato3 = strtok(NULL, ";");
				dato4 = strtok(NULL, ";");
				dato5 = strtok(NULL, ";");
				dato6 = strtok(NULL, ";");
				String^srtNew1 = gcnew String(dato1);
				String^srtNew2 = gcnew String(dato2);
				String^srtNew3 = gcnew String(dato3);
				String^srtNew4 = gcnew String(dato4);
				String^srtNew5 = gcnew String(dato5);
				String^srtNew6 = gcnew String(dato6);
				if (cmbcod->Text==srtNew1)
				{
					pictureBox1->Image = Image::FromFile("C:/Users/Miguel Angel Chamizo/Desktop/panaderia/Imagenes/" + srtNew6);
				}
				this->pictureBox1->Visible = true;
			} while (feof(fe) == 0);
}
};
}
