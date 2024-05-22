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
        case 0:  //  0 - ��� ������ ��� "�������"
            ticketPrice = child;
            break;
        case 1:  //  1 - ��� ������ ��� "��������"
            ticketPrice = man;
            break;
        default:
            break;
        }

        if (button->BackColor == Color::Red)
        {
            selectedCount -= ticketPrice;
            invis_price->Text = selectedCount.ToString();
            selectedSeats->Remove(buttonNumber); // �������� ������ ������ �� ������
            selectedRows->Remove(GetRow(buttonNumber)); // �������� ���� �� ������
        }
        else
        {
            selectedCount += ticketPrice;
            invis_price->Text = selectedCount.ToString();
            selectedSeats->Add(buttonNumber); // ���������� ������ ������ � ������
            selectedRows->Add(GetRow(buttonNumber)); // ���������� ���� � ������
        }

        // ������������ ����� ������
        button->BackColor = (button->BackColor == Color::Red) ? Color::White : Color::Red;
    }
}

int selectMesto::GetRow(int buttonNumber)
{
    // �����������, ��� � ��� 3 �������
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

// ����������� ����������� ������� �� ������ "�����"
void selectMesto::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
    mainForm^ main = gcnew mainForm;
    main->Show();
    this->Close();
}

// ����������� ����������� ������� �� ������ "��������"
void selectMesto::order_select_Click(System::Object^ sender, System::EventArgs^ e)
{
    order^ ord = gcnew order;
    ord->cent = selectedCount;
    ord->film_box->Text = this->name_film->Text;

    String^ seats = String::Join(", ", selectedSeats);
    ord->place_box->Text = seats;

    String^ rows = String::Join(", ", selectedRows);
    ord->row_box->Text = rows;
    ord->time_box->Text = selectedTime; // �������� ���������� �������

    ord->Show();
    this->Close();
}

// ����������� ����������� ��������� ����������� �������� � ������
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
    comboBox1->SelectedIndex = 0; // ��������� �������� �� ���������
    selectedTime = comboBox1->SelectedItem->ToString(); // ��������� ���������� �������
}

// ���������� ��������� ���������� �������� � comboBox1
void kurs::selectMesto::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    selectedTime = comboBox1->SelectedItem->ToString(); // ���������� ���������� �������
}
