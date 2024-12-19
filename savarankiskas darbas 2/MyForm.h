#pragma once
#include "AboutForm.h"

namespace savarankiskasdarbas2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}
		void SaveTextToFile(System::String^ filePath);
		void openFile(System::String^ filePath);
		void generateMokiniai(int mokSk);				//Sukuria pasirinkta mokiniu skaiciu ir sugeneruoja ju pazymius

		void processGrades();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ Sukurti;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonAbout;
	private: System::Windows::Forms::Button^ buttonCalculate;


	protected:

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
			this->Sukurti = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAbout = (gcnew System::Windows::Forms::Button());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Sukurti
			// 
			this->Sukurti->Location = System::Drawing::Point(42, 572);
			this->Sukurti->Name = L"Sukurti";
			this->Sukurti->Size = System::Drawing::Size(135, 46);
			this->Sukurti->TabIndex = 1;
			this->Sukurti->Text = L"Sukurti";
			this->Sukurti->UseVisualStyleBackColor = true;
			this->Sukurti->Click += gcnew System::EventHandler(this, &MyForm::Sukurti_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(196, 572);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Išsaugoti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(351, 572);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Užkrauti";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1082, 565);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Išjungti programa";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->Location = System::Drawing::Point(25, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1175, 515);
			this->textBox1->TabIndex = 5;
			// 
			// buttonAbout
			// 
			this->buttonAbout->Location = System::Drawing::Point(933, 567);
			this->buttonAbout->Name = L"buttonAbout";
			this->buttonAbout->Size = System::Drawing::Size(124, 47);
			this->buttonAbout->TabIndex = 7;
			this->buttonAbout->Text = L"Apie programą";
			this->buttonAbout->UseVisualStyleBackColor = true;
			this->buttonAbout->Click += gcnew System::EventHandler(this, &MyForm::buttonAbout_Click);
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Location = System::Drawing::Point(507, 565);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(135, 53);
			this->buttonCalculate->TabIndex = 8;
			this->buttonCalculate->Text = L"Skaičiuoti pažymius";
			this->buttonCalculate->UseVisualStyleBackColor = true;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1240, 631);
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->buttonAbout);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Sukurti);
			this->Name = L"MyForm";
			this->Text = L"Pažymių knygelė";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Sukurti_Click(System::Object^ sender, System::EventArgs^ e) {
	generateMokiniai(10);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Save file
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text Files (*.txt)|*.txt";
	saveFileDialog->Title = "Išsaugoti rezultatų failą";
	saveFileDialog->InitialDirectory = "C:\\";

	// Show the SaveFileDialog and check if the user selected a file
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filePath = saveFileDialog->FileName;
		SaveTextToFile(filePath);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Load file
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Text Files (*.txt)|*.txt";
	//openFileDialog->Title = "Užkrauti pasirinktą failą";
	openFileDialog->InitialDirectory = "C:\\";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filePath = openFileDialog->FileName;
		openFile(filePath);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutForm^ aboutForm = gcnew AboutForm();
	aboutForm->ShowDialog();
}
private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
	//Skaiciuoti pažymius mygtukas
	processGrades();
}
};
}
