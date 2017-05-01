#pragma once
#include "Header1.h"
using namespace std;

namespace PROBANDO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		CVecProducto*objVecProducto;
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
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  tabControl1;


	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::TextBox^  Marca;
	private: System::Windows::Forms::TextBox^  nombre;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  PREBRUTO;
	private: System::Windows::Forms::TextBox^  PRENETO;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label7;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->PREBRUTO = (gcnew System::Windows::Forms::TextBox());
			this->PRENETO = (gcnew System::Windows::Forms::TextBox());
			this->Marca = (gcnew System::Windows::Forms::TextBox());
			this->nombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(346, 58);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(7, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestión de Productos LAIVE";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 58);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(346, 292);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->AccessibleDescription = L"c";
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label);
			this->tabPage1->Controls->Add(this->PREBRUTO);
			this->tabPage1->Controls->Add(this->PRENETO);
			this->tabPage1->Controls->Add(this->Marca);
			this->tabPage1->Controls->Add(this->nombre);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(338, 264);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Agregar Producto";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 15);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Precio Neto=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precio Bruto=";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(8, 63);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(48, 15);
			this->label->TabIndex = 2;
			this->label->Text = L"Marca: ";
			// 
			// PREBRUTO
			// 
			this->PREBRUTO->Location = System::Drawing::Point(90, 144);
			this->PREBRUTO->Name = L"PREBRUTO";
			this->PREBRUTO->Size = System::Drawing::Size(225, 21);
			this->PREBRUTO->TabIndex = 1;
			// 
			// PRENETO
			// 
			this->PRENETO->Location = System::Drawing::Point(90, 108);
			this->PRENETO->Name = L"PRENETO";
			this->PRENETO->Size = System::Drawing::Size(225, 21);
			this->PRENETO->TabIndex = 1;
			// 
			// Marca
			// 
			this->Marca->Location = System::Drawing::Point(72, 63);
			this->Marca->Name = L"Marca";
			this->Marca->Size = System::Drawing::Size(243, 21);
			this->Marca->TabIndex = 1;
			// 
			// nombre
			// 
			this->nombre->Location = System::Drawing::Point(72, 18);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(243, 21);
			this->nombre->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre: ";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(338, 264);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Lista Productos";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ELMINAR";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 15);
			this->label5->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(8, 10);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(322, 214);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Location = System::Drawing::Point(4, 24);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(338, 264);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Reporte 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(11, 49);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(296, 184);
			this->listBox2->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(290, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L"El promedio del Precio Bruto de todos los productos";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox3);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Location = System::Drawing::Point(4, 24);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(338, 264);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Reporte 2";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 15;
			this->listBox3->Location = System::Drawing::Point(11, 55);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(307, 169);
			this->listBox3->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(258, 30);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Todos los productos en donde su Precio Neto \r\nes mayor al promedio";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 351);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (nombre->Text->Length == 0 || Marca->Text->Length == 0||PRENETO->Text->Length ==0|| PREBRUTO->Text->Length == 0)
		{
			MessageBox::Show("Por favor, completar todos los campos");
			return;
		}
		char*Nombre = new char[100];
		sprintf(Nombre, "%s", nombre->Text);
		char*marca = new char[100];
		sprintf(marca, "%s", Marca->Text);
		double PNeto = Convert::ToDouble(PRENETO->Text);
		double PBruto = Convert::ToDouble(PREBRUTO->Text);
		objVecProducto->Registrar_Producto(Nombre, marca, PNeto, PBruto);
		
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	objVecProducto = new CVecProducto();
	
}
		 void CargarProductos()
		 {
			 listBox1->Items->Clear();
			 vector<CProducto*>*arrProducto = objVecProducto->Get_arrProducto();
			 for (int i = 0;i < arrProducto->size();i++)
			 {
				 String^ strNombre = gcnew String(arrProducto->at(i)->GET_Nombre());
				 String^ strMarca = gcnew String(arrProducto->at(i)->GET_Marca());
				 listBox1->Items->Add(strNombre)+"|"+
					 arrProducto->at(i)
			 }
		 }
};
}
