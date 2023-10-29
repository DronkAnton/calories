#pragma once

namespace Project14 {

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
	private: System::Windows::Forms::Label^ label_height;
	protected:
	private: System::Windows::Forms::Label^ label_weight;
	private: System::Windows::Forms::Label^ label_age;
	private: System::Windows::Forms::Label^ label_result;

	private: System::Windows::Forms::Button^ BTN_result;
	private: System::Windows::Forms::TextBox^ TB_height;
	private: System::Windows::Forms::TextBox^ TB_weight;
	private: System::Windows::Forms::TextBox^ TB_age;
	private: System::Windows::Forms::Label^ label_gender;
	private: System::Windows::Forms::Button^ BTN_exit;
	private: System::Windows::Forms::CheckBox^ CB_W;
	private: System::Windows::Forms::CheckBox^ CB_M;

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
			this->label_height = (gcnew System::Windows::Forms::Label());
			this->label_weight = (gcnew System::Windows::Forms::Label());
			this->label_age = (gcnew System::Windows::Forms::Label());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->BTN_result = (gcnew System::Windows::Forms::Button());
			this->TB_height = (gcnew System::Windows::Forms::TextBox());
			this->TB_weight = (gcnew System::Windows::Forms::TextBox());
			this->TB_age = (gcnew System::Windows::Forms::TextBox());
			this->label_gender = (gcnew System::Windows::Forms::Label());
			this->BTN_exit = (gcnew System::Windows::Forms::Button());
			this->CB_W = (gcnew System::Windows::Forms::CheckBox());
			this->CB_M = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label_height
			// 
			this->label_height->AutoSize = true;
			this->label_height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label_height->ForeColor = System::Drawing::Color::White;
			this->label_height->Location = System::Drawing::Point(94, 143);
			this->label_height->Name = L"label_height";
			this->label_height->Size = System::Drawing::Size(146, 25);
			this->label_height->TabIndex = 0;
			this->label_height->Text = L"Введите рост";
			// 
			// label_weight
			// 
			this->label_weight->AutoSize = true;
			this->label_weight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label_weight->ForeColor = System::Drawing::Color::White;
			this->label_weight->Location = System::Drawing::Point(105, 190);
			this->label_weight->Name = L"label_weight";
			this->label_weight->Size = System::Drawing::Size(135, 25);
			this->label_weight->TabIndex = 1;
			this->label_weight->Text = L"Введите вес";
			// 
			// label_age
			// 
			this->label_age->AutoSize = true;
			this->label_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label_age->ForeColor = System::Drawing::Color::White;
			this->label_age->Location = System::Drawing::Point(60, 237);
			this->label_age->Name = L"label_age";
			this->label_age->Size = System::Drawing::Size(180, 25);
			this->label_age->TabIndex = 2;
			this->label_age->Text = L"Введите возраст";
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label_result->ForeColor = System::Drawing::Color::White;
			this->label_result->Location = System::Drawing::Point(389, 314);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(24, 25);
			this->label_result->TabIndex = 3;
			this->label_result->Text = L"0";
			// 
			// BTN_result
			// 
			this->BTN_result->BackColor = System::Drawing::Color::DarkGray;
			this->BTN_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->BTN_result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->BTN_result->Location = System::Drawing::Point(312, 360);
			this->BTN_result->Name = L"BTN_result";
			this->BTN_result->Size = System::Drawing::Size(184, 52);
			this->BTN_result->TabIndex = 6;
			this->BTN_result->Text = L"Рассчитать";
			this->BTN_result->UseVisualStyleBackColor = false;
			this->BTN_result->Click += gcnew System::EventHandler(this, &MyForm::BTN_result_Click);
			// 
			// TB_height
			// 
			this->TB_height->BackColor = System::Drawing::Color::DarkGray;
			this->TB_height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->TB_height->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->TB_height->Location = System::Drawing::Point(258, 137);
			this->TB_height->Name = L"TB_height";
			this->TB_height->Size = System::Drawing::Size(100, 31);
			this->TB_height->TabIndex = 7;
			// 
			// TB_weight
			// 
			this->TB_weight->BackColor = System::Drawing::Color::DarkGray;
			this->TB_weight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->TB_weight->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->TB_weight->Location = System::Drawing::Point(258, 187);
			this->TB_weight->Name = L"TB_weight";
			this->TB_weight->Size = System::Drawing::Size(100, 31);
			this->TB_weight->TabIndex = 8;
			// 
			// TB_age
			// 
			this->TB_age->BackColor = System::Drawing::Color::DarkGray;
			this->TB_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->TB_age->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->TB_age->Location = System::Drawing::Point(258, 234);
			this->TB_age->Name = L"TB_age";
			this->TB_age->Size = System::Drawing::Size(100, 31);
			this->TB_age->TabIndex = 9;
			// 
			// label_gender
			// 
			this->label_gender->AutoSize = true;
			this->label_gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->label_gender->ForeColor = System::Drawing::Color::White;
			this->label_gender->Location = System::Drawing::Point(389, 143);
			this->label_gender->Name = L"label_gender";
			this->label_gender->Size = System::Drawing::Size(153, 25);
			this->label_gender->TabIndex = 11;
			this->label_gender->Text = L"Выберите пол";
			// 
			// BTN_exit
			// 
			this->BTN_exit->BackColor = System::Drawing::Color::DarkGray;
			this->BTN_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->BTN_exit->Location = System::Drawing::Point(12, 12);
			this->BTN_exit->Name = L"BTN_exit";
			this->BTN_exit->Size = System::Drawing::Size(35, 35);
			this->BTN_exit->TabIndex = 12;
			this->BTN_exit->Text = L"X";
			this->BTN_exit->UseVisualStyleBackColor = true;
			this->BTN_exit->Click += gcnew System::EventHandler(this, &MyForm::BTN_exit_Click);
			// 
			// CB_W
			// 
			this->CB_W->AutoSize = true;
			this->CB_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->CB_W->ForeColor = System::Drawing::Color::White;
			this->CB_W->Location = System::Drawing::Point(394, 187);
			this->CB_W->Name = L"CB_W";
			this->CB_W->Size = System::Drawing::Size(120, 29);
			this->CB_W->TabIndex = 13;
			this->CB_W->Text = L"Женский";
			this->CB_W->UseVisualStyleBackColor = true;
			// 
			// CB_M
			// 
			this->CB_M->AutoSize = true;
			this->CB_M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->CB_M->ForeColor = System::Drawing::Color::White;
			this->CB_M->Location = System::Drawing::Point(394, 222);
			this->CB_M->Name = L"CB_M";
			this->CB_M->Size = System::Drawing::Size(121, 29);
			this->CB_M->TabIndex = 14;
			this->CB_M->Text = L"Мужской";
			this->CB_M->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->ClientSize = System::Drawing::Size(629, 470);
			this->Controls->Add(this->CB_M);
			this->Controls->Add(this->CB_W);
			this->Controls->Add(this->BTN_exit);
			this->Controls->Add(this->label_gender);
			this->Controls->Add(this->TB_age);
			this->Controls->Add(this->TB_weight);
			this->Controls->Add(this->TB_height);
			this->Controls->Add(this->BTN_result);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->label_age);
			this->Controls->Add(this->label_weight);
			this->Controls->Add(this->label_height);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BTN_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

private: System::Void BTN_result_Click(System::Object^ sender, System::EventArgs^ e) {
	int height = System::Convert::ToInt32(this->TB_height->Text);
	int weight = System::Convert::ToInt32(this->TB_weight->Text);
	int age = System::Convert::ToInt32(this->TB_age->Text);
	if (CB_W->Checked && CB_M -> Checked) {
		this->label_result->Text = "Ошибка!";
	}
	else if (CB_W->Checked) {

		this->label_result->Text = System::Convert::ToString(655 + (9.6 * weight) + (1.8 * height) - (4.7 * age));
	}
	else if (CB_M->Checked) {
		this->label_result->Text = System::Convert::ToString(66 + (13.7 * weight) + (5 * height) - (6.8 * age));

	}
}
};
}
