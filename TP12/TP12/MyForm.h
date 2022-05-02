#pragma once
#include "string.h"
#include "fstream"
#include "guide.h"

namespace TP12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ созданиеФайлаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обработкаФайлаToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->созданиеФайлаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обработкаФайлаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->созданиеФайлаToolStripMenuItem,
					this->обработкаФайлаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(394, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// созданиеФайлаToolStripMenuItem
			// 
			this->созданиеФайлаToolStripMenuItem->Name = L"созданиеФайлаToolStripMenuItem";
			this->созданиеФайлаToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->созданиеФайлаToolStripMenuItem->Text = L"Создание файла";
			this->созданиеФайлаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::созданиеФайлаToolStripMenuItem_Click);
			// 
			// обработкаФайлаToolStripMenuItem
			// 
			this->обработкаФайлаToolStripMenuItem->Name = L"обработкаФайлаToolStripMenuItem";
			this->обработкаФайлаToolStripMenuItem->Size = System::Drawing::Size(117, 20);
			this->обработкаФайлаToolStripMenuItem->Text = L"Обработка файла";
			this->обработкаФайлаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обработкаФайлаToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(370, 200);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 26);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Создать файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 233);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 26);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Выбрать путь к файлу ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(31, 143);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(317, 84);
			this->textBox2->TabIndex = 4;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(31, 83);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(114, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(176, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 20);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Найти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введите фамилию:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Найденная информация:";
			this->label2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 271);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ FileName;
		String^ path;
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void обработкаФайлаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Visible = false;
			button1->Visible = false;
			button2->Visible = false;
			textBox2->Visible = true;
			textBox3->Visible = true;
			button3->Visible = true;
			label1->Visible = true;
			label2->Visible = true;
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			//char[50] buffer;
			int line = search_train(FileName, textBox3->Text);
			StreamReader^ file = File::OpenText(FileName);
			for (int i = 0; i < line; i++)
				file->ReadLine();
			textBox2->Text = file->ReadLine() + "\r\n";
		}
		private: System::Void созданиеФайлаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Visible = true;
			button1->Visible = true;
			button2->Visible = true;
			textBox2->Visible = false;
			textBox3->Visible = false;
			button3->Visible = false;
			label1->Visible = false;
			label2->Visible = false;
		}
		private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		}
		private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			StreamWriter^ file = gcnew StreamWriter(FileName, true);
			file->Write(textBox1->Text);
			file->Close();
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			FileName = "\\WORKER.dat";
			folderBrowserDialog1->ShowDialog();
			path = folderBrowserDialog1->SelectedPath;
			FileName = path + FileName;
			try {
				File^ file;
				file->Delete(FileName);
			}catch(Exception^ e){}

		}
};
}
