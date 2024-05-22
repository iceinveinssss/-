#pragma once
#include "selectMesto.h"

namespace kurs 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{

	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ film_1;
	private: System::Windows::Forms::Label^ film_2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ film_3;





	private: System::Windows::Forms::PictureBox^ pictureBox3;

	void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
	void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
	void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e);
	void mainForm_Load(System::Object^ sender, System::EventArgs^ e);
	void openSelectMesto(String^ filmName);

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->film_1 = (gcnew System::Windows::Forms::Label());
			this->film_2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->film_3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(50, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &mainForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(258, 97);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(196, 287);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &mainForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(501, 113);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(160, 245);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &mainForm::pictureBox3_Click);
			// 
			// film_1
			// 
			this->film_1->AutoSize = true;
			this->film_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->film_1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->film_1->Location = System::Drawing::Point(47, 97);
			this->film_1->Name = L"film_1";
			this->film_1->Size = System::Drawing::Size(182, 13);
			this->film_1->TabIndex = 3;
			this->film_1->Text = L"The Place be under the pines | Hall 1";
			this->film_1->Click += gcnew System::EventHandler(this, &mainForm::film_1_Click);
			// 
			// film_2
			// 
			this->film_2->AutoSize = true;
			this->film_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->film_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->film_2->Location = System::Drawing::Point(255, 81);
			this->film_2->Name = L"film_2";
			this->film_2->Size = System::Drawing::Size(67, 13);
			this->film_2->TabIndex = 4;
			this->film_2->Text = L"Drive | Hall 2";
			this->film_2->Click += gcnew System::EventHandler(this, &mainForm::film_2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(50, 24);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(289, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-1, 432);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(712, 75);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Chakra Petch", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(513, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 59);
			this->label1->TabIndex = 8;
			this->label1->Text = L" 04.05";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(68, 369);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(111, 28);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &mainForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(293, 390);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(111, 28);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &mainForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(525, 364);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(111, 28);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 11;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &mainForm::pictureBox8_Click);
			// 
			// film_3
			// 
			this->film_3->AutoSize = true;
			this->film_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->film_3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->film_3->Location = System::Drawing::Point(498, 97);
			this->film_3->Name = L"film_3";
			this->film_3->Size = System::Drawing::Size(72, 13);
			this->film_3->TabIndex = 5;
			this->film_3->Text = L"Barbie | Hall 3";
			this->film_3->Click += gcnew System::EventHandler(this, &mainForm::film_3_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(705, 496);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->film_3);
			this->Controls->Add(this->film_2);
			this->Controls->Add(this->film_1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(721, 535);
			this->MinimumSize = System::Drawing::Size(721, 535);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void film_1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}

	private: System::Void film_2_Click(System::Object^ sender, System::EventArgs^ e)
	{	
	}
	private: System::Void film_3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}	
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		openSelectMesto(film_1->Text);
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		openSelectMesto(film_2->Text);
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		openSelectMesto(film_3->Text);
	}
};
}
