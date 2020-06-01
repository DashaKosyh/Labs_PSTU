#pragma once
#include <string>
#include "Calculator.h"
#include "AskForm1.h"

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}






	protected:
private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtA1_1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtA1_2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtA1_3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtA2_3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtA2_2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtA2_1;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtA3_3;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtA3_2;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtA3_1;


	private: System::Windows::Forms::Button^ btnClearAll;
	private: System::Windows::Forms::Button^ btnCalculate;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtHistory;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ numPrec;
	private: System::Windows::Forms::TextBox^ txtB1;
	private: System::Windows::Forms::TextBox^ txtB2;
	private: System::Windows::Forms::TextBox^ txtB3;
	private: System::Windows::Forms::Button^ btnClearHistory;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;






	int OperNum = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtA1_1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtA1_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtA1_3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtA2_3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtA2_2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtA2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtA3_3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtA3_2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtA3_1 = (gcnew System::Windows::Forms::TextBox());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtHistory = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numPrec = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtB1 = (gcnew System::Windows::Forms::TextBox());
			this->txtB2 = (gcnew System::Windows::Forms::TextBox());
			this->txtB3 = (gcnew System::Windows::Forms::TextBox());
			this->btnClearHistory = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrec))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gabriola", 100));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(-42, -38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 247);
			this->label1->TabIndex = 0;
			this->label1->Text = L"{";
			// 
			// txtA1_1
			// 
			this->txtA1_1->BackColor = System::Drawing::Color::Azure;
			this->txtA1_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA1_1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA1_1->Location = System::Drawing::Point(36, 36);
			this->txtA1_1->Name = L"txtA1_1";
			this->txtA1_1->Size = System::Drawing::Size(46, 26);
			this->txtA1_1->TabIndex = 0;
			this->txtA1_1->Tag = L"123";
			this->txtA1_1->Text = L"0";
			this->txtA1_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA1_1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(88, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"X +";
			// 
			// txtA1_2
			// 
			this->txtA1_2->BackColor = System::Drawing::Color::Azure;
			this->txtA1_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA1_2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA1_2->Location = System::Drawing::Point(125, 35);
			this->txtA1_2->Name = L"txtA1_2";
			this->txtA1_2->Size = System::Drawing::Size(48, 26);
			this->txtA1_2->TabIndex = 1;
			this->txtA1_2->Text = L"0";
			this->txtA1_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA1_2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(179, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Y +";
			// 
			// txtA1_3
			// 
			this->txtA1_3->BackColor = System::Drawing::Color::Azure;
			this->txtA1_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA1_3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA1_3->Location = System::Drawing::Point(218, 36);
			this->txtA1_3->Name = L"txtA1_3";
			this->txtA1_3->Size = System::Drawing::Size(46, 26);
			this->txtA1_3->TabIndex = 2;
			this->txtA1_3->Text = L"0";
			this->txtA1_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA1_3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Location = System::Drawing::Point(279, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Z = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Location = System::Drawing::Point(279, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Z = ";
			// 
			// txtA2_3
			// 
			this->txtA2_3->BackColor = System::Drawing::Color::Azure;
			this->txtA2_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA2_3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA2_3->Location = System::Drawing::Point(218, 78);
			this->txtA2_3->Name = L"txtA2_3";
			this->txtA2_3->Size = System::Drawing::Size(46, 26);
			this->txtA2_3->TabIndex = 6;
			this->txtA2_3->Text = L"0";
			this->txtA2_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA2_3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Location = System::Drawing::Point(179, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Y +";
			// 
			// txtA2_2
			// 
			this->txtA2_2->BackColor = System::Drawing::Color::Azure;
			this->txtA2_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA2_2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA2_2->Location = System::Drawing::Point(127, 78);
			this->txtA2_2->Name = L"txtA2_2";
			this->txtA2_2->Size = System::Drawing::Size(46, 26);
			this->txtA2_2->TabIndex = 5;
			this->txtA2_2->Text = L"0";
			this->txtA2_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA2_2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Location = System::Drawing::Point(88, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"X +";
			// 
			// txtA2_1
			// 
			this->txtA2_1->BackColor = System::Drawing::Color::Azure;
			this->txtA2_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA2_1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA2_1->Location = System::Drawing::Point(36, 78);
			this->txtA2_1->Name = L"txtA2_1";
			this->txtA2_1->Size = System::Drawing::Size(46, 26);
			this->txtA2_1->TabIndex = 4;
			this->txtA2_1->Text = L"0";
			this->txtA2_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA2_1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label8->Location = System::Drawing::Point(279, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Z = ";
			// 
			// txtA3_3
			// 
			this->txtA3_3->BackColor = System::Drawing::Color::Azure;
			this->txtA3_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA3_3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA3_3->Location = System::Drawing::Point(218, 121);
			this->txtA3_3->Name = L"txtA3_3";
			this->txtA3_3->Size = System::Drawing::Size(46, 26);
			this->txtA3_3->TabIndex = 10;
			this->txtA3_3->Text = L"0";
			this->txtA3_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA3_3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label9->Location = System::Drawing::Point(179, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Y +";
			// 
			// txtA3_2
			// 
			this->txtA3_2->BackColor = System::Drawing::Color::Azure;
			this->txtA3_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA3_2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA3_2->Location = System::Drawing::Point(125, 121);
			this->txtA3_2->Name = L"txtA3_2";
			this->txtA3_2->Size = System::Drawing::Size(46, 26);
			this->txtA3_2->TabIndex = 9;
			this->txtA3_2->Text = L"0";
			this->txtA3_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA3_2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Location = System::Drawing::Point(88, 127);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"X +";
			// 
			// txtA3_1
			// 
			this->txtA3_1->BackColor = System::Drawing::Color::Azure;
			this->txtA3_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtA3_1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtA3_1->Location = System::Drawing::Point(36, 121);
			this->txtA3_1->Name = L"txtA3_1";
			this->txtA3_1->Size = System::Drawing::Size(46, 26);
			this->txtA3_1->TabIndex = 8;
			this->txtA3_1->Text = L"0";
			this->txtA3_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtA3_1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// btnClearAll
			// 
			this->btnClearAll->BackColor = System::Drawing::Color::LightBlue;
			this->btnClearAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClearAll->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->btnClearAll->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnClearAll->Location = System::Drawing::Point(183, 332);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Size = System::Drawing::Size(162, 40);
			this->btnClearAll->TabIndex = 14;
			this->btnClearAll->Text = L"Очистить поля";
			this->btnClearAll->UseVisualStyleBackColor = false;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &MyForm::btnClearAll_Click);
			// 
			// btnCalculate
			// 
			this->btnCalculate->BackColor = System::Drawing::Color::LightBlue;
			this->btnCalculate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnCalculate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->btnCalculate->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnCalculate->Location = System::Drawing::Point(12, 332);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(117, 40);
			this->btnCalculate->TabIndex = 13;
			this->btnCalculate->Text = L"Вычислить";
			this->btnCalculate->UseVisualStyleBackColor = false;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label11->Location = System::Drawing::Point(530, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 23);
			this->label11->TabIndex = 21;
			this->label11->Text = L"История";
			// 
			// txtHistory
			// 
			this->txtHistory->BackColor = System::Drawing::Color::Azure;
			this->txtHistory->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtHistory->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtHistory->Location = System::Drawing::Point(373, 36);
			this->txtHistory->Multiline = true;
			this->txtHistory->Name = L"txtHistory";
			this->txtHistory->ReadOnly = true;
			this->txtHistory->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtHistory->Size = System::Drawing::Size(397, 289);
			this->txtHistory->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 13));
			this->label12->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label12->Location = System::Drawing::Point(8, 183);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(216, 44);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Округение с точностью до \r\nпосле запятой.\r\n";
			// 
			// numPrec
			// 
			this->numPrec->BackColor = System::Drawing::Color::Azure;
			this->numPrec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numPrec->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->numPrec->Location = System::Drawing::Point(224, 183);
			this->numPrec->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numPrec->Name = L"numPrec";
			this->numPrec->Size = System::Drawing::Size(73, 24);
			this->numPrec->TabIndex = 12;
			this->numPrec->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numPrec->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// txtB1
			// 
			this->txtB1->BackColor = System::Drawing::Color::Azure;
			this->txtB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtB1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtB1->Location = System::Drawing::Point(321, 36);
			this->txtB1->Name = L"txtB1";
			this->txtB1->Size = System::Drawing::Size(46, 26);
			this->txtB1->TabIndex = 3;
			this->txtB1->Text = L"0";
			this->txtB1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// txtB2
			// 
			this->txtB2->BackColor = System::Drawing::Color::Azure;
			this->txtB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtB2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtB2->Location = System::Drawing::Point(321, 78);
			this->txtB2->Name = L"txtB2";
			this->txtB2->Size = System::Drawing::Size(46, 26);
			this->txtB2->TabIndex = 7;
			this->txtB2->Text = L"0";
			this->txtB2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtB2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// txtB3
			// 
			this->txtB3->BackColor = System::Drawing::Color::Azure;
			this->txtB3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtB3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->txtB3->Location = System::Drawing::Point(321, 121);
			this->txtB3->Name = L"txtB3";
			this->txtB3->Size = System::Drawing::Size(46, 26);
			this->txtB3->TabIndex = 11;
			this->txtB3->Text = L"0";
			this->txtB3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtB3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtA1_1_KeyPress);
			// 
			// btnClearHistory
			// 
			this->btnClearHistory->BackColor = System::Drawing::Color::LightBlue;
			this->btnClearHistory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClearHistory->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->btnClearHistory->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->btnClearHistory->Location = System::Drawing::Point(450, 332);
			this->btnClearHistory->Name = L"btnClearHistory";
			this->btnClearHistory->Size = System::Drawing::Size(246, 40);
			this->btnClearHistory->TabIndex = 24;
			this->btnClearHistory->Text = L"Очистить историю";
			this->btnClearHistory->UseVisualStyleBackColor = false;
			this->btnClearHistory->Click += gcnew System::EventHandler(this, &MyForm::btnClearHistory_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label13->Location = System::Drawing::Point(88, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(199, 23);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Введите коэффиценты";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 13));
			this->label14->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label14->Location = System::Drawing::Point(303, 183);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 22);
			this->label14->TabIndex = 26;
			this->label14->Text = L"знаков";
			// 
			// MyForm
			// 
			this->AcceptButton = this->btnCalculate;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->CancelButton = this->btnClearAll;
			this->ClientSize = System::Drawing::Size(782, 376);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->btnClearHistory);
			this->Controls->Add(this->txtB3);
			this->Controls->Add(this->txtB2);
			this->Controls->Add(this->txtB1);
			this->Controls->Add(this->numPrec);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtHistory);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->btnClearAll);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtA3_3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtA3_2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtA3_1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtA2_3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtA2_2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtA2_1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtA1_3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtA1_2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtA1_1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPrec))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: bool IsEmpty() {
	bool tmp = true;
	if (txtA1_1->Text->Length == 0) tmp = false;
	if (txtA1_2->Text->Length == 0) tmp = false;
	if (txtA1_3->Text->Length == 0) tmp = false;
	if (txtA2_1->Text->Length == 0) tmp = false;
	if (txtA2_2->Text->Length == 0) tmp = false;
	if (txtA2_3->Text->Length == 0) tmp = false;
	if (txtA3_1->Text->Length == 0) tmp = false;
	if (txtA3_2->Text->Length == 0) tmp = false;
	if (txtA3_3->Text->Length == 0) tmp = false;
	if (txtB1->Text->Length == 0) tmp = false;
	if (txtB2->Text->Length == 0) tmp = false;
	if (txtB3->Text->Length == 0) tmp = false;

	return tmp;
}

