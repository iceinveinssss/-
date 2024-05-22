#include "selectMesto.h"
#include "mainForm.h"
#include "order.h" 
using namespace kurs;

void selectMesto::HandleButtonClick(System::Windows::Forms::Button^ button, String^ typeTicket, int buttonNumber)
{
    if (listBox1->SelectedIndex != -1)
    {
        int selectedIndex = listBox1->SelectedIndex;
        int ticketPrice = 0;

        switch (selectedIndex)
        {
        case 0:  //  0 - это индекс для "детский"
            ticketPrice = child;
            break;
        case 1:  //  1 - это индекс для "взрослый"
            ticketPrice = man;
            break;
        default:
            break;
        }

        if (button->BackColor == Color::Red)
        {
            selectedCount -= ticketPrice;
            invis_price->Text = selectedCount.ToString();
            selectedSeats->Remove(buttonNumber); // Удаление номера кнопки из списка
            selectedRows->Remove(GetRow(buttonNumber)); // Удаление ряда из списка
        }
        else
        {
            selectedCount += ticketPrice;
            invis_price->Text = selectedCount.ToString();
            selectedSeats->Add(buttonNumber); // Добавление номера кнопки в список
            selectedRows->Add(GetRow(buttonNumber)); // Добавление ряда в список
        }

        // Переключение цвета кнопки
        button->BackColor = (button->BackColor == Color::Red) ? Color::White : Color::Red;
    }
}

int selectMesto::GetRow(int buttonNumber)
{
    // Предположим, что у нас 3 колонки
    return (buttonNumber - 1) / 3 + 1;
}

void selectMesto::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button1, tipTicket, 1);
}

void selectMesto::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button2, tipTicket, 2);
}

void selectMesto::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button3, tipTicket, 3);
}

void selectMesto::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button4, tipTicket, 4);
}

void selectMesto::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button5, tipTicket, 5);
}

void selectMesto::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button6, tipTicket, 6);
}

void selectMesto::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button7, tipTicket, 7);
}

void selectMesto::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button8, tipTicket, 8);
}

void selectMesto::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
    HandleButtonClick(button9, tipTicket, 9);
}

// Определение обработчика нажатия на кнопку "Назад"
void selectMesto::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
    mainForm^ main = gcnew mainForm;
    main->Show();
    this->Close();
}

// Определение обработчика нажатия на кнопку "Заказать"
void selectMesto::order_select_Click(System::Object^ sender, System::EventArgs^ e)
{
    order^ ord = gcnew order;
    ord->cent = selectedCount;
    ord->film_box->Text = this->name_film->Text;

    String^ seats = String::Join(", ", selectedSeats);
    ord->place_box->Text = seats;

    String^ rows = String::Join(", ", selectedRows);
    ord->row_box->Text = rows;
    ord->time_box->Text = selectedTime; // Передача выбранного времени

    ord->Show();
    this->Close();
}

// Определение обработчика изменения выделенного элемента в списке
void selectMesto::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    String^ selectedItem = listBox1->SelectedItem->ToString();
    tipTicket = selectedItem;
}

void kurs::selectMesto::selectMesto_Load(System::Object^ sender, System::EventArgs^ e)
{
    selectedSeats = gcnew System::Collections::Generic::List<int>();
    selectedRows = gcnew System::Collections::Generic::List<int>();

    comboBox1->Items->Add("20:00");
    comboBox1->Items->Add("18:00");
    comboBox1->Items->Add("15:00");
    comboBox1->SelectedIndex = 0; // Установка значения по умолчанию
    selectedTime = comboBox1->SelectedItem->ToString(); // Установка начального времени
}

// Обработчик изменения выбранного элемента в comboBox1
void kurs::selectMesto::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    selectedTime = comboBox1->SelectedItem->ToString(); // Сохранение выбранного времени
}
