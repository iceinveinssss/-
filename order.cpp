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
    // Создаем и открываем текстовый файл для записи в режиме добавления
    std::ofstream outFile("order_details.txt", std::ios::app);

    if (outFile.is_open())
    {
        // Записываем содержимое всех текстовых полей в файл
        outFile << "Фильм: " << msclr::interop::marshal_as<std::string>(film_box->Text) << std::endl;
        outFile << "Ряды: " << msclr::interop::marshal_as<std::string>(row_box->Text) << std::endl;
        outFile << "Места: " << msclr::interop::marshal_as<std::string>(place_box->Text) << std::endl;
        outFile << "Время: " << msclr::interop::marshal_as<std::string>(time_box->Text) << std::endl;
        outFile << "Стоимость: " << cent << std::endl;
        outFile << "-----------------------------" << std::endl; // Разделитель между записями

        // Закрываем файл
        outFile.close();

        // Сообщаем пользователю о том, что данные были успешно записаны
        MessageBox::Show("Данные успешно записаны в файл order_details.txt");
    }
    else
    {
        // Сообщаем пользователю о том, что файл не удалось открыть
        MessageBox::Show("Не удалось открыть файл для записи");
    }
}


