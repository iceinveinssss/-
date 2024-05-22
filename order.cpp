#include "order.h"
#include "selectMesto.h"
#include "mainForm.h"
#include <fstream> 
#include <msclr/marshal_cppstd.h>

void kurs::order::cost_Click(System::Object^ sender, System::EventArgs^ e)
{
    
}

void kurs::order::order_Load(System::Object^ sender, System::EventArgs^ e)
{
    result_box->Text = cent.ToString();
}

void kurs::order::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
   
}

void kurs::order::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    mainForm^ main = gcnew mainForm;
    main->Show();
    this->Close();
}

void kurs::order::time_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    
}

void kurs::order::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    // ������� � ��������� ��������� ���� ��� ������ � ������ ����������
    std::ofstream outFile("order_details.txt", std::ios::app);

    if (outFile.is_open())
    {
        // ���������� ���������� ���� ��������� ����� � ����
        outFile << "�����: " << msclr::interop::marshal_as<std::string>(film_box->Text) << std::endl;
        outFile << "����: " << msclr::interop::marshal_as<std::string>(row_box->Text) << std::endl;
        outFile << "�����: " << msclr::interop::marshal_as<std::string>(place_box->Text) << std::endl;
        outFile << "�����: " << msclr::interop::marshal_as<std::string>(time_box->Text) << std::endl;
        outFile << "���������: " << cent << std::endl;
        outFile << "-----------------------------" << std::endl; // ����������� ����� ��������

        // ��������� ����
        outFile.close();

        // �������� ������������ � ���, ��� ������ ���� ������� ��������
        MessageBox::Show("������ ������� �������� � ���� order_details.txt");
    }
    else
    {
        // �������� ������������ � ���, ��� ���� �� ������� �������
        MessageBox::Show("�� ������� ������� ���� ��� ������");
    }
}


