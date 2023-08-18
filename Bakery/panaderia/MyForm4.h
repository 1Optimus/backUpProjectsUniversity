#pragma once
#include"Myform5.h"
#include"Myform6.h"
namespace panaderia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form ^ob;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MyForm4(Form ^ob1)
		{
			ob = ob1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cmbnombre;
	protected:
	private: System::Windows::Forms::ComboBox^  cmbcod;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  btnguardar;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  txtcant;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;

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
			this->cmbnombre = (gcnew System::Windows::Forms::ComboBox());
			this->cmbcod = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnguardar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtcant = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// cmbnombre
			// 
			this->cmbnombre->FormattingEnabled = true;
			this->cmbnombre->Location = System::Drawing::Point(383, 13);
			this->cmbnombre->Name = L"cmbnombre";
			this->cmbnombre->Size = System::Drawing::Size(121, 28);
			this->cmbnombre->TabIndex = 54;
			this->cmbnombre->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm4::cmbnombre_SelectedIndexChanged);
			// 
			// cmbcod
			// 
			this->cmbcod->FormattingEnabled = true;
			this->cmbcod->Location = System::Drawing::Point(12, 13);
			this->cmbcod->Name = L"cmbcod";
			this->cmbcod->Size = System::Drawing::Size(121, 28);
			this->cmbcod->TabIndex = 53;
			this->cmbcod->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(443, 121);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 48;
			this->dateTimePicker1->Value = System::DateTime(2018, 2, 15, 0, 0, 0, 0);
			// 
			// btnguardar
			// 
			this->btnguardar->Location = System::Drawing::Point(822, 507);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(308, 82);
			this->btnguardar->TabIndex = 47;
			this->btnguardar->Text = L"Realizar venta";
			this->btnguardar->UseVisualStyleBackColor = true;
			this->btnguardar->Click += gcnew System::EventHandler(this, &MyForm4::btnguardar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(801, 121);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(358, 355);
			this->pictureBox1->TabIndex = 45;
			this->pictureBox1->TabStop = false;
			// 
			// txtcant
			// 
			this->txtcant->Location = System::Drawing::Point(475, 67);
			this->txtcant->Name = L"txtcant";
			this->txtcant->Size = System::Drawing::Size(144, 26);
			this->txtcant->TabIndex = 42;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(941, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 20);
			this->label6->TabIndex = 41;
			this->label6->Text = L"IMAGEN";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(255, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 20);
			this->label5->TabIndex = 40;
			this->label5->Text = L"FECHA DE INGRESO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 20);
			this->label2->TabIndex = 37;
			this->label2->Text = L"CANTIDAD A INGRESAR:";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Location = System::Drawing::Point(12, 166);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(770, 376);
			this->listView1->TabIndex = 55;
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
			this->columnHeader3->Text = L"Cantidad Disponible";
			this->columnHeader3->Width = 126;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Cantidad Vendida";
			this->columnHeader4->Width = 193;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Fecha de venta";
			this->columnHeader5->Width = 163;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1171, 637);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->cmbnombre);
			this->Controls->Add(this->cmbcod);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnguardar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtcant);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm4";
			this->Text = L"Ventas";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnguardar_Click(System::Object^  sender, System::EventArgs^  e) {
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
			do
			{
				fgets(rt, 1000, fe); d1 = strtok(rt, ";"); d2 = strtok(NULL, ";"); d3 = strtok(NULL, ";"); d4 = strtok(NULL, ";");
				d5 = strtok(NULL, ";"); d6 = strtok(NULL, ";");
				String ^ srtNew1 = gcnew String(d1);
				if (srtNew1 == cmbcod->Text)
				{
					cod = gcnew String(d1); nom = gcnew String(d2); preu = gcnew String(d3); cant = gcnew String(d4);
					fec = gcnew String(d5); im = gcnew String(d6);
				}

			} while (feof(fe) == 0);
			int newcanti = Convert::ToInt32(cant) + Convert::ToInt32(txtcant->Text);
			StreamWriter ^datos = gcnew StreamWriter("pasteleria.txt", false);
			datos->Write(cod); datos->Write(";"); datos->Write(nom); datos->Write(";"); datos->Write(preu); datos->Write(";");
			datos->Write(newcanti); datos->Write(";"); datos->Write(fec); datos->Write(";"); datos->Write(im); datos->Write(";");
			MessageBox::Show("HAZ INGRESADO LOS DATOS CORRECTAMENTE....", "PASTELES", MessageBoxButtons::OK, MessageBoxIcon::Information);
			txtcant->Clear();
			this->pictureBox1->Visible = false();


			StreamWriter^ rd = gcnew StreamWriter("ventaspast.txt", "a+");
			int error = 1;
			if (txtcant->Text == "")
			{
				MessageBox::Show("Debes escribir CANTIDAD...", "FALTA DE DATOS", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				error = 0;
			}
			if (error != 0){
				rd->Write("\r\n");
				rd->Write(cmbcod->Text); rd->Write(";");
				rd->Write(cmbnombre->Text); rd->Write(";");
				rd->Write(Convert::ToString(newcanti)); rd->Write(";");
				rd->Write(Convert::ToString(preu)); rd->Write(";");
				rd->Write(dateTimePicker1->Text); rd->Write(";");
				rd->Write(Convert::ToString(im)); rd->Write(";");
				MessageBox::Show("HAZ INGRESADO LOS DATOS CORRECTAMENTE....", "PASTELES", MessageBoxButtons::OK, MessageBoxIcon::Information);
				rd->Close();
				txtcant->Clear();
				this->pictureBox1->Visible = false();
			}
		}
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
			if (cmbcod->Text == srtNew1)
			{
				pictureBox1->Image = Image::FromFile("C:/Users/Miguel Angel Chamizo/Desktop/panaderia/Imagenes/" + srtNew6);
			}
			this->pictureBox1->Visible = true;
		} while (feof(fe) == 0);
}
};
}
