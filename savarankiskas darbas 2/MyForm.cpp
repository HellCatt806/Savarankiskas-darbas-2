#include "MyForm.h"

#include <msclr\marshal_cppstd.h> // For string conversions
#include <vector>
#include <numeric>
#include <algorithm>
#include <regex>

using namespace System::Collections::Generic; // For List<T>
using namespace System::Text::RegularExpressions;

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	savarankiskasdarbas2::MyForm form;
	Application::Run(% form);
}

void savarankiskasdarbas2::MyForm::SaveTextToFile(System::String^ filePath) {
	StreamWriter^ writer = gcnew StreamWriter(filePath);

	// Write the content of the TextBox to the file
	writer->Write(this->textBox1->Text);

	writer->Close();
}
void savarankiskasdarbas2::MyForm::openFile(System::String^ filepath) {
	StreamReader^ reader = gcnew StreamReader(filepath);

	this->textBox1->Text = reader->ReadToEnd();

	reader->Close();
}
void savarankiskasdarbas2::MyForm::generateMokiniai(int mokSk) {
	Sukurti->Enabled = false;
	Application::DoEvents();
	System::Random^ rand = gcnew System::Random();

	textBox1->Clear();
	textBox1->AppendText("Mokinys                ND1    ND2    ND3    ND4    ND5    ND6   ND7    ND8    ND9    ND10   Egz.         Vid." + Environment::NewLine);
	for (int i = 1; i <= mokSk; i++) {
		//Paraso mokinio skaiciu ir suskaiciuoja koki tarpa reikia palikti
		textBox1->AppendText("Mokinys" + i);
		System::String^ mok = "Mokinys" + i;
		for (int b = 1; b <= (25 - mok->Length); b++)
			textBox1->AppendText(" ");

		//10 pazymiu
		for (int a = 1; a <= 10; a++) {
			System::String^ paz = System::Convert::ToString(rand->Next(1, 11));

			textBox1->AppendText(paz);
			for (int o = 1; o <= (10 - paz->Length); o++)
				textBox1->AppendText(" ");
		}
		System::String^ egz = System::Convert::ToString(rand->Next(1, 11));
		textBox1->AppendText(egz + Environment::NewLine);
	}
	Sukurti->Enabled = true;
	Application::DoEvents();
}

void savarankiskasdarbas2::MyForm::processGrades() {
    String^ text = textBox1->Text;
    array<String^>^ lines = text->Split(gcnew array<Char>{'\r', '\n'}, StringSplitOptions::RemoveEmptyEntries);

    String^ outputText = "";
    outputText += lines[0] + "\r\n";

    //Regular expression to split the line by one or more spaces.
    Regex^ rgx = gcnew Regex("\\s+");

    for (int i = 1; i < lines->Length; i++) {
        String^ line = lines[i];
        line = line->Trim();

        array<String^>^ parts = rgx->Split(line); // Split using regex


        String^ studentName = parts[0];
        List<int>^ grades = gcnew List<int>();
        int egz = 0;

        for (int j = 1; j < parts->Length; j++) {
            int grade;
            if (Int32::TryParse(parts[j], grade)) {
                if (j == parts->Length - 1) {
                    egz = grade;
                }
                else {
                    grades->Add(grade);
                }
            }
        }

        double sum = 0;
        for (int i = 0; i < grades->Count; i++) {
            sum += grades[i];
        }
        double gradeAverage = sum / grades->Count;

        double finalAverage = 0.4 * gradeAverage + 0.6 * egz;

        outputText += String::Format("{0}            {1:F2}\r\n", line, finalAverage);
    }

    textBox1->Text = outputText;
}