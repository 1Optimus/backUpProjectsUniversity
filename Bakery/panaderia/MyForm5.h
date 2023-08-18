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
	/// Resumen de MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		Form ^ob;
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm5(Form ^ob1)
		{
			ob = ob1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Button^  btnsali;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnsali = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(141, 274);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 83);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Mostrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Location = System::Drawing::Point(21, 44);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(485, 212);
			this->listView1->TabIndex = 2;
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
			// btnsali
			// 
			this->btnsali->Location = System::Drawing::Point(439, 322);
			this->btnsali->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnsali->Name = L"btnsali";
			this->btnsali->Size = System::Drawing::Size(66, 34);
			this->btnsali->TabIndex = 4;
			this->btnsali->Text = L"Salir";
			this->btnsali->UseVisualStyleBackColor = true;
			this->btnsali->Click += gcnew System::EventHandler(this, &MyForm5::btnsali_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 401);
			this->Controls->Add(this->btnsali);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm5";
			this->Text = L"Consulta General";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnsali_Click(System::Object^  sender, System::EventArgs^  e) {
		exit;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	char str[1000];
	FILE *fe;
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

		ListViewItem^listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		listView2->SubItems->Add(srtNew3);
		listView2->SubItems->Add(srtNew4);
		listView2->SubItems->Add(srtNew5);
		this->listView1->Items->Add(listView2);

	} while (feof(fe) == 0);
}
};
}
