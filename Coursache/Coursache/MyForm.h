#include "header.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <Windows.h>
#include <list>
#include <locale>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>


#pragma once

 std::vector<CDrug> drugs;

namespace Coursache {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	/// 
	/// 

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

	private: System::Windows::Forms::Button^ ReadDataFromFile_butt;
	private: System::Windows::Forms::TextBox^ textBoxSearch;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ searchButt;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ DrugsTableLayoutPanel1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private: System::Windows::Forms::Button^ analoguesButt;
	private: System::Windows::Forms::TextBox^ textBoxAnalogue;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AddAnalogueButt;
	private: System::Windows::Forms::Button^ DeleteAnalogueButt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ListBox^ listAnalog;
	private: System::Windows::Forms::Button^ UndoTableButt;
	private: System::Windows::Forms::RadioButton^ searchByNameRadio;
	private: System::Windows::Forms::RadioButton^ searchByProdRadio;
	private: System::Windows::Forms::RadioButton^ searchByGroupRadio;
	private: System::Windows::Forms::Button^ sortByPriceButt;
	private: System::Windows::Forms::Button^ addDrugButt;
	private: System::Windows::Forms::Button^ delDrugButt;
	private: System::Windows::Forms::TextBox^ addDrugName;
	private: System::Windows::Forms::TextBox^ addDrugComp;
	private: System::Windows::Forms::TextBox^ addDrugGroup;
	private: System::Windows::Forms::TextBox^ addDrugForm;
	private: System::Windows::Forms::TextBox^ addDrugPrice;






