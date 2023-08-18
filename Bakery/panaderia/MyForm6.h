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
	/// Resumen de MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		Form ^ob;
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm6(Form ^ob1)
		{
			ob = ob1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnsali;
	protected:

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  cmbmes;
	private: System::Windows::Forms::ComboBox^  cmbnomes;
	private: System::Windows::Forms::ComboBox^  cmbdel;

	private: System::Windows::Forms::ComboBox^  cmbaño;
	private: System::Windows::Forms::TextBox^  txti;
	private: System::Windows::Forms::ComboBox^  cmbal;




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
			this->btnsali = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cmbmes = (gcnew System::Windows::Forms::ComboBox());
			this->cmbnomes = (gcnew System::Windows::Forms::ComboBox());
			this->cmbdel = (gcnew System::Windows::Forms::ComboBox());
			this->cmbaño = (gcnew System::Windows::Forms::ComboBox());
			this->txti = (gcnew System::Windows::Forms::TextBox());
			this->cmbal = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnsali
			// 
			this->btnsali->Location = System::Drawing::Point(662, 472);
			this->btnsali->Name = L"btnsali";
			this->btnsali->Size = System::Drawing::Size(99, 52);
			this->btnsali->TabIndex = 7;
			this->btnsali->Text = L"Salir";
			this->btnsali->UseVisualStyleBackColor = true;
			this->btnsali->Click += gcnew System::EventHandler(this, &MyForm6::btnsali_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Location = System::Drawing::Point(34, 45);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(978, 324);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Codigo";
			this->columnHeader1->Width = 93;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombre";
			this->columnHeader2->Width = 135;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Precio/Unitario";
			this->columnHeader3->Width = 126;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Cantidad en existencias";
			this->columnHeader4->Width = 193;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Fecha de ingreso";
			this->columnHeader5->Width = 163;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(278, 480);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 8;
			this->dateTimePicker1->Value = System::DateTime(2018, 2, 16, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm6::dateTimePicker1_ValueChanged);
			// 
			// cmbmes
			// 
			this->cmbmes->FormattingEnabled = true;
			this->cmbmes->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Enero", L"Febrero", L"Marzo", L"Abril", L"Mayo",
					L"Junio", L"Julio", L"Agosto", L"Septiembre", L"Octubre", L"Noviembre", L"Diciembre"
			});
			this->cmbmes->Location = System::Drawing::Point(34, 403);
			this->cmbmes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmbmes->Name = L"cmbmes";
			this->cmbmes->Size = System::Drawing::Size(180, 28);
			this->cmbmes->TabIndex = 9;
			this->cmbmes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm6::cmbmes_SelectedIndexChanged);
			// 
			// cmbnomes
			// 
			this->cmbnomes->FormattingEnabled = true;
			this->cmbnomes->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->cmbnomes->Location = System::Drawing::Point(225, 403);
			this->cmbnomes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmbnomes->Name = L"cmbnomes";
			this->cmbnomes->Size = System::Drawing::Size(180, 28);
			this->cmbnomes->TabIndex = 10;
			// 
			// cmbdel
			// 
			this->cmbdel->FormattingEnabled = true;
			this->cmbdel->Location = System::Drawing::Point(432, 403);
			this->cmbdel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmbdel->Name = L"cmbdel";
			this->cmbdel->Size = System::Drawing::Size(180, 28);
			this->cmbdel->TabIndex = 11;
			this->cmbdel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm6::cmbsemana_SelectedIndexChanged);
			// 
			// cmbaño
			// 
			this->cmbaño->FormattingEnabled = true;
			this->cmbaño->Location = System::Drawing::Point(34, 472);
			this->cmbaño->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmbaño->Name = L"cmbaño";
			this->cmbaño->Size = System::Drawing::Size(180, 28);
			this->cmbaño->TabIndex = 12;
			this->cmbaño->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm6::cmbaño_SelectedIndexChanged);
			// 
			// txti
			// 
			this->txti->Location = System::Drawing::Point(828, 403);
			this->txti->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txti->Name = L"txti";
			this->txti->Size = System::Drawing::Size(148, 26);
			this->txti->TabIndex = 13;
			// 
			// cmbal
			// 
			this->cmbal->FormattingEnabled = true;
			this->cmbal->Location = System::Drawing::Point(638, 403);
			this->cmbal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cmbal->Name = L"cmbal";
			this->cmbal->Size = System::Drawing::Size(180, 28);
			this->cmbal->TabIndex = 14;
			this->cmbal->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm6::cmbal_SelectedIndexChanged);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1060, 574);
			this->Controls->Add(this->cmbal);
			this->Controls->Add(this->txti);
			this->Controls->Add(this->cmbaño);
			this->Controls->Add(this->cmbdel);
			this->Controls->Add(this->cmbnomes);
			this->Controls->Add(this->cmbmes);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnsali);
			this->Controls->Add(this->listView1);
			this->Name = L"MyForm6";
			this->Text = L"Consulta";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnsali_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 char str[1000], de[20];
			 FILE *fe;
			 this->listView1->Items->Clear();
			 fe = fopen("pasteleria.txt", "r");
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
				 if (srtNew5 == fecha)
				 {
					 ListViewItem^listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
					 listView2->SubItems->Add(srtNew2);
					 listView2->SubItems->Add(srtNew3);
					 listView2->SubItems->Add(srtNew4);
					 listView2->SubItems->Add(srtNew5);
					 this->listView1->Items->Add(listView2);
				 }
			 } while (feof(fe) == 0);
}
private: System::Void cmbaño_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 char str[1000], de[20];
			 FILE *fe;
			 fe = fopen("pasteleria.txt", "r");
			 this->listView1->Items->Clear();
			 char  *cod, *nombre, *cant,*precio, *dia, *mes,*año,*img;
			 rewind(fe);
			 do{
				 fgets(str, 1000, fe);
				 cod = strtok(str, ";");
				 nombre = strtok(NULL, ";");
				 precio = strtok(NULL, ";");
				 cant = strtok(NULL, ";");
				 dia = strtok(NULL, "/");
				 mes = strtok(NULL, "/");
				 año = strtok(NULL, ";");
				 img = strtok(NULL, ";");


				 String^srtNew1 = gcnew String(cod);
				 String^srtNew2 = gcnew String(nombre);
				 String^srtNew3 = gcnew String(precio);
				 String^srtNew4 = gcnew String(cant);
				 String^srtNew5 = gcnew String(dia);
				 String^srtNew6 = gcnew String(mes);
				 String^srtNew7 = gcnew String(año);
				 String^srtNew8 = gcnew String(img);
				 String^fecha = gcnew String(cmbaño->Text);
				 if (srtNew7 == fecha)
				 {
					 ListViewItem^listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
					 listView2->SubItems->Add(srtNew2);
					 listView2->SubItems->Add(srtNew3);
					 listView2->SubItems->Add(srtNew4);
					 listView2->SubItems->Add(srtNew5+"/"+srtNew6+"/"+srtNew7);
					 this->listView1->Items->Add(listView2);
				 }
			 } while (feof(fe) == 0);
}
private: System::Void MyForm6_Load(System::Object^  sender, System::EventArgs^  e) {
			 int i,a;
			 for (i = 0; i <= 5; i++){
				 a = 2018 + i;
				 cmbaño->Items->Add(a);
			 }
			 for (i = 1; i <= 31; i++){
				 cmbdel->Items->Add(i);
				 cmbal->Items->Add(i);
			 }
}
private: System::Void cmbmes_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 cmbnomes->SelectedIndex = cmbmes->SelectedIndex;
			 char str[1000], de[20];
			 FILE *fe;
			 fe = fopen("pasteleria.txt", "r");
			 this->listView1->Items->Clear();
			 char  *cod, *nombre, *cant, *precio, *dia, *mes, *año, *img;
			 rewind(fe);
			 do{
				 fgets(str, 1000, fe);
				 cod = strtok(str, ";");
				 nombre = strtok(NULL, ";");
				 precio = strtok(NULL, ";");
				 cant = strtok(NULL, ";");
				 dia = strtok(NULL, "/");
				 mes = strtok(NULL, "/");
				 año = strtok(NULL, ";");
				 img = strtok(NULL, ";");


				 String^srtNew1 = gcnew String(cod);
				 String^srtNew2 = gcnew String(nombre);
				 String^srtNew3 = gcnew String(precio);
				 String^srtNew4 = gcnew String(cant);
				 String^srtNew5 = gcnew String(dia);
				 String^srtNew6 = gcnew String(mes);
				 String^srtNew7 = gcnew String(año);
				 String^srtNew8 = gcnew String(img);
				 String^a = gcnew String(cmbaño->Text);
				 String^m = gcnew String(cmbnomes->Text);
				 if (srtNew7 == a && srtNew6==m)
				 {
					 ListViewItem^listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
					 listView2->SubItems->Add(srtNew2);
					 listView2->SubItems->Add(srtNew3);
					 listView2->SubItems->Add(srtNew4);
					 listView2->SubItems->Add(srtNew5 + "/" + srtNew6 + "/" + srtNew7);
					 this->listView1->Items->Add(listView2);
				 }
			 } while (feof(fe) == 0);
}
private: System::Void cmbsemana_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void cmbal_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int del, al;
			 del = Convert::ToInt32(cmbdel->Text);
			 al = Convert::ToInt32(cmbal->Text);
			 if (del<al){
				 char str[1000], de[20];
				 FILE *fe;
				 fe = fopen("pasteleria.txt", "r");
				 this->listView1->Items->Clear();
				 char  *cod, *nombre, *cant, *precio, *dia, *mes, *año, *img;
				 rewind(fe);
				 do{
					 fgets(str, 1000, fe);
					 cod = strtok(str, ";");
					 nombre = strtok(NULL, ";");
					 precio = strtok(NULL, ";");
					 cant = strtok(NULL, ";");
					 dia = strtok(NULL, "/");
					 mes = strtok(NULL, "/");
					 año = strtok(NULL, ";");
					 img = strtok(NULL, ";");

					 int i;
					 String^srtNew1 = gcnew String(cod);
					 String^srtNew2 = gcnew String(nombre);
					 String^srtNew3 = gcnew String(precio);
					 String^srtNew4 = gcnew String(cant);
					 String^srtNew5 = gcnew String(dia);
					 String^srtNew6 = gcnew String(mes);
					 String^srtNew7 = gcnew String(año);
					 String^srtNew8 = gcnew String(img);
					 String^a = gcnew String(cmbaño->Text);
					 String^m = gcnew String(cmbnomes->Text);
					 for (i = del; i <= al; i++){
						 txti->Text = Convert::ToString(i);
						 String^d = gcnew String(txti->Text);
						 if (srtNew7 == a && srtNew6 == m && srtNew5 == d)
						 {
							 ListViewItem^listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
							 listView2->SubItems->Add(srtNew2);
							 listView2->SubItems->Add(srtNew3);
							 listView2->SubItems->Add(srtNew4);
							 listView2->SubItems->Add(srtNew5 + "/" + srtNew6 + "/" + srtNew7);
							 this->listView1->Items->Add(listView2);
						 }
					 }
				 } while (feof(fe) == 0);
			 }
			 else{
				 MessageBox::Show("NO SE PUEDE");
			 }
}
};
}
