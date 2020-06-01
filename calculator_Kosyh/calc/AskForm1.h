#pragma once

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AskForm1
	/// </summary>
	public ref class AskForm1 : public System::Windows::Forms::Form
	{
	public:
		AskForm1(void)
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
		~AskForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ComboBox^ cmbXYZ;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textASK_P;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cmbXYZ = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textASK_P = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cmbXYZ
			// 
			this->cmbXYZ->BackColor = System::Drawing::Color::LightBlue;
			this->cmbXYZ->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cmbXYZ->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbXYZ->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbXYZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->cmbXYZ->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->cmbXYZ->FormattingEnabled = true;
			this->cmbXYZ->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"X", L"Y", L"Z" });
			this->cmbXYZ->Location = System::Drawing::Point(82, 88);
			this->cmbXYZ->Name = L"cmbXYZ";
			this->cmbXYZ->Size = System::Drawing::Size(100, 32);
			this->cmbXYZ->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(218, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"=";
			// 
			// textASK_P
			// 
			this->textASK_P->BackColor = System::Drawing::Color::Azure;
			this->textASK_P->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textASK_P->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->textASK_P->Location = System::Drawing::Point(274, 87);
			this->textASK_P->Name = L"textASK_P";
			this->textASK_P->Size = System::Drawing::Size(156, 32);
			this->textASK_P->TabIndex = 2;
			this->textASK_P->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textASK_P->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AskForm1::textASK_P_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(4, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(467, 66);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Заданная система уравнений имеет множество решений.\r\nДля нахождения частного реше"
				L"ния выберите переменную\r\nи задайте ей значение.\r\n";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15));
			this->button1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Location = System::Drawing::Point(174, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Задать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AskForm1::button1_Click);
			// 
			// AskForm1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(475, 190);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textASK_P);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbXYZ);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AskForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Выберите значение";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AskForm1::AskForm1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AskForm1::AskForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AskForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		cmbXYZ->SelectedIndex = 0;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void AskForm1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (textASK_P->Text->Length == 0)
	{
		MessageBox::Show("Не задано значение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		e->Cancel = true;
	}
	
}
private: System::Void textASK_P_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsDigit(e->KeyChar))
		return;
	if (e->KeyChar == (char)Keys::Back)
		return;
	if (e->KeyChar == ',')
		return;

	e->Handled = true;
}
};

}