	private: System::Windows::Forms::Button^ saveDrugButt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ upDownRemoveIndex;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ confirmRemoveButt;
	private: System::Windows::Forms::Button^ writeFileButt;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ analoguesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ watchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ byPriceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ watchAnaloguesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addAnaloguesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeAnaloguesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addDrugToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeDrugToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortByPriceToolStripMenuItem;













	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ReadDataFromFile_butt = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->searchButt = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->DrugsTableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->analoguesButt = (gcnew System::Windows::Forms::Button());
			this->textBoxAnalogue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddAnalogueButt = (gcnew System::Windows::Forms::Button());
			this->DeleteAnalogueButt = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->listAnalog = (gcnew System::Windows::Forms::ListBox());
			this->UndoTableButt = (gcnew System::Windows::Forms::Button());
			this->searchByNameRadio = (gcnew System::Windows::Forms::RadioButton());
			this->searchByProdRadio = (gcnew System::Windows::Forms::RadioButton());
			this->searchByGroupRadio = (gcnew System::Windows::Forms::RadioButton());
			this->sortByPriceButt = (gcnew System::Windows::Forms::Button());
			this->addDrugButt = (gcnew System::Windows::Forms::Button());
			this->delDrugButt = (gcnew System::Windows::Forms::Button());
			this->addDrugName = (gcnew System::Windows::Forms::TextBox());
			this->addDrugComp = (gcnew System::Windows::Forms::TextBox());
			this->addDrugGroup = (gcnew System::Windows::Forms::TextBox());
			this->addDrugForm = (gcnew System::Windows::Forms::TextBox());
			this->addDrugPrice = (gcnew System::Windows::Forms::TextBox());
			this->saveDrugButt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->upDownRemoveIndex = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->confirmRemoveButt = (gcnew System::Windows::Forms::Button());
			this->writeFileButt = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analoguesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->watchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byPriceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->watchAnaloguesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addAnaloguesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeAnaloguesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addDrugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeDrugToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortByPriceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upDownRemoveIndex))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ReadDataFromFile_butt
			// 
			this->ReadDataFromFile_butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->ReadDataFromFile_butt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReadDataFromFile_butt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->ReadDataFromFile_butt->FlatAppearance->BorderSize = 0;
			this->ReadDataFromFile_butt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ReadDataFromFile_butt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ReadDataFromFile_butt->Location = System::Drawing::Point(837, 155);
			this->ReadDataFromFile_butt->Name = L"ReadDataFromFile_butt";
			this->ReadDataFromFile_butt->Size = System::Drawing::Size(166, 36);
			this->ReadDataFromFile_butt->TabIndex = 1;
			this->ReadDataFromFile_butt->Text = L"Browse";
			this->ReadDataFromFile_butt->UseVisualStyleBackColor = false;
			this->ReadDataFromFile_butt->Click += gcnew System::EventHandler(this, &MyForm::ReadDataFromFile_butt_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->textBoxSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearch->Location = System::Drawing::Point(383, 60);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(125, 27);
			this->textBoxSearch->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(351, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(26, 29);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// searchButt
			// 
			this->searchButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->searchButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchButt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->searchButt->FlatAppearance->BorderSize = 0;
			this->searchButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->searchButt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->searchButt->Location = System::Drawing::Point(514, 61);
			this->searchButt->Name = L"searchButt";
			this->searchButt->Size = System::Drawing::Size(70, 26);
			this->searchButt->TabIndex = 4;
			this->searchButt->Text = L"Search";
			this->searchButt->UseVisualStyleBackColor = false;
			this->searchButt->Click += gcnew System::EventHandler(this, &MyForm::searchButt_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->DrugsTableLayoutPanel1);
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(10, 98);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(574, 427);
			this->panel1->TabIndex = 5;
			// 
			// DrugsTableLayoutPanel1
			// 
			this->DrugsTableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->DrugsTableLayoutPanel1->ColumnCount = 6;
			this->DrugsTableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15.5902F)));
			this->DrugsTableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				111)));
			this->DrugsTableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				126)));
			this->DrugsTableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				102)));
			this->DrugsTableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				94)));
			this->DrugsTableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				75)));
			this->DrugsTableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->DrugsTableLayoutPanel1->Name = L"DrugsTableLayoutPanel1";
			this->DrugsTableLayoutPanel1->RowCount = 1;
			this->DrugsTableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->DrugsTableLayoutPanel1->Size = System::Drawing::Size(566, 54);
			this->DrugsTableLayoutPanel1->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// analoguesButt
			// 
			this->analoguesButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->analoguesButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->analoguesButt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->analoguesButt->FlatAppearance->BorderSize = 0;
			this->analoguesButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->analoguesButt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->analoguesButt->Location = System::Drawing::Point(837, 207);
			this->analoguesButt->Name = L"analoguesButt";
			this->analoguesButt->Size = System::Drawing::Size(166, 36);
			this->analoguesButt->TabIndex = 7;
			this->analoguesButt->Text = L"Watch analogues";
			this->analoguesButt->UseVisualStyleBackColor = false;
			this->analoguesButt->Click += gcnew System::EventHandler(this, &MyForm::analoguesButt_Click);
			// 
			// textBoxAnalogue
			// 
			this->textBoxAnalogue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->textBoxAnalogue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAnalogue->Location = System::Drawing::Point(604, 80);
			this->textBoxAnalogue->Name = L"textBoxAnalogue";
			this->textBoxAnalogue->Size = System::Drawing::Size(214, 27);
			this->textBoxAnalogue->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(605, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Available analogues list:";
			// 
			// AddAnalogueButt
			// 
			this->AddAnalogueButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->AddAnalogueButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddAnalogueButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddAnalogueButt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AddAnalogueButt->Location = System::Drawing::Point(604, 410);
			this->AddAnalogueButt->Name = L"AddAnalogueButt";
			this->AddAnalogueButt->Size = System::Drawing::Size(100, 31);
			this->AddAnalogueButt->TabIndex = 10;
			this->AddAnalogueButt->Text = L"Add";
			this->AddAnalogueButt->UseVisualStyleBackColor = false;
			this->AddAnalogueButt->Visible = false;
			this->AddAnalogueButt->Click += gcnew System::EventHandler(this, &MyForm::AddAnalogueButt_Click);
			// 
			// DeleteAnalogueButt
			// 
			this->DeleteAnalogueButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->DeleteAnalogueButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteAnalogueButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DeleteAnalogueButt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DeleteAnalogueButt->Location = System::Drawing::Point(719, 410);
			this->DeleteAnalogueButt->Name = L"DeleteAnalogueButt";
			this->DeleteAnalogueButt->Size = System::Drawing::Size(99, 31);
			this->DeleteAnalogueButt->TabIndex = 11;
			this->DeleteAnalogueButt->Text = L"Delete";
			this->DeleteAnalogueButt->UseVisualStyleBackColor = false;
			this->DeleteAnalogueButt->Visible = false;
			this->DeleteAnalogueButt->Click += gcnew System::EventHandler(this, &MyForm::DeleteAnalogueButt_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(601, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Type name of medicine to see analogue";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(824, 80);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// listAnalog
			// 
			this->listAnalog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->listAnalog->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listAnalog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listAnalog->ForeColor = System::Drawing::Color::FloralWhite;
			this->listAnalog->FormattingEnabled = true;
			this->listAnalog->ItemHeight = 20;
			this->listAnalog->Location = System::Drawing::Point(604, 155);
			this->listAnalog->Name = L"listAnalog";
			this->listAnalog->Size = System::Drawing::Size(214, 240);
			this->listAnalog->TabIndex = 1;
			// 
			// UndoTableButt
			// 
			this->UndoTableButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->UndoTableButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UndoTableButt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->UndoTableButt->FlatAppearance->BorderSize = 0;
			this->UndoTableButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UndoTableButt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->UndoTableButt->Location = System::Drawing::Point(10, 65);
			this->UndoTableButt->Name = L"UndoTableButt";
			this->UndoTableButt->Size = System::Drawing::Size(58, 27);
			this->UndoTableButt->TabIndex = 14;
			this->UndoTableButt->Text = L"Undo";
			this->UndoTableButt->UseVisualStyleBackColor = false;
			this->UndoTableButt->Click += gcnew System::EventHandler(this, &MyForm::UndoTableButt_Click);
			// 
			// searchByNameRadio
			// 
			this->searchByNameRadio->AutoSize = true;
			this->searchByNameRadio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->searchByNameRadio->Location = System::Drawing::Point(75, 76);
			this->searchByNameRadio->Name = L"searchByNameRadio";
			this->searchByNameRadio->Size = System::Drawing::Size(17, 16);
			this->searchByNameRadio->TabIndex = 15;
			this->searchByNameRadio->TabStop = true;
			this->searchByNameRadio->UseVisualStyleBackColor = true;
			this->searchByNameRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::searchByNameRadio_CheckedChanged);
			// 
			// searchByProdRadio
			// 
			this->searchByProdRadio->AutoSize = true;
			this->searchByProdRadio->Location = System::Drawing::Point(189, 76);
			this->searchByProdRadio->Name = L"searchByProdRadio";
			this->searchByProdRadio->Size = System::Drawing::Size(17, 16);
			this->searchByProdRadio->TabIndex = 16;
			this->searchByProdRadio->TabStop = true;
			this->searchByProdRadio->UseVisualStyleBackColor = true;
			this->searchByProdRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::searchByProdRadio_CheckedChanged);
			// 
			// searchByGroupRadio
			// 
			this->searchByGroupRadio->AutoSize = true;
			this->searchByGroupRadio->Location = System::Drawing::Point(314, 76);
			this->searchByGroupRadio->Name = L"searchByGroupRadio";
			this->searchByGroupRadio->Size = System::Drawing::Size(17, 16);
			this->searchByGroupRadio->TabIndex = 17;
			this->searchByGroupRadio->TabStop = true;
			this->searchByGroupRadio->UseVisualStyleBackColor = true;
			this->searchByGroupRadio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::searchByGroupRadio_CheckedChanged);
			// 
			// sortByPriceButt
			// 
			this->sortByPriceButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->sortByPriceButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sortByPriceButt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->sortByPriceButt->FlatAppearance->BorderSize = 0;
			this->sortByPriceButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sortByPriceButt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sortByPriceButt->Location = System::Drawing::Point(837, 259);
			this->sortByPriceButt->Name = L"sortByPriceButt";
			this->sortByPriceButt->Size = System::Drawing::Size(166, 36);
			this->sortByPriceButt->TabIndex = 18;
			this->sortByPriceButt->Text = L"Sort by Price";
			this->sortByPriceButt->UseVisualStyleBackColor = false;
			this->sortByPriceButt->Click += gcnew System::EventHandler(this, &MyForm::sortByPriceButt_Click);
			// 
			// addDrugButt
			// 
			this->addDrugButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->addDrugButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addDrugButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addDrugButt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->addDrugButt->Location = System::Drawing::Point(371, 536);
			this->addDrugButt->Name = L"addDrugButt";
			this->addDrugButt->Size = System::Drawing::Size(100, 31);
			this->addDrugButt->TabIndex = 19;
			this->addDrugButt->Text = L"Add";
			this->addDrugButt->UseVisualStyleBackColor = false;
			this->addDrugButt->Click += gcnew System::EventHandler(this, &MyForm::addDrugButt_Click);
			// 
			// delDrugButt
			// 
			this->delDrugButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->delDrugButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delDrugButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delDrugButt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->delDrugButt->Location = System::Drawing::Point(485, 536);
			this->delDrugButt->Name = L"delDrugButt";
			this->delDrugButt->Size = System::Drawing::Size(99, 31);
			this->delDrugButt->TabIndex = 20;
			this->delDrugButt->Text = L"Delete";
			this->delDrugButt->UseVisualStyleBackColor = false;
			this->delDrugButt->Click += gcnew System::EventHandler(this, &MyForm::delDrugButt_Click);
			// 
			// addDrugName
			// 
			this->addDrugName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->addDrugName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addDrugName->Location = System::Drawing::Point(10, 607);
			this->addDrugName->Name = L"addDrugName";
			this->addDrugName->Size = System::Drawing::Size(125, 27);
			this->addDrugName->TabIndex = 21;
			this->addDrugName->Visible = false;
			// 
			// addDrugComp
			// 
			this->addDrugComp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->addDrugComp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addDrugComp->Location = System::Drawing::Point(141, 607);
			this->addDrugComp->Name = L"addDrugComp";
			this->addDrugComp->Size = System::Drawing::Size(125, 27);
			this->addDrugComp->TabIndex = 22;
			this->addDrugComp->Visible = false;
			// 
			// addDrugGroup
			// 
			this->addDrugGroup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->addDrugGroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addDrugGroup->Location = System::Drawing::Point(272, 607);
			this->addDrugGroup->Name = L"addDrugGroup";
			this->addDrugGroup->Size = System::Drawing::Size(125, 27);
			this->addDrugGroup->TabIndex = 23;
			this->addDrugGroup->Visible = false;
			// 
			// addDrugForm
			// 
			this->addDrugForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->addDrugForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addDrugForm->Location = System::Drawing::Point(403, 607);
			this->addDrugForm->Name = L"addDrugForm";
			this->addDrugForm->Size = System::Drawing::Size(125, 27);
			this->addDrugForm->TabIndex = 24;
			this->addDrugForm->Visible = false;
			// 
			// addDrugPrice
			// 
			this->addDrugPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->addDrugPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addDrugPrice->Location = System::Drawing::Point(534, 607);
			this->addDrugPrice->Name = L"addDrugPrice";
			this->addDrugPrice->Size = System::Drawing::Size(125, 27);
			this->addDrugPrice->TabIndex = 25;
			this->addDrugPrice->Visible = false;
			// 
			// saveDrugButt
			// 
			this->saveDrugButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->saveDrugButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveDrugButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->saveDrugButt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->saveDrugButt->Location = System::Drawing::Point(665, 607);
			this->saveDrugButt->Name = L"saveDrugButt";
			this->saveDrugButt->Size = System::Drawing::Size(81, 27);
			this->saveDrugButt->TabIndex = 27;
			this->saveDrugButt->Text = L"Save";
			this->saveDrugButt->UseVisualStyleBackColor = false;
			this->saveDrugButt->Visible = false;
			this->saveDrugButt->Click += gcnew System::EventHandler(this, &MyForm::saveDrugButt_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 588);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Name:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(138, 588);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 16);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Company:";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(269, 588);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 16);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Group:";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(400, 588);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 16);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Form:";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(531, 588);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Price:";
			this->label7->Visible = false;
			// 
			// upDownRemoveIndex
			// 
			this->upDownRemoveIndex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->upDownRemoveIndex->Location = System::Drawing::Point(126, 543);
			this->upDownRemoveIndex->Name = L"upDownRemoveIndex";
			this->upDownRemoveIndex->Size = System::Drawing::Size(57, 22);
			this->upDownRemoveIndex->TabIndex = 33;
			this->upDownRemoveIndex->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 545);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 16);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Index to remove:";
			this->label8->Visible = false;
			// 
			// confirmRemoveButt
			// 
			this->confirmRemoveButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->confirmRemoveButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->confirmRemoveButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->confirmRemoveButt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirmRemoveButt->Location = System::Drawing::Point(197, 540);
			this->confirmRemoveButt->Name = L"confirmRemoveButt";
			this->confirmRemoveButt->Size = System::Drawing::Size(69, 27);
			this->confirmRemoveButt->TabIndex = 35;
			this->confirmRemoveButt->Text = L"Confirm";
			this->confirmRemoveButt->UseVisualStyleBackColor = false;
			this->confirmRemoveButt->Visible = false;
			this->confirmRemoveButt->Click += gcnew System::EventHandler(this, &MyForm::confirmRemoveButt_Click);
			// 
			// writeFileButt
			// 
			this->writeFileButt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->writeFileButt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->writeFileButt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->writeFileButt->FlatAppearance->BorderSize = 0;
			this->writeFileButt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->writeFileButt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->writeFileButt->Location = System::Drawing::Point(837, 311);
			this->writeFileButt->Name = L"writeFileButt";
			this->writeFileButt->Size = System::Drawing::Size(166, 36);
			this->writeFileButt->TabIndex = 36;
			this->writeFileButt->Text = L"Write to File";
			this->writeFileButt->UseVisualStyleBackColor = false;
			this->writeFileButt->Click += gcnew System::EventHandler(this, &MyForm::writeFileButt_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(763, 432);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(303, 273);
			this->pictureBox3->TabIndex = 37;
			this->pictureBox3->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->analoguesToolStripMenuItem, this->sortToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1036, 28);
			this->menuStrip1->TabIndex = 38;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->writeToolStripMenuItem->Text = L"Write";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// analoguesToolStripMenuItem
			// 
			this->analoguesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->watchToolStripMenuItem,
					this->addToolStripMenuItem, this->removeToolStripMenuItem
			});
			this->analoguesToolStripMenuItem->Name = L"analoguesToolStripMenuItem";
			this->analoguesToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->analoguesToolStripMenuItem->Text = L"Analogues";
			// 
			// watchToolStripMenuItem
			// 
			this->watchToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->watchToolStripMenuItem->Name = L"watchToolStripMenuItem";
			this->watchToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->watchToolStripMenuItem->Text = L"Watch";
			this->watchToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::watchToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem_Click);
			// 
			// removeToolStripMenuItem
			// 
			this->removeToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->removeToolStripMenuItem->Name = L"removeToolStripMenuItem";
			this->removeToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->removeToolStripMenuItem->Text = L"Remove";
			this->removeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeToolStripMenuItem_Click);
			// 
			// sortToolStripMenuItem
			// 
			this->sortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->byPriceToolStripMenuItem });
			this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
			this->sortToolStripMenuItem->Size = System::Drawing::Size(50, 24);
			this->sortToolStripMenuItem->Text = L"Sort";
			// 
			// byPriceToolStripMenuItem
			// 
			this->byPriceToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->byPriceToolStripMenuItem->Name = L"byPriceToolStripMenuItem";
			this->byPriceToolStripMenuItem->Size = System::Drawing::Size(145, 26);
			this->byPriceToolStripMenuItem->Text = L"By price";
			this->byPriceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::byPriceToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->watchAnaloguesToolStripMenuItem,
					this->addAnaloguesToolStripMenuItem, this->removeAnaloguesToolStripMenuItem, this->addDrugToolStripMenuItem, this->removeDrugToolStripMenuItem,
					this->sortByPriceToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(205, 148);
			// 
			// watchAnaloguesToolStripMenuItem
			// 
			this->watchAnaloguesToolStripMenuItem->Name = L"watchAnaloguesToolStripMenuItem";
			this->watchAnaloguesToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->watchAnaloguesToolStripMenuItem->Text = L"Watch analogues";
			this->watchAnaloguesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::watchAnaloguesToolStripMenuItem_Click);
			// 
			// addAnaloguesToolStripMenuItem
			// 
			this->addAnaloguesToolStripMenuItem->Name = L"addAnaloguesToolStripMenuItem";
			this->addAnaloguesToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->addAnaloguesToolStripMenuItem->Text = L"Add analogues";
			this->addAnaloguesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addAnaloguesToolStripMenuItem_Click);
			// 
			// removeAnaloguesToolStripMenuItem
			// 
			this->removeAnaloguesToolStripMenuItem->Name = L"removeAnaloguesToolStripMenuItem";
			this->removeAnaloguesToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->removeAnaloguesToolStripMenuItem->Text = L"Remove analogues";
			this->removeAnaloguesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeAnaloguesToolStripMenuItem_Click);
			// 
			// addDrugToolStripMenuItem
			// 
			this->addDrugToolStripMenuItem->Name = L"addDrugToolStripMenuItem";
			this->addDrugToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->addDrugToolStripMenuItem->Text = L"Add drug";
			this->addDrugToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addDrugToolStripMenuItem_Click);
			// 
			// removeDrugToolStripMenuItem
			// 
			this->removeDrugToolStripMenuItem->Name = L"removeDrugToolStripMenuItem";
			this->removeDrugToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->removeDrugToolStripMenuItem->Text = L"Remove drug";
			this->removeDrugToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::removeDrugToolStripMenuItem_Click);
			// 
			// sortByPriceToolStripMenuItem
			// 
			this->sortByPriceToolStripMenuItem->Name = L"sortByPriceToolStripMenuItem";
			this->sortByPriceToolStripMenuItem->Size = System::Drawing::Size(204, 24);
			this->sortByPriceToolStripMenuItem->Text = L"Sort by price";
			this->sortByPriceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sortByPriceToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->ClientSize = System::Drawing::Size(1036, 666);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->DeleteAnalogueButt);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->saveDrugButt);
			this->Controls->Add(this->listAnalog);
			this->Controls->Add(this->writeFileButt);
			this->Controls->Add(this->AddAnalogueButt);
			this->Controls->Add(this->sortByPriceButt);
			this->Controls->Add(this->addDrugPrice);
			this->Controls->Add(this->confirmRemoveButt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->upDownRemoveIndex);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->delDrugButt);
			this->Controls->Add(this->addDrugName);
			this->Controls->Add(this->addDrugForm);
			this->Controls->Add(this->addDrugButt);
			this->Controls->Add(this->addDrugComp);
			this->Controls->Add(this->addDrugGroup);
			this->Controls->Add(this->searchByGroupRadio);
			this->Controls->Add(this->searchByProdRadio);
			this->Controls->Add(this->searchByNameRadio);
			this->Controls->Add(this->UndoTableButt);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxAnalogue);
			this->Controls->Add(this->analoguesButt);
			this->Controls->Add(this->searchButt);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->ReadDataFromFile_butt);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Available Medicine List";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upDownRemoveIndex))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private:
		const int colsCount = 6;
		bool searchByName = false;
		bool searchByGroup = false;
		bool searchByCompany = false;

	// Функція, що ініціалізує вивід зоголовку у таблиці
	private: void tableHeadingsInit() {
		std::vector<std::string> stringVector = { "№", "Name", "Production", "Group", "Form", "Price" };
		for (int i = 0; i < colsCount; ++i) {
			Label^ newLabel = gcnew Label();
			newLabel->Text = msclr::interop::marshal_as<String^>(stringVector[i].c_str());

			newLabel->TextAlign = ContentAlignment::MiddleLeft;

			newLabel->Dock = DockStyle::Fill;
			newLabel->Padding = System::Windows::Forms::Padding(2);

			DrugsTableLayoutPanel1->Controls->Add(newLabel, i, 0);
		}

		DrugsTableLayoutPanel1->CellBorderStyle = TableLayoutPanelCellBorderStyle::Single;
	}
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		tableHeadingsInit();

		openToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Control | Keys::R);
		writeToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Control | Keys::W);
		exitToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::F4);
		watchToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::W);
		addToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::A);
		removeToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::D);
		byPriceToolStripMenuItem->ShortcutKeys = static_cast<Keys>(Keys::Alt | Keys::S);
	}

	// Функція, яка додає рядки до таблиці
	private: void addNewRow(vector<CDrug> drugs) {
		for (const CDrug& drug : drugs) {
			std::setlocale(LC_ALL, "uk_UA.UTF-8");
			Label^ numberOfTheDrug = gcnew Label();
			numberOfTheDrug->Text = DrugsTableLayoutPanel1->RowCount.ToString();
			setLabelElem(numberOfTheDrug);

			Label^ drugNameLabel = gcnew Label();
			drugNameLabel->Text = msclr::interop::marshal_as<String^>(drug.getName().c_str());
			setLabelElem(drugNameLabel);

			Label^ drugProductionLabel = gcnew Label();
			drugProductionLabel->Text = msclr::interop::marshal_as<String^>(drug.getCompanyProd().c_str());
			setLabelElem(drugProductionLabel);

			Label^ drugGroupLabel = gcnew Label();
			drugGroupLabel->Text = msclr::interop::marshal_as<String^>(drug.getGroup().c_str());
			setLabelElem(drugGroupLabel);

			Label^ drugFromLabel = gcnew Label();
			drugFromLabel->Text = msclr::interop::marshal_as<String^>(drug.getForm().c_str());
			setLabelElem(drugFromLabel);

			Label^ drugPriceLabel = gcnew Label();
			drugPriceLabel->Text = drug.getPrice().ToString();
			setLabelElem(drugPriceLabel);

			DrugsTableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));

			DrugsTableLayoutPanel1->Controls->Add(numberOfTheDrug, 0, DrugsTableLayoutPanel1->RowCount);
			DrugsTableLayoutPanel1->Controls->Add(drugNameLabel, 1, DrugsTableLayoutPanel1->RowCount);
			DrugsTableLayoutPanel1->Controls->Add(drugProductionLabel, 2, DrugsTableLayoutPanel1->RowCount);
			DrugsTableLayoutPanel1->Controls->Add(drugGroupLabel, 3, DrugsTableLayoutPanel1->RowCount);
			DrugsTableLayoutPanel1->Controls->Add(drugFromLabel, 4, DrugsTableLayoutPanel1->RowCount);
			DrugsTableLayoutPanel1->Controls->Add(drugPriceLabel, 5, DrugsTableLayoutPanel1->RowCount);


			DrugsTableLayoutPanel1->RowCount++;

			DrugsTableLayoutPanel1->Height = 30 * DrugsTableLayoutPanel1->RowCount;
		}
	}



	//Функція, що додає список аналогів
	private: void addAnaloguesList(vector<CDrug> drugs, int index) {

		int rowHeight = 30; // Фіксована висота для всіх рядків

		if (drugs[index].getAnalogues().size() == 0) {
			return;
		}

		for (int i = 0; i < drugs[index].getAnalogues().size(); i++) {
			if (drugs[index].getAnalogues()[i] != "") {
				Label^ drugAnaloguesLabel = gcnew Label();
				// Перебираємо аналоги та додаємо їх до тексту аналогів через роздільник
				drugAnaloguesLabel->Text = gcnew System::String(drugs[index].getAnalogues()[i].c_str());
				setLabelElem(drugAnaloguesLabel);

				// Встановлення фіксованої висоти для кожного рядка
				drugAnaloguesLabel->Height = rowHeight;
			}
		}
	}

	// Очистити вектор drugs
	private: void clearDrugsVector() {
		drugs.clear(); 
	}

	//Встановити параметри для лейблу
	private: void setLabelElem(Label^ elem) {
		elem->TextAlign = ContentAlignment::MiddleLeft;
		elem->Dock = DockStyle::Fill;
		elem->Padding = System::Windows::Forms::Padding(2);
	}

	//Зчитати з файлу та заповнити вектор об'єктів
	private: void drugArrInit(vector<CDrug>& drugs) {
		std::setlocale(LC_ALL, "uk_UA.UTF-8");
		try {
			openFileDialog1->InitialDirectory = "D:\\Polytech\\Coursache\\Coursache";
			openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Конвертуємо String^ у std::string
				msclr::interop::marshal_context context;
				std::string fileName = context.marshal_as<std::string>(openFileDialog1->FileName);

				std::ifstream inputFile(fileName);
				if (!inputFile.is_open()) {
					String^ errorMsg = gcnew String(L"Не вдалося відкрити файл drugs.txt");
					MessageBox::Show(errorMsg, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; // Повертаємо з функції, оскільки не вдалося відкрити файл
				}

				CDrug drug;
				while (inputFile >> drug) {
					drugs.push_back(drug);
				}

				inputFile.close(); // Закриваємо файл після зчитування
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//Радіо кнопки для форматування пошуку препаратів
	private: System::Void searchByNameRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (searchByNameRadio->Checked) {
			searchByName = true;
			searchByGroup = false;
			searchByCompany = false;
		}

	}
	private: System::Void searchByProdRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (searchByProdRadio->Checked) {
			searchByName = false;
			searchByGroup = false;
			searchByCompany = true;
		}
	}
	private: System::Void searchByGroupRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (searchByGroupRadio->Checked) {
			searchByName = false;
			searchByGroup = true;
			searchByCompany = false;
		}
	}
		
	//Пошук і вивід результатів пошуку
	private: void searchAndDisplayResults(vector<CDrug> drugs, String^ searchCriteria, bool searchByName, bool searchByGroup, bool searchByCompany) {
		try {
			// Очистити попередні результати
			DrugsTableLayoutPanel1->Controls->Clear();
			DrugsTableLayoutPanel1->RowCount = 1;

			tableHeadingsInit();

			// Перевірити, чи введено критерії пошуку
			if (!String::IsNullOrEmpty(searchCriteria)) {
				// Конвертувати у строку C++/CLI
				msclr::interop::marshal_context context;
				std::string searchCriteriaStr = context.marshal_as<std::string>(searchCriteria);

				// Перевірити кожен препарат
				for (const CDrug& drug : drugs) {
					bool match = false;

					// Викликати методи пошуку в класі CDrug залежно від вибраних опцій
					if (searchByName && (drug.getName().find(searchCriteriaStr) != std::string::npos)) {
						match = true;
					}
					else if (searchByGroup && (drug.getGroup().find(searchCriteriaStr) != std::string::npos)) {
						match = true;
					}
					else if (searchByCompany && (drug.getCompanyProd().find(searchCriteriaStr) != std::string::npos)) {
						match = true;
					}

					if (match) {
						// Додати новий рядок
						DrugsTableLayoutPanel1->RowCount++;

						// Додати номер лікарського засобу
						Label^ numberOfTheDrug = gcnew Label();
						numberOfTheDrug->Text = (DrugsTableLayoutPanel1->RowCount - 1).ToString();
						setLabelElem(numberOfTheDrug);
						DrugsTableLayoutPanel1->Controls->Add(numberOfTheDrug, 0, DrugsTableLayoutPanel1->RowCount - 1);

						Label^ drugNameLabel = gcnew Label();
						drugNameLabel->Text = msclr::interop::marshal_as<String^>(drug.getName().c_str());
						setLabelElem(drugNameLabel);

						Label^ drugProductionLabel = gcnew Label();
						drugProductionLabel->Text = msclr::interop::marshal_as<String^>(drug.getCompanyProd().c_str());
						setLabelElem(drugProductionLabel);

						Label^ drugGroupLabel = gcnew Label();
						drugGroupLabel->Text = msclr::interop::marshal_as<String^>(drug.getGroup().c_str());
						setLabelElem(drugGroupLabel);

						Label^ drugFromLabel = gcnew Label();
						drugFromLabel->Text = msclr::interop::marshal_as<String^>(drug.getForm().c_str());
						setLabelElem(drugFromLabel);

						Label^ drugPriceLabel = gcnew Label();
						drugPriceLabel->Text = drug.getPrice().ToString();
						setLabelElem(drugPriceLabel);

						DrugsTableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));
						DrugsTableLayoutPanel1->Controls->Add(drugNameLabel, 1, DrugsTableLayoutPanel1->RowCount - 1);
						DrugsTableLayoutPanel1->Controls->Add(drugProductionLabel, 2, DrugsTableLayoutPanel1->RowCount - 1);
						DrugsTableLayoutPanel1->Controls->Add(drugGroupLabel, 3, DrugsTableLayoutPanel1->RowCount - 1);
						DrugsTableLayoutPanel1->Controls->Add(drugFromLabel, 4, DrugsTableLayoutPanel1->RowCount - 1);
						DrugsTableLayoutPanel1->Controls->Add(drugPriceLabel, 5, DrugsTableLayoutPanel1->RowCount - 1);
					}
				}

				// Змінити висоту відповідно до кількості знайдених рядків
				DrugsTableLayoutPanel1->Height = 30 * DrugsTableLayoutPanel1->RowCount;
			}

		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	//Встановлення видимості елементів
	private: void setAddElementsVisible(bool state) {
		addDrugName->Visible = state;
		addDrugComp->Visible = state;
		addDrugGroup->Visible = state;
		addDrugForm->Visible = state;
		addDrugPrice->Visible = state;
		saveDrugButt->Visible = state;

		addDrugName->Text = "";
		addDrugComp->Text = "";
		addDrugGroup->Text = "";
		addDrugForm->Text = "";
		addDrugPrice->Text = "";

		label3->Visible = state;
		label4->Visible = state;
		label5->Visible = state;
		label6->Visible = state;
		label7->Visible = state;
	}

	private: void setRemoveElementsVisible(bool state) {
		label8->Visible = state;
		upDownRemoveIndex->Visible = state;
		upDownRemoveIndex->Value = 0;
		confirmRemoveButt->Visible = state;
	}

	// Функція для обміну двох об'єктів CDrug
	private: void swapCDrugs(CDrug& a, CDrug& b) {
		CDrug temp = a;
		a = b;
		b = temp;
	}

	// Функція сортування простою вибіркою за зростанням цін
	private: void selectionSortByPriceAscending(std::vector<CDrug>& drugs) {

		try {

			if (drugs.empty()) {
				MessageBox::Show("Array is empty. Please fill the array.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				throw;
			}
			else {
				int n = drugs.size();

				for (int i = 0; i < n - 1; ++i) {
					int minIndex = i;
					for (int j = i + 1; j < n; ++j) {
						if (drugs[j].getPrice() < drugs[minIndex].getPrice()) {
							minIndex = j;
						}
					}

					// Обмін поточного елемента з мінімальним елементом
					swapCDrugs(drugs[i], drugs[minIndex]);
				}
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//Вивід препаратів у таблицю
	private: private: void displayDrugsInTable(std::vector<CDrug>& drugs) {
		try {
			// Очищаємо попередні результати
			DrugsTableLayoutPanel1->Controls->Clear();
			DrugsTableLayoutPanel1->RowCount = 1;

			tableHeadingsInit();

			// Відображаємо кожен препарат у таблиці
			for (const CDrug& drug : drugs) {
				DrugsTableLayoutPanel1->RowCount++;

				// Додати номер лікарського засобу
				Label^ numberOfTheDrug = gcnew Label();
				numberOfTheDrug->Text = (DrugsTableLayoutPanel1->RowCount - 1).ToString();
				setLabelElem(numberOfTheDrug);
				DrugsTableLayoutPanel1->Controls->Add(numberOfTheDrug, 0, DrugsTableLayoutPanel1->RowCount - 1);

				Label^ drugNameLabel = gcnew Label();
				drugNameLabel->Text = msclr::interop::marshal_as<String^>(drug.getName().c_str());
				setLabelElem(drugNameLabel);

				Label^ drugProductionLabel = gcnew Label();
				drugProductionLabel->Text = msclr::interop::marshal_as<String^>(drug.getCompanyProd().c_str());
				setLabelElem(drugProductionLabel);

				Label^ drugGroupLabel = gcnew Label();
				drugGroupLabel->Text = msclr::interop::marshal_as<String^>(drug.getGroup().c_str());
				setLabelElem(drugGroupLabel);

				Label^ drugFromLabel = gcnew Label();
				drugFromLabel->Text = msclr::interop::marshal_as<String^>(drug.getForm().c_str());
				setLabelElem(drugFromLabel);

				Label^ drugPriceLabel = gcnew Label();
				drugPriceLabel->Text = drug.getPrice().ToString();
				setLabelElem(drugPriceLabel);

				DrugsTableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));
				DrugsTableLayoutPanel1->Controls->Add(drugNameLabel, 1, DrugsTableLayoutPanel1->RowCount - 1);
				DrugsTableLayoutPanel1->Controls->Add(drugProductionLabel, 2, DrugsTableLayoutPanel1->RowCount - 1);
				DrugsTableLayoutPanel1->Controls->Add(drugGroupLabel, 3, DrugsTableLayoutPanel1->RowCount - 1);
				DrugsTableLayoutPanel1->Controls->Add(drugFromLabel, 4, DrugsTableLayoutPanel1->RowCount - 1);
				DrugsTableLayoutPanel1->Controls->Add(drugPriceLabel, 5, DrugsTableLayoutPanel1->RowCount - 1);

				DrugsTableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));
			}

			// Змінюємо висоту відповідно до кількості рядків
			DrugsTableLayoutPanel1->Height = 30 * DrugsTableLayoutPanel1->RowCount;
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// Метод для додавання нового препарату у головну таблицю
	private: void addDrugToTable(const CDrug& newDrug) {
		try {
			DrugsTableLayoutPanel1->RowCount++;

			// Додати номер лікарського засобу
			Label^ numberOfTheDrug = gcnew Label();
			numberOfTheDrug->Text = (DrugsTableLayoutPanel1->RowCount - 1).ToString();
			setLabelElem(numberOfTheDrug);
			DrugsTableLayoutPanel1->Controls->Add(numberOfTheDrug, 0, DrugsTableLayoutPanel1->RowCount - 1);

			Label^ drugNameLabel = gcnew Label();
			drugNameLabel->Text = msclr::interop::marshal_as<String^>(newDrug.getName().c_str());
			setLabelElem(drugNameLabel);

			Label^ drugProductionLabel = gcnew Label();
			drugProductionLabel->Text = msclr::interop::marshal_as<String^>(newDrug.getCompanyProd().c_str());
			setLabelElem(drugProductionLabel);

			Label^ drugGroupLabel = gcnew Label();
			drugGroupLabel->Text = msclr::interop::marshal_as<String^>(newDrug.getGroup().c_str());
			setLabelElem(drugGroupLabel);

			Label^ drugFromLabel = gcnew Label();
			drugFromLabel->Text = msclr::interop::marshal_as<String^>(newDrug.getForm().c_str());
			setLabelElem(drugFromLabel);

			Label^ drugPriceLabel = gcnew Label();
			drugPriceLabel->Text = newDrug.getPrice().ToString();
			setLabelElem(drugPriceLabel);

			DrugsTableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));
			DrugsTableLayoutPanel1->Controls->Add(drugNameLabel, 1, DrugsTableLayoutPanel1->RowCount - 1);
			DrugsTableLayoutPanel1->Controls->Add(drugProductionLabel, 2, DrugsTableLayoutPanel1->RowCount - 1);
			DrugsTableLayoutPanel1->Controls->Add(drugGroupLabel, 3, DrugsTableLayoutPanel1->RowCount - 1);
			DrugsTableLayoutPanel1->Controls->Add(drugFromLabel, 4, DrugsTableLayoutPanel1->RowCount - 1);
			DrugsTableLayoutPanel1->Controls->Add(drugPriceLabel, 5, DrugsTableLayoutPanel1->RowCount - 1);

			DrugsTableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 30));

			// Змінюємо висоту відповідно до кількості рядків
			DrugsTableLayoutPanel1->Height = 30 * DrugsTableLayoutPanel1->RowCount;
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//Додавання нового препарату вручну у таблицю
	private: void addDrugToTableAndVector() {
		try {
			// Отримати дані з текстбоксів
			msclr::interop::marshal_context context;
			std::string name = context.marshal_as<std::string>(addDrugName->Text);
			std::string companyProd = context.marshal_as<std::string>(addDrugComp->Text);
			std::string group = context.marshal_as<std::string>(addDrugGroup->Text);
			std::string form = context.marshal_as<std::string>(addDrugForm->Text);
			double price = System::Convert::ToDouble(addDrugPrice->Text);

			// Створити новий об'єкт CDrug
			CDrug newDrug(name, companyProd, group, form, price);

			// Додати новий препарат до вектору drugs і таблиці
			drugs.push_back(newDrug);

			addDrugToTable(newDrug);
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	} 
	
	//Видалення препарату вручну
	private: void removeDrugFromTableAndVector(int rowIndex) {
		try {
			// Перевірити, чи індекс рядка в межах вектора
			if (rowIndex >= 0 && rowIndex < drugs.size()) {
				// Видалити елемент з вектора
				drugs.erase((drugs.begin() + rowIndex));

				// Очистити відповідний рядок в таблиці
				DrugsTableLayoutPanel1->Controls->RemoveAt(0); // Очистити заголовки
				DrugsTableLayoutPanel1->Controls->Clear();

				// Перемалювати таблицю
				displayDrugsInTable(drugs);

				MessageBox::Show("Препарат був успішно видалений.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Неправильний індекс рядка.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//Запис препаратів у файл
	private: void writeVectorToFile(const std::vector<CDrug>& drugs, const std::string& filename) {
		try {
			std::ofstream outputFile(filename);

			if (!outputFile.is_open()) {
				throw std::runtime_error("Неможливо відкрити файл для запису.");
			}

			for (const CDrug& drug : drugs) {
				outputFile << drug; // Викликає оператор <<, який ви перевантажили
				
			}
			MessageBox::Show("Дані успішно записані у файл!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			outputFile.close();
		}
		catch (const std::exception& e) {
			// Обробка помилок
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	  
	private: System::Void ReadDataFromFile_butt_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			clearDrugsVector();
			drugArrInit(drugs);

			DrugsTableLayoutPanel1->Controls->Clear();
			DrugsTableLayoutPanel1->RowCount = 1;

			tableHeadingsInit();
			addNewRow(drugs);

		}
		catch (const std::exception& e) {
			// Обробка помилок
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void searchButt_Click(System::Object^ sender, System::EventArgs^ e) {
		searchAndDisplayResults(drugs, textBoxSearch->Text, searchByName, searchByGroup, searchByCompany);
	}

	
	int currentAnalogueInd = 0;
 
	private: System::Void analoguesButt_Click(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;
		std::string textAnalogueNew = context.marshal_as<std::string>(textBoxAnalogue->Text);

		// Очистити ListBox перед додаванням нових аналогів
		listAnalog->Items->Clear();

		try {
			if (textAnalogueNew != "") {
				AddAnalogueButt->Visible = true;
				DeleteAnalogueButt->Visible = true;
			}

			for (int i = 0; i < drugs.size(); i++) {
				if (textAnalogueNew == drugs[i].getName()) {
					// Додати аналоги до ListBox
					for (const std::string& analogue : drugs[i].getAnalogues()) {
						listAnalog->Items->Add(gcnew String(analogue.c_str()));
				
					}

					// Зберегти обраний препарат для подальших дій
					currentAnalogueInd = i;
				}
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void AddAnalogueButt_Click(System::Object^ sender, System::EventArgs^ e) {
		
		msclr::interop::marshal_context context;
		std::string textAnalogueNew = context.marshal_as<std::string>(textBoxAnalogue->Text);

		try {
			// Виправлення помилки заміни аналогів
			bool alreadyExists = false;
			for (const std::string& analogue : drugs[currentAnalogueInd].getAnalogues()) {
				if (analogue == textAnalogueNew) {
					alreadyExists = true;
					break;
				}
			}

			if (!alreadyExists && textAnalogueNew != drugs[currentAnalogueInd].getName()) {
				drugs[currentAnalogueInd].addAnalogue(textAnalogueNew);

				// Додати новий аналог до списку у вашому інтерфейсі
				listAnalog->Items->Add(gcnew String(textAnalogueNew.c_str()));
			}
			else {
				MessageBox::Show("Analogue already exists or the same name of the drug has been written!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			textBoxAnalogue->Text = "";
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void DeleteAnalogueButt_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Перевірка чи вибрано аналог у ListBox
			if (listAnalog->SelectedIndex >= 0) {
				// Отримати вибраний аналог з ListBox
				String^ selectedAnalogue = listAnalog->SelectedItem->ToString();

				// Конвертувати у строку C++/CLI
				msclr::interop::marshal_context context;
				std::string analogueToDelete = context.marshal_as<std::string>(selectedAnalogue);

				// Перевірити, чи вибраний препарат індексується правильно
				if (currentAnalogueInd >= 0 && currentAnalogueInd < drugs.size()) {
					// Видалити аналог з об'єкта CDrug за індексом
					drugs[currentAnalogueInd].removeAnalogue(analogueToDelete);

					// Оновити ListBox
					listAnalog->Items->Remove(selectedAnalogue);

					// Тут ви можете вносити інші зміни до об'єкта drugs[currentAnalogueInd]
				}
			}
		}
		catch (SystemException^ error) {
			MessageBox::Show(error->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void UndoTableButt_Click(System::Object^ sender, System::EventArgs^ e) {

		// Очистити попередні результати
		DrugsTableLayoutPanel1->Controls->Clear();
		DrugsTableLayoutPanel1->RowCount = 1;

		tableHeadingsInit();
		addNewRow(drugs);

		textBoxSearch->Text = "";
	}

	private: System::Void sortByPriceButt_Click(System::Object^ sender, System::EventArgs^ e) {
		// Викликаємо функцію сортування
		selectionSortByPriceAscending(drugs);

		// Очищаємо та відображаємо відсортований список у таблиці
		displayDrugsInTable(drugs);
	}

	private: System::Void addDrugButt_Click(System::Object^ sender, System::EventArgs^ e) {
		setAddElementsVisible(true);
	}

	private: System::Void saveDrugButt_Click(System::Object^ sender, System::EventArgs^ e) {
		addDrugToTableAndVector();
		setAddElementsVisible(false);
	}

	private: System::Void delDrugButt_Click(System::Object^ sender, System::EventArgs^ e) {
		setRemoveElementsVisible(true);
	}

	private: System::Void confirmRemoveButt_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int selectedRowIndex = System::Convert::ToInt32(upDownRemoveIndex->Value);
		removeDrugFromTableAndVector(selectedRowIndex - 1);
		setRemoveElementsVisible(false);
	}

	private: System::Void writeFileButt_Click(System::Object^ sender, System::EventArgs^ e) {
		writeVectorToFile(drugs, "NewDrugs.txt");
	}

private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		clearDrugsVector();
		drugArrInit(drugs);

		DrugsTableLayoutPanel1->Controls->Clear();
		DrugsTableLayoutPanel1->RowCount = 1;

		tableHeadingsInit();
		addNewRow(drugs);

	}
	catch (const std::exception& e) {
		// Обробка помилок
		MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	writeVectorToFile(drugs, "NewDrugs.txt");
}
private: System::Void removeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteAnalogueButt_Click(sender, e);
	
}
private: System::Void watchToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	analoguesButt_Click(sender, e);
}
private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddAnalogueButt_Click(sender, e);
}
private: System::Void byPriceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	sortByPriceButt_Click(sender, e);
}
private: System::Void watchAnaloguesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	analoguesButt_Click(sender, e);
}
private: System::Void addAnaloguesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddAnalogueButt_Click(sender, e);
}
private: System::Void removeAnaloguesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteAnalogueButt_Click(sender, e);
}
private: System::Void addDrugToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	setAddElementsVisible(true);
}
private: System::Void removeDrugToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	setRemoveElementsVisible(true);
}
private: System::Void sortByPriceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	sortByPriceButt_Click(sender, e);
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Click 'Watch analogues', to see analogues list of a drug, you have been written. Erase the value and then type a name of the analogue, you want to add.", "Hint", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
