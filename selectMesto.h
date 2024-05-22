#pragma once
#include "order.h"
#include "iostream"

namespace kurs 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ selectMesto
	/// </summary>
	public ref class selectMesto : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Label^ invis_price;
	private: System::Windows::Forms::Label^ rad1;
	private: System::Windows::Forms::Label^ rad2;
	private: System::Windows::Forms::Label^ rad3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ film_label;
	public: System::Windows::Forms::Label^ name_film;


	public:
		int selectedCount = 0;
		int child = 100;
		int man = 200;
		int lastButtonNumber = 0;
		String^ selectedTime;
		System::Collections::Generic::List<int>^ selectedSeats;
		System::Collections::Generic::List<int>^ selectedRows;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	public:
		String^ tipTicket;

	public:
		selectMesto(void)
		{
			InitializeComponent();
			selectedSeats = gcnew System::Collections::Generic::List<int>();
			selectedRows = gcnew System::Collections::Generic::List<int>();
			selectedTime = "";
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~selectMesto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ back_select;
	private: System::Windows::Forms::Button^ order_select;
	private: System::Windows::Forms::ListBox^ listBox1;

	void HandleButtonClick(System::Windows::Forms::Button^ button, String^ bilet, int buttonNumber);
	void button1_Click(System::Object^ sender, System::EventArgs^ e);
	void button2_Click(System::Object^ sender, System::EventArgs^ e);
	void button3_Click(System::Object^ sender, System::EventArgs^ e);
	void button4_Click(System::Object^ sender, System::EventArgs^ e);
	void button5_Click(System::Object^ sender, System::EventArgs^ e);
	void button6_Click(System::Object^ sender, System::EventArgs^ e);
	void button7_Click(System::Object^ sender, System::EventArgs^ e);
	void button8_Click(System::Object^ sender, System::EventArgs^ e);
	void button9_Click(System::Object^ sender, System::EventArgs^ e);
	void button10_Click(System::Object^ sender, System::EventArgs^ e);
	void order_select_Click(System::Object^ sender, System::EventArgs^ e);
	void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	void selectMesto_Load(System::Object^ sender, System::EventArgs^ e);
	void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	int GetRow(int buttonNumber);

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(selectMesto::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->back_select = (gcnew System::Windows::Forms::Button());
			this->order_select = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->invis_price = (gcnew System::Windows::Forms::Label());
			this->rad1 = (gcnew System::Windows::Forms::Label());
			this->rad2 = (gcnew System::Windows::Forms::Label());
			this->rad3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->film_label = (gcnew System::Windows::Forms::Label());
			this->name_film = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(68, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &selectMesto::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(145, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &selectMesto::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(217, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &selectMesto::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(68, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &selectMesto::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(145, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 43);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &selectMesto::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(217, 175);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 43);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &selectMesto::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(68, 243);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 43);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &selectMesto::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(145, 243);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 43);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &selectMesto::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Chakra Petch Medium", 12, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(217, 243);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 43);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &selectMesto::button9_Click);
			// 
			// back_select
			// 
			this->back_select->BackColor = System::Drawing::Color::White;
			this->back_select->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->back_select->Location = System::Drawing::Point(37, 329);
			this->back_select->Name = L"back_select";
			this->back_select->Size = System::Drawing::Size(68, 33);
			this->back_select->TabIndex = 9;
			this->back_select->Text = L"back";
			this->back_select->UseVisualStyleBackColor = false;
			this->back_select->Click += gcnew System::EventHandler(this, &selectMesto::button10_Click);
			// 
			// order_select
			// 
			this->order_select->BackColor = System::Drawing::Color::White;
			this->order_select->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->order_select->Location = System::Drawing::Point(412, 329);
			this->order_select->Name = L"order_select";
			this->order_select->Size = System::Drawing::Size(68, 33);
			this->order_select->TabIndex = 10;
			this->order_select->Text = L"order";
			this->order_select->UseVisualStyleBackColor = false;
			this->order_select->Click += gcnew System::EventHandler(this, &selectMesto::order_select_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Chakra Petch SemiBold", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"childlike", L"adult" });
			this->listBox1->Location = System::Drawing::Point(334, 191);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(146, 48);
			this->listBox1->TabIndex = 11;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &selectMesto::listBox1_SelectedIndexChanged);
			// 
			// invis_price
			// 
			this->invis_price->AutoSize = true;
			this->invis_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->invis_price->ForeColor = System::Drawing::SystemColors::Control;
			this->invis_price->Location = System::Drawing::Point(456, 256);
			this->invis_price->Name = L"invis_price";
			this->invis_price->Size = System::Drawing::Size(19, 20);
			this->invis_price->TabIndex = 13;
			this->invis_price->Text = L"0";
			// 
			// rad1
			// 
			this->rad1->AutoSize = true;
			this->rad1->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rad1->ForeColor = System::Drawing::SystemColors::Control;
			this->rad1->Location = System::Drawing::Point(31, 115);
			this->rad1->Name = L"rad1";
			this->rad1->Size = System::Drawing::Size(22, 35);
			this->rad1->TabIndex = 14;
			this->rad1->Text = L"1";
			// 
			// rad2
			// 
			this->rad2->AutoSize = true;
			this->rad2->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->rad2->ForeColor = System::Drawing::SystemColors::Control;
			this->rad2->Location = System::Drawing::Point(31, 178);
			this->rad2->Name = L"rad2";
			this->rad2->Size = System::Drawing::Size(26, 35);
			this->rad2->TabIndex = 15;
			this->rad2->Text = L"2";
			// 
			// rad3
			// 
			this->rad3->AutoSize = true;
			this->rad3->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->rad3->ForeColor = System::Drawing::SystemColors::Control;
			this->rad3->Location = System::Drawing::Point(31, 246);
			this->rad3->Name = L"rad3";
			this->rad3->Size = System::Drawing::Size(26, 35);
			this->rad3->TabIndex = 16;
			this->rad3->Text = L"3";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.999999F, System::Drawing::FontStyle::Bold));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(334, 116);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(146, 23);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &selectMesto::comboBox1_SelectedIndexChanged);
			// 
			// film_label
			// 
			this->film_label->AutoSize = true;
			this->film_label->Font = (gcnew System::Drawing::Font(L"Chakra Petch SemiBold", 12, System::Drawing::FontStyle::Bold));
			this->film_label->ForeColor = System::Drawing::SystemColors::Control;
			this->film_label->Location = System::Drawing::Point(68, 9);
			this->film_label->Name = L"film_label";
			this->film_label->Size = System::Drawing::Size(48, 29);
			this->film_label->TabIndex = 18;
			this->film_label->Text = L"Film:";
			// 
			// name_film
			// 
			this->name_film->AutoSize = true;
			this->name_film->Font = (gcnew System::Drawing::Font(L"Chakra Petch SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_film->ForeColor = System::Drawing::SystemColors::Control;
			this->name_film->Location = System::Drawing::Point(122, 9);
			this->name_film->Name = L"name_film";
			this->name_film->Size = System::Drawing::Size(53, 29);
			this->name_film->TabIndex = 19;
			this->name_film->Text = L"Ќет";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(68, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(198, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Chakra Petch SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(329, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 29);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Category";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Chakra Petch SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(331, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Session time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Chakra Petch SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(331, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 29);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Ticket prices";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(283, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 35);
			this->label4->TabIndex = 26;
			this->label4->Text = L"3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(283, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 35);
			this->label5->TabIndex = 25;
			this->label5->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(287, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 35);
			this->label6->TabIndex = 24;
			this->label6->Text = L"1";
			// 
			// selectMesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(507, 396);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->name_film);
			this->Controls->Add(this->film_label);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->rad3);
			this->Controls->Add(this->rad2);
			this->Controls->Add(this->rad1);
			this->Controls->Add(this->invis_price);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->order_select);
			this->Controls->Add(this->back_select);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(523, 435);
			this->MinimumSize = System::Drawing::Size(523, 435);
			this->Name = L"selectMesto";
			this->Text = L"selectMesto";
			this->Load += gcnew System::EventHandler(this, &selectMesto::selectMesto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
};
}

