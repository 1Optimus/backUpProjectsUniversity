#pragma once
#include "MyForm1.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>

namespace panaderia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnsalir;
	private: System::Windows::Forms::Button^  btnpas;
	protected:


	protected:


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
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->btnpas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnsalir
			// 
			this->btnsalir->Location = System::Drawing::Point(298, 394);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(149, 41);
			this->btnsalir->TabIndex = 0;
			this->btnsalir->Text = L"Salir";
			this->btnsalir->UseVisualStyleBackColor = true;
			this->btnsalir->Click += gcnew System::EventHandler(this, &MyForm::btnsalir_Click_1);
			// 
			// btnpas
			// 
			this->btnpas->Location = System::Drawing::Point(161, 27);
			this->btnpas->Name = L"btnpas";
			this->btnpas->Size = System::Drawing::Size(102, 45);
			this->btnpas->TabIndex = 1;
			this->btnpas->Text = L"Pasteles";
			this->btnpas->UseVisualStyleBackColor = true;
			this->btnpas->Click += gcnew System::EventHandler(this, &MyForm::btnpas_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 456);
			this->Controls->Add(this->btnpas);
			this->Controls->Add(this->btnsalir);
			this->Name = L"MyForm";
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnsalir_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnsalir_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void btnpas_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm1 ^ob = gcnew MyForm1(this);
		ob->ShowDialog();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
