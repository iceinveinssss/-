#pragma once



namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ order
	/// </summary>
	public ref class order : public System::Windows::Forms::Form
	{
	private:
		
	public:
		int cent = 0;
	
	public:
		int buttonNumber = 0;
		
		order(void)
		{
			InitializeComponent();
			
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~order()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ time_box;
	private: System::Windows::Forms::Label^ cost;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ confirm_button;

	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::TextBox^ film_box;
	public: System::Windows::Forms::TextBox^ row_box;
	public: System::Windows::Forms::TextBox^ place_box;
	private: System::Windows::Forms::TextBox^ result_box;
	public:


	void cost_Click(System::Object^ sender, System::EventArgs^ e);
	void order_Load(System::Object^ sender, System::EventArgs^ e);
	void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
	void button2_Click(System::Object^ sender, System::EventArgs^ e);
	void time_box_TextChanged(System::Object^ sender, System::EventArgs^ e);
	void button1_Click(System::Object^ sender, System::EventArgs^ e);

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cost = (gcnew System::Windows::Forms::Label());
			this->result_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->confirm_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->film_box = (gcnew System::Windows::Forms::TextBox());
			this->row_box = (gcnew System::Windows::Forms::TextBox());
			this->place_box = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->time_box = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cost
			// 
			this->cost->AutoSize = true;
			this->cost->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->cost->ForeColor = System::Drawing::SystemColors::Control;
			this->cost->Location = System::Drawing::Point(61, 211);
			this->cost->Name = L"cost";
			this->cost->Size = System::Drawing::Size(73, 35);
			this->cost->TabIndex = 0;
			this->cost->Text = L"Result";
			this->cost->Click += gcnew System::EventHandler(this, &order::cost_Click);
			// 
			// result_box
			// 
			this->result_box->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->result_box->Location = System::Drawing::Point(140, 213);
			this->result_box->Multiline = true;
			this->result_box->Name = L"result_box";
			this->result_box->ReadOnly = true;
			this->result_box->Size = System::Drawing::Size(120, 27);
			this->result_box->TabIndex = 1;
			this->result_box->TextChanged += gcnew System::EventHandler(this, &order::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(117, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 49);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Your ticket";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(77, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 35);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Film : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(77, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 35);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Row :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(65, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 35);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Place :";
			// 
			// confirm_button
			// 
			this->confirm_button->BackColor = System::Drawing::Color::White;
			this->confirm_button->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_button->Location = System::Drawing::Point(232, 281);
			this->confirm_button->Name = L"confirm_button";
			this->confirm_button->Size = System::Drawing::Size(91, 35);
			this->confirm_button->TabIndex = 6;
			this->confirm_button->Text = L"confirm";
			this->confirm_button->UseVisualStyleBackColor = false;
			this->confirm_button->Click += gcnew System::EventHandler(this, &order::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->button2->Location = System::Drawing::Point(48, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &order::button2_Click);
			// 
			// film_box
			// 
			this->film_box->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->film_box->Location = System::Drawing::Point(140, 81);
			this->film_box->Name = L"film_box";
			this->film_box->ReadOnly = true;
			this->film_box->Size = System::Drawing::Size(120, 27);
			this->film_box->TabIndex = 8;
			// 
			// row_box
			// 
			this->row_box->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->row_box->Location = System::Drawing::Point(140, 148);
			this->row_box->Name = L"row_box";
			this->row_box->ReadOnly = true;
			this->row_box->Size = System::Drawing::Size(120, 27);
			this->row_box->TabIndex = 9;
			this->row_box->TextChanged += gcnew System::EventHandler(this, &order::row_box_TextChanged);
			// 
			// place_box
			// 
			this->place_box->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->place_box->Location = System::Drawing::Point(140, 114);
			this->place_box->Multiline = true;
			this->place_box->Name = L"place_box";
			this->place_box->ReadOnly = true;
			this->place_box->Size = System::Drawing::Size(120, 28);
			this->place_box->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 14.25F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(9, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 35);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Session time";
			// 
			// time_box
			// 
			this->time_box->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 11.25F));
			this->time_box->Location = System::Drawing::Point(140, 180);
			this->time_box->Name = L"time_box";
			this->time_box->ReadOnly = true;
			this->time_box->Size = System::Drawing::Size(120, 27);
			this->time_box->TabIndex = 12;
			this->time_box->TextChanged += gcnew System::EventHandler(this, &order::time_box_TextChanged);
			// 
			// order
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(370, 354);
			this->Controls->Add(this->time_box);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->place_box);
			this->Controls->Add(this->row_box);
			this->Controls->Add(this->film_box);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->confirm_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->result_box);
			this->Controls->Add(this->cost);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(386, 393);
			this->MinimumSize = System::Drawing::Size(386, 393);
			this->Name = L"order";
			this->Text = L"order";
			this->Load += gcnew System::EventHandler(this, &order::order_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void row_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
