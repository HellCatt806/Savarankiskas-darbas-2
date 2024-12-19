#pragma once


namespace savarankiskasdarbas2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateBookForm
	/// </summary>
	public ref class CreateBookForm : public System::Windows::Forms::Form{
	public:
		CreateBookForm(void)
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ mokSkText;
	private: System::Windows::Forms::TextBox^ pazSkText;
	protected:

	protected:

	private: System::Windows::Forms::NumericUpDown^ mokSk;

	private: System::Windows::Forms::NumericUpDown^ pazSk;

	private: System::Windows::Forms::Button^ atsaukti;

	private: System::Windows::Forms::Button^ patvirtinti;


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
			this->mokSkText = (gcnew System::Windows::Forms::TextBox());
			this->pazSkText = (gcnew System::Windows::Forms::TextBox());
			this->mokSk = (gcnew System::Windows::Forms::NumericUpDown());
			this->pazSk = (gcnew System::Windows::Forms::NumericUpDown());
			this->atsaukti = (gcnew System::Windows::Forms::Button());
			this->patvirtinti = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mokSk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pazSk))->BeginInit();
			this->SuspendLayout();
			// 
			// mokSkText
			// 
			this->mokSkText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mokSkText->Location = System::Drawing::Point(21, 24);
			this->mokSkText->Margin = System::Windows::Forms::Padding(2);
			this->mokSkText->Name = L"mokSkText";
			this->mokSkText->Size = System::Drawing::Size(139, 24);
			this->mokSkText->TabIndex = 0;
			this->mokSkText->Text = L"Kiek turite mokinių\?";
			this->mokSkText->TextChanged += gcnew System::EventHandler(this, &CreateBookForm::textBox1_TextChanged);
			// 
			// pazSkText
			// 
			this->pazSkText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pazSkText->Location = System::Drawing::Point(21, 63);
			this->pazSkText->Margin = System::Windows::Forms::Padding(2);
			this->pazSkText->Name = L"pazSkText";
			this->pazSkText->Size = System::Drawing::Size(177, 24);
			this->pazSkText->TabIndex = 1;
			this->pazSkText->Text = L"Kiek pažymių talpinsite\?";
			this->pazSkText->TextChanged += gcnew System::EventHandler(this, &CreateBookForm::textBox2_TextChanged);
			// 
			// mokSk
			// 
			this->mokSk->BackColor = System::Drawing::SystemColors::Window;
			this->mokSk->Location = System::Drawing::Point(209, 24);
			this->mokSk->Margin = System::Windows::Forms::Padding(2);
			this->mokSk->Name = L"mokSk";
			this->mokSk->Size = System::Drawing::Size(80, 20);
			this->mokSk->TabIndex = 3;
			this->mokSk->ValueChanged += gcnew System::EventHandler(this, &CreateBookForm::numericUpDown2_ValueChanged);
			// 
			// pazSk
			// 
			this->pazSk->Location = System::Drawing::Point(209, 63);
			this->pazSk->Margin = System::Windows::Forms::Padding(2);
			this->pazSk->Name = L"pazSk";
			this->pazSk->Size = System::Drawing::Size(80, 20);
			this->pazSk->TabIndex = 4;
			this->pazSk->ValueChanged += gcnew System::EventHandler(this, &CreateBookForm::numericUpDown3_ValueChanged);
			// 
			// atsaukti
			// 
			this->atsaukti->Location = System::Drawing::Point(33, 112);
			this->atsaukti->Margin = System::Windows::Forms::Padding(2);
			this->atsaukti->Name = L"atsaukti";
			this->atsaukti->Size = System::Drawing::Size(74, 23);
			this->atsaukti->TabIndex = 5;
			this->atsaukti->Text = L"Atšaukti";
			this->atsaukti->UseVisualStyleBackColor = true;
			this->atsaukti->Click += gcnew System::EventHandler(this, &CreateBookForm::button1_Click);
			// 
			// patvirtinti
			// 
			this->patvirtinti->Location = System::Drawing::Point(190, 112);
			this->patvirtinti->Margin = System::Windows::Forms::Padding(2);
			this->patvirtinti->Name = L"patvirtinti";
			this->patvirtinti->Size = System::Drawing::Size(74, 23);
			this->patvirtinti->TabIndex = 6;
			this->patvirtinti->Text = L"Patvirtinti";
			this->patvirtinti->UseVisualStyleBackColor = true;
			this->patvirtinti->Click += gcnew System::EventHandler(this, &CreateBookForm::button2_Click);
			// 
			// CreateBookForm
			// 
			this->AcceptButton = this->patvirtinti;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(297, 143);
			this->ControlBox = false;
			this->Controls->Add(this->patvirtinti);
			this->Controls->Add(this->atsaukti);
			this->Controls->Add(this->pazSk);
			this->Controls->Add(this->mokSk);
			this->Controls->Add(this->pazSkText);
			this->Controls->Add(this->mokSkText);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CreateBookForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Sukurti pažymių knygelę";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mokSk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pazSk))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
