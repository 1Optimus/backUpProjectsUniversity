#pragma once
#include "MyForm3.h"
namespace panaderia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form ^ob;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm2(Form ^ob1)
		{
			ob = ob1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btningre;
	private: System::Windows::Forms::TextBox^  txtcontra;
	protected:

	private: System::Windows::Forms::TextBox^  txtus;


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
			this->btningre = (gcnew System::Windows::Forms::Button());
			this->txtcontra = (gcnew System::Windows::Forms::TextBox());
			this->txtus = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btningre
			// 
			this->btningre->Location = System::Drawing::Point(169, 208);
			this->btningre->Name = L"btningre";
			this->btningre->Size = System::Drawing::Size(149, 46);
			this->btningre->TabIndex = 0;
			this->btningre->Text = L"INGRESAR";
			this->btningre->UseVisualStyleBackColor = true;
			this->btningre->Click += gcnew System::EventHandler(this, &MyForm2::btningre_Click);
			// 
			// txtcontra
			// 
			this->txtcontra->Location = System::Drawing::Point(161, 137);
			this->txtcontra->Name = L"txtcontra";
			this->txtcontra->Size = System::Drawing::Size(157, 26);
			this->txtcontra->TabIndex = 1;
			this->txtcontra->UseSystemPasswordChar = true;
			// 
			// txtus
			// 
			this->txtus->Location = System::Drawing::Point(161, 69);
			this->txtus->Name = L"txtus";
			this->txtus->Size = System::Drawing::Size(157, 26);
			this->txtus->TabIndex = 2;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 349);
			this->Controls->Add(this->txtus);
			this->Controls->Add(this->txtcontra);
			this->Controls->Add(this->btningre);
			this->Name = L"MyForm2";
			this->Text = L"USUARIO";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btningre_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->txtus->Text=="")
		{
			MessageBox::Show("No ingreso USUARIO","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Warning);
		}
		else if (this->txtcontra->Text=="")
		{
			MessageBox::Show("No ingreso CONTRASEÑA", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			if ((this->txtus->Text == "1") && (this->txtcontra->Text == "1")){
				this->Hide();
				MyForm3 ^ob1 = gcnew MyForm3(this);
				ob1->ShowDialog();
			}
			else
			{
				if (this->txtus->Text != "dola")
				{
					MessageBox::Show("usuario incorrecto", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				if (this->txtcontra->Text != "dola")
				{
					MessageBox::Show("Contraseña incorrecta", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
		}
	}
};
}
