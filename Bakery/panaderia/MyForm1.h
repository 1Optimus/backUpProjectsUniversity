#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include "MyForm2.h"
#include "MyForm4.h"
namespace panaderia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form ^ob;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm1(Form ^ob1)
		{
			ob = ob1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btning;
	protected:
	private: System::Windows::Forms::Button^  btncon;
	private: System::Windows::Forms::Button^  btnven;
	private: System::Windows::Forms::Button^  btnmenu;


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
			this->btning = (gcnew System::Windows::Forms::Button());
			this->btncon = (gcnew System::Windows::Forms::Button());
			this->btnven = (gcnew System::Windows::Forms::Button());
			this->btnmenu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btning
			// 
			this->btning->Location = System::Drawing::Point(151, 33);
			this->btning->Name = L"btning";
			this->btning->Size = System::Drawing::Size(123, 70);
			this->btning->TabIndex = 0;
			this->btning->Text = L"Ingreso";
			this->btning->UseVisualStyleBackColor = true;
			this->btning->Click += gcnew System::EventHandler(this, &MyForm1::btning_Click);
			// 
			// btncon
			// 
			this->btncon->Location = System::Drawing::Point(151, 144);
			this->btncon->Name = L"btncon";
			this->btncon->Size = System::Drawing::Size(123, 70);
			this->btncon->TabIndex = 1;
			this->btncon->Text = L"Consulta";
			this->btncon->UseVisualStyleBackColor = true;
			this->btncon->Click += gcnew System::EventHandler(this, &MyForm1::btncon_Click);
			// 
			// btnven
			// 
			this->btnven->Location = System::Drawing::Point(151, 249);
			this->btnven->Name = L"btnven";
			this->btnven->Size = System::Drawing::Size(123, 70);
			this->btnven->TabIndex = 2;
			this->btnven->Text = L"Ventas";
			this->btnven->UseVisualStyleBackColor = true;
			this->btnven->Click += gcnew System::EventHandler(this, &MyForm1::btnven_Click);
			// 
			// btnmenu
			// 
			this->btnmenu->Location = System::Drawing::Point(273, 402);
			this->btnmenu->Name = L"btnmenu";
			this->btnmenu->Size = System::Drawing::Size(148, 29);
			this->btnmenu->TabIndex = 3;
			this->btnmenu->Text = L"Regresar al menu";
			this->btnmenu->UseVisualStyleBackColor = true;
			this->btnmenu->Click += gcnew System::EventHandler(this, &MyForm1::btnmenu_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 452);
			this->Controls->Add(this->btnmenu);
			this->Controls->Add(this->btnven);
			this->Controls->Add(this->btncon);
			this->Controls->Add(this->btning);
			this->Name = L"MyForm1";
			this->Text = L"OPERACIONES";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btning_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		MyForm2 ^ob2 = gcnew MyForm2(this);
		ob2->ShowDialog();
	}
private: System::Void btnmenu_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	ob->Show();
}
private: System::Void btncon_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	MyForm6 ^ob1 = gcnew MyForm6(this);
	ob1->ShowDialog();
}
private: System::Void btnven_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	MyForm4 ^ob1 = gcnew MyForm4(this);
	ob1->ShowDialog();
}
};
}