private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!IsEmpty())
	{
		MessageBox::Show("Поле не может быть пустым!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	OperNum += 1;
	txtHistory->AppendText("Вычисление: ");
	txtHistory->AppendText(Convert::ToString(OperNum));
	txtHistory->AppendText("  Точность: " + Convert::ToString(numPrec->Value) + " знака после запятой");
	txtHistory->AppendText(Environment::NewLine);
	txtHistory->AppendText("==================");
	txtHistory->AppendText(Environment::NewLine);
	//////////// 1 строка
	if (Convert::ToDouble(txtA1_1->Text) != 0) {
		txtHistory->AppendText(txtA1_1->Text + "x ");
	}
	if (Convert::ToDouble(txtA1_1->Text) != 0) {

		if (Convert::ToDouble(txtA1_2->Text) > 0) {
			txtHistory->AppendText(" + ");
		}
	}
	if (Convert::ToDouble(txtA1_2->Text) != 0) {		
 
		txtHistory->AppendText(txtA1_2->Text + "y ");
	}
	if (Convert::ToDouble(txtA1_2->Text) != 0) {
		if (Convert::ToDouble(txtA1_3->Text) > 0) {
			txtHistory->AppendText(" + ");
		}
	}
	if (Convert::ToDouble(txtA1_3->Text) != 0) {
		
		txtHistory->AppendText(txtA1_3->Text + "z ");
	}
	if ((Convert::ToDouble(txtA1_3->Text) != 0) || (Convert::ToDouble(txtA1_2->Text) != 0) || (Convert::ToDouble(txtA1_1->Text) != 0))
	{
		txtHistory->AppendText(" = " + txtB1->Text);
		txtHistory->AppendText(Environment::NewLine);
	}
	////////// 2 строка
	if (Convert::ToDouble(txtA2_1->Text) != 0) {
		txtHistory->AppendText(txtA2_1->Text + "x ");
	}
	if (Convert::ToDouble(txtA2_1->Text) != 0) {

		if (Convert::ToDouble(txtA2_2->Text) > 0) {
			txtHistory->AppendText(" + ");
		}
	}
	if (Convert::ToDouble(txtA2_2->Text) != 0) {
		txtHistory->AppendText(txtA2_2->Text + "y ");
	}
	if (Convert::ToDouble(txtA2_2->Text) != 0) {

		if (Convert::ToDouble(txtA2_3->Text) > 0) {
			txtHistory->AppendText(" + ");
		}
	}
	if (Convert::ToDouble(txtA2_3->Text) != 0) {
		
		txtHistory->AppendText(txtA2_3->Text + "z ");
	}
	if ((Convert::ToDouble(txtA2_3->Text) != 0) || (Convert::ToDouble(txtA2_2->Text) != 0) || (Convert::ToDouble(txtA2_1->Text) != 0))
	{
		txtHistory->AppendText("= " + txtB2->Text);
		txtHistory->AppendText(Environment::NewLine);
	}
	//////////// 3 строка
	if (Convert::ToDouble(txtA3_1->Text) != 0) {
		txtHistory->AppendText(txtA3_1->Text + "x "); 
	}
	if (Convert::ToDouble(txtA3_1->Text) != 0) {

		if (Convert::ToDouble(txtA3_2->Text) > 0) {
			txtHistory->AppendText(" + ");
		}
	}
	if (Convert::ToDouble(txtA3_2->Text) != 0) {
		
		txtHistory->AppendText(txtA3_2->Text + "y ");
	}
	if (Convert::ToDouble(txtA3_2->Text) != 0) {

		if (Convert::ToDouble(txtA3_3->Text) > 0) {
			txtHistory->AppendText(" + ");
		}
	}
	if (Convert::ToDouble(txtA3_3->Text) != 0) {
		
		txtHistory->AppendText(txtA3_3->Text + "z ");
	}
	if ((Convert::ToDouble(txtA3_3->Text) != 0) || (Convert::ToDouble(txtA3_2->Text) != 0) || (Convert::ToDouble(txtA3_1->Text) != 0))
	{
		txtHistory->AppendText("= " + txtB3->Text);
		txtHistory->AppendText(Environment::NewLine);
	}
	///////////
	
	txtHistory->AppendText("------------------");
	txtHistory->AppendText(Environment::NewLine);
	
	//Call Calculate
	Calculate();

	txtHistory->AppendText(Environment::NewLine);
	txtHistory->AppendText(Environment::NewLine);
}
private: System::Void btnClearAll_Click(System::Object^ sender, System::EventArgs^ e) {
	txtA1_1->Text = "0";
	txtA1_2->Text = "0";
	txtA1_3->Text = "0";
	txtB1->Text = "0";

	txtA2_1->Text = "0";
	txtA2_2->Text = "0";
	txtA2_3->Text = "0";
	txtB2->Text = "0";

	txtA3_1->Text = "0";
	txtA3_2->Text = "0";
	txtA3_3->Text = "0";
	txtB3->Text = "0";

	txtA1_1->Focus();
}

private: void Calculate() {
	
	Calculator calculator;

	calculator.SetA1(Convert::ToDouble(txtA1_1->Text), Convert::ToDouble(txtA1_2->Text),
		Convert::ToDouble(txtA1_3->Text));
	calculator.SetA2(Convert::ToDouble(txtA2_1->Text),Convert::ToDouble(txtA2_2->Text),
		Convert::ToDouble(txtA2_3->Text));
	calculator.SetA3(Convert::ToDouble(txtA3_1->Text), Convert::ToDouble(txtA3_2->Text),
		Convert::ToDouble(txtA3_3->Text));
	calculator.SetB(Convert::ToDouble(txtB1->Text),Convert::ToDouble(txtB2->Text),
		Convert::ToDouble(txtB3->Text));

	calculator.Calculate();
	if (calculator.GetNeedParameters())
	{
		AskForm1^ frm = gcnew AskForm1();
		frm->ShowDialog();
		double N = Convert::ToDouble(frm->textASK_P->Text);
		int SelIdx = frm->cmbXYZ->SelectedIndex;
		delete frm;
		calculator.CalculateWithParameters(N, SelIdx);
	}

	if (calculator.GetIsSolution())
	{
		txtHistory->AppendText("X = " + Math::Round(calculator.GetX(),
			Convert::ToInt16(numPrec->Value), MidpointRounding::AwayFromZero).ToString());
		txtHistory->AppendText(Environment::NewLine);
		txtHistory->AppendText("Y =" + Math::Round(calculator.GetY(),
			Convert::ToInt16(numPrec->Value), MidpointRounding::AwayFromZero).ToString());
		txtHistory->AppendText(Environment::NewLine);
		txtHistory->AppendText("Z = " + Math::Round(calculator.GetZ(),
			Convert::ToInt16(numPrec->Value), MidpointRounding::AwayFromZero).ToString());
		txtHistory->AppendText(Environment::NewLine);
	}
	else
	{
		txtHistory->AppendText("Нет решений");
	}

}

private: System::Void btnClearHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	txtHistory->Text = "";
}

private: System::Void txtA1_1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsDigit(e->KeyChar))
		return;
	if (e->KeyChar == (char)Keys::Back)
		return;
	if (e->KeyChar == '-')
		return;
	if (e->KeyChar == ',')
		return;

	e->Handled = true;
}
};

}
