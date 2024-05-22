#include "mainForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;
using namespace kurs;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    kurs::mainForm form;
    Application::Run(% form);
    return 0;
}

void mainForm::openSelectMesto(String^ filmName) 
{
    selectMesto^ selectSid = gcnew selectMesto;
    selectSid->name_film->Text = filmName;
    selectSid->Show();
    this->Hide();
}

void mainForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
{
    openSelectMesto(film_1->Text);
}

void mainForm::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) 
{
    openSelectMesto(film_2->Text);
}

void mainForm::pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) 
{
    openSelectMesto(film_3->Text);
}


void mainForm::mainForm_Load(System::Object^ sender, System::EventArgs^ e)
{


}