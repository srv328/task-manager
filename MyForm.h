#pragma once

#include "taskmanager.h"
#include <msclr/marshal_cppstd.h>

TaskManager TM;

namespace TaskMaster {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ mainMenu;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ tasksButton;
	private: System::Windows::Forms::Button^ projectsButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Deadline;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Priority;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ Del_btn;
	private: System::Windows::Forms::Button^ Edit_btn;
	private: System::Windows::Forms::Button^ Add_btn;
	private: System::Windows::Forms::GroupBox^ addTable;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ closeForms;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ returnButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ editTable;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label8;
		     System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->mainMenu = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tasksButton = (gcnew System::Windows::Forms::Button());
			this->projectsButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->addTable = (gcnew System::Windows::Forms::GroupBox());
			this->add = (gcnew System::Windows::Forms::Button());
			this->closeForms = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Del_btn = (gcnew System::Windows::Forms::Button());
			this->Edit_btn = (gcnew System::Windows::Forms::Button());
			this->Add_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Deadline = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Priority = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->editTable = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->returnButton = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->mainMenu->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->addTable->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->editTable->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainMenu
			// 
			this->mainMenu->Controls->Add(this->tabPage1);
			this->mainMenu->Controls->Add(this->tabPage2);
			this->mainMenu->Controls->Add(this->tabPage3);
			this->mainMenu->Location = System::Drawing::Point(0, 0);
			this->mainMenu->Name = L"mainMenu";
			this->mainMenu->SelectedIndex = 0;
			this->mainMenu->Size = System::Drawing::Size(1004, 604);
			this->mainMenu->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->mainMenu->TabIndex = 16;
			this->mainMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::mainMenu_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tasksButton);
			this->tabPage1->Controls->Add(this->projectsButton);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(996, 578);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Главная";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tasksButton
			// 
			this->tasksButton->BackColor = System::Drawing::Color::PaleGreen;
			this->tasksButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tasksButton->ForeColor = System::Drawing::Color::MediumOrchid;
			this->tasksButton->Location = System::Drawing::Point(102, 306);
			this->tasksButton->Name = L"tasksButton";
			this->tasksButton->Size = System::Drawing::Size(249, 76);
			this->tasksButton->TabIndex = 2;
			this->tasksButton->Text = L"Мои задачи";
			this->tasksButton->UseVisualStyleBackColor = false;
			this->tasksButton->Click += gcnew System::EventHandler(this, &MyForm::tasksButton_Click);
			// 
			// projectsButton
			// 
			this->projectsButton->BackColor = System::Drawing::Color::Moccasin;
			this->projectsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->projectsButton->ForeColor = System::Drawing::Color::Salmon;
			this->projectsButton->Location = System::Drawing::Point(588, 306);
			this->projectsButton->Name = L"projectsButton";
			this->projectsButton->Size = System::Drawing::Size(249, 76);
			this->projectsButton->TabIndex = 1;
			this->projectsButton->Text = L"Мои проекты";
			this->projectsButton->UseVisualStyleBackColor = false;
			this->projectsButton->Click += gcnew System::EventHandler(this, &MyForm::projectsButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(279, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(427, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добро пожаловать в TaskMaster!\r\nЧто бы вы хотели сделать сегодня\?";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->addTable);
			this->tabPage2->Controls->Add(this->Del_btn);
			this->tabPage2->Controls->Add(this->Edit_btn);
			this->tabPage2->Controls->Add(this->Add_btn);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(996, 578);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задачи";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// addTable
			// 
			this->addTable->Controls->Add(this->add);
			this->addTable->Controls->Add(this->closeForms);
			this->addTable->Controls->Add(this->comboBox1);
			this->addTable->Controls->Add(this->label4);
			this->addTable->Controls->Add(this->monthCalendar1);
			this->addTable->Controls->Add(this->label3);
			this->addTable->Controls->Add(this->textBox1);
			this->addTable->Controls->Add(this->label2);
			this->addTable->Location = System::Drawing::Point(352, 98);
			this->addTable->Name = L"addTable";
			this->addTable->Size = System::Drawing::Size(281, 371);
			this->addTable->TabIndex = 4;
			this->addTable->TabStop = false;
			this->addTable->Text = L"Добавление";
			this->addTable->Visible = false;
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(180, 318);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(84, 21);
			this->add->TabIndex = 7;
			this->add->Text = L"Добавить✅";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &MyForm::addProcess);
			// 
			// closeForms
			// 
			this->closeForms->Location = System::Drawing::Point(249, 0);
			this->closeForms->Name = L"closeForms";
			this->closeForms->Size = System::Drawing::Size(32, 26);
			this->closeForms->TabIndex = 6;
			this->closeForms->Text = L"❌";
			this->closeForms->UseVisualStyleBackColor = true;
			this->closeForms->Click += gcnew System::EventHandler(this, &MyForm::closeTables);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"low", L"medium", L"high" });
			this->comboBox1->Location = System::Drawing::Point(21, 319);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Определите приоритет:";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(22, 121);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowTodayCircle = false;
			this->monthCalendar1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Установите дедлайн:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введите описание:";
			// 
			// Del_btn
			// 
			this->Del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Del_btn->Location = System::Drawing::Point(695, 212);
			this->Del_btn->Name = L"Del_btn";
			this->Del_btn->Size = System::Drawing::Size(246, 64);
			this->Del_btn->TabIndex = 3;
			this->Del_btn->Text = L"🗑Удалить";
			this->Del_btn->UseVisualStyleBackColor = true;
			this->Del_btn->Click += gcnew System::EventHandler(this, &MyForm::deleteButton);
			// 
			// Edit_btn
			// 
			this->Edit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Edit_btn->Location = System::Drawing::Point(695, 120);
			this->Edit_btn->Name = L"Edit_btn";
			this->Edit_btn->Size = System::Drawing::Size(246, 64);
			this->Edit_btn->TabIndex = 2;
			this->Edit_btn->Text = L"📝Редактировать";
			this->Edit_btn->UseVisualStyleBackColor = true;
			this->Edit_btn->Click += gcnew System::EventHandler(this, &MyForm::editButton);
			// 
			// Add_btn
			// 
			this->Add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Add_btn->Location = System::Drawing::Point(695, 30);
			this->Add_btn->Name = L"Add_btn";
			this->Add_btn->Size = System::Drawing::Size(246, 64);
			this->Add_btn->TabIndex = 1;
			this->Add_btn->Text = L"✅Добавить";
			this->Add_btn->UseVisualStyleBackColor = true;
			this->Add_btn->Click += gcnew System::EventHandler(this, &MyForm::addButton);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Description,
					this->Deadline, this->Priority, this->Status
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ScrollBar;
			this->dataGridView1->Location = System::Drawing::Point(31, 30);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(550, 500);
			this->dataGridView1->TabIndex = 0;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 40;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Description";
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Width = 337;
			// 
			// Deadline
			// 
			this->Deadline->HeaderText = L"Deadline";
			this->Deadline->Name = L"Deadline";
			this->Deadline->ReadOnly = true;
			this->Deadline->Width = 70;
			// 
			// Priority
			// 
			this->Priority->HeaderText = L"Priority";
			this->Priority->Name = L"Priority";
			this->Priority->ReadOnly = true;
			this->Priority->Width = 50;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Status";
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			this->Status->Width = 50;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->editTable);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->returnButton);
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(996, 578);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Проекты";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// editTable
			// 
			this->editTable->Controls->Add(this->comboBox3);
			this->editTable->Controls->Add(this->label8);
			this->editTable->Controls->Add(this->button4);
			this->editTable->Controls->Add(this->button5);
			this->editTable->Controls->Add(this->comboBox2);
			this->editTable->Controls->Add(this->label5);
			this->editTable->Controls->Add(this->monthCalendar2);
			this->editTable->Controls->Add(this->label6);
			this->editTable->Controls->Add(this->textBox2);
			this->editTable->Controls->Add(this->label7);
			this->editTable->Location = System::Drawing::Point(358, 104);
			this->editTable->Name = L"editTable";
			this->editTable->Size = System::Drawing::Size(281, 371);
			this->editTable->TabIndex = 7;
			this->editTable->TabStop = false;
			this->editTable->Text = L"Редактирование";
			this->editTable->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"to do", L"done" });
			this->comboBox3->Location = System::Drawing::Point(204, 108);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(71, 21);
			this->comboBox3->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(178, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Измените статус:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(172, 295);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 44);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Сохранить изменения✅";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::editProcess);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(249, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 26);
			this->button5->TabIndex = 6;
			this->button5->Text = L"❌";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::closeTables);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"low", L"medium", L"high" });
			this->comboBox2->Location = System::Drawing::Point(21, 319);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 292);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(116, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Измените приоритет:";
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Location = System::Drawing::Point(22, 121);
			this->monthCalendar2->MaxSelectionCount = 1;
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->ShowTodayCircle = false;
			this->monthCalendar2->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Измените дедлайн:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(21, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Измените описание/название:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(700, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 64);
			this->button1->TabIndex = 6;
			this->button1->Text = L"🗑Удалить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::deleteButton);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(700, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(246, 64);
			this->button2->TabIndex = 5;
			this->button2->Text = L"📝Редактировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::editButton);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(700, 30);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(246, 64);
			this->button3->TabIndex = 4;
			this->button3->Text = L"✅Добавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::addButton);
			// 
			// returnButton
			// 
			this->returnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->returnButton->Location = System::Drawing::Point(577, 30);
			this->returnButton->Name = L"returnButton";
			this->returnButton->Size = System::Drawing::Size(57, 43);
			this->returnButton->TabIndex = 1;
			this->returnButton->Text = L"⏎";
			this->returnButton->UseVisualStyleBackColor = true;
			this->returnButton->Visible = false;
			this->returnButton->Click += gcnew System::EventHandler(this, &MyForm::mainMenu_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(30, 30);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(550, 498);
			this->listBox1->TabIndex = 0;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::thisProject_click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->mainMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaskMaster";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->mainMenu->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->addTable->ResumeLayout(false);
			this->addTable->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->editTable->ResumeLayout(false);
			this->editTable->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion

	private: static void ShowErrorAndReturn(System::String^ errorMessage) {
		System::Windows::Forms::MessageBox::Show(errorMessage, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	void UpdateProjectListBox() {
		listBox1->Items->Clear();
		for (const auto& project : TM.getProjects()) {
			listBox1->Items->Add(gcnew System::String(project.getProjectName().c_str()));
		}
	}

	int GetPriorityFromText(System::String^ text) {
		if (text == "low") return 0;
		if (text == "medium") return 1;
		if (text == "high") return 2;
		return -1; 
	}

	String^ GetPriorityAsString(int priorityValue) {
		switch (priorityValue) {
		case 0:
			return "low";
		case 1:
			return "medium";
		case 2:
			return "high";
		default:
			return ""; 
		}
	}

	private: System::Void thisProject_click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Visible = false;
		if (listBox1->SelectedItem != nullptr) {
			int selectedIndex = listBox1->SelectedIndex;
			if (selectedIndex >= 0 && selectedIndex < TM.getProjects().size()) {
				DisplayTasksInDataGridView(TM.getProjects()[selectedIndex].getTasks(),3);
			}
		}
		this->returnButton->Visible = true;
	}
	
	private: void UpdateIndex() {
		for (int i = 0; i < TM.getTasks().size(); i++){
			TM.setTaskID(i, i + 1);
		}
		for (int i = 0; i < TM.getProjects().size(); i++) {
			for (int j = 0; j < TM.getProjects()[i].getTasks().size(); j++) {
				TM.setProjTaskId(i, j, (i + 1) * 100 + j + 1);
			}
		}
	}

	private: System::Void closeTables(System::Object^ sender, System::EventArgs^ e) {
		this->addTable->Visible = false;
		this->editTable->Visible = false;
	}

	private: bool validateData() {
		if (this->textBox1->Text == "") {
			ShowErrorAndReturn("Пожалуйста, введите корректное описание задачи.");
			return false;
		}
		if (this->comboBox1->Text == "" || (this->comboBox1->Text != "low" && this->comboBox1->Text != "medium" && this->comboBox1->Text != "high")) {
			ShowErrorAndReturn("Пожалуйста, установите приоритет.");
			return false;
		}
		return true;
	}

	private: void clearForm() {
		textBox1->Text = "";
		comboBox1->Text = "";
	}

	private: Task GetTaskFromSelectedRow() {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			int taskId = Convert::ToInt32(selectedRow->Cells[0]->Value->ToString());
			String^ description = selectedRow->Cells[1]->Value->ToString();
			String^ deadline = selectedRow->Cells[2]->Value->ToString();
			int priority = GetPriorityFromText(selectedRow->Cells[3]->Value->ToString());
			bool status = selectedRow->Cells[4]->Value->ToString() == "done";

			return Task(taskId, msclr::interop::marshal_as<std::string>(description),
				msclr::interop::marshal_as<std::string>(deadline), priority, status);
		}
		else {
			ShowErrorAndReturn("Выберите задачи для удаления!");
			return Task(0, "", "", 0, 0);
		}
	}

	private: System::Void addButton(System::Object^ sender, System::EventArgs^ e) {
		bool isMainMenuSelected = mainMenu->SelectedIndex == 1;
		bool returnButtonVisible = returnButton->Visible;

		label3->Visible = !listBox1->Visible;
		label4->Visible = !listBox1->Visible;
		monthCalendar1->Visible = !listBox1->Visible;
		comboBox1->Visible = !listBox1->Visible;
		tabPage3->Controls->Add(addTable);
		if (returnButtonVisible || isMainMenuSelected) {
			if (isMainMenuSelected)
				tabPage2->Controls->Add(addTable);
			else
				tabPage3->Controls->Add(addTable);
		}

		addTable->BringToFront();
		addTable->Visible = true;
	}

	private: System::Void addProcess(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Visible) {
			if (this->textBox1->Text == "") {
				ShowErrorAndReturn("Пожалуйста, введите корректное описание проекта.");
				return;
			}
			AddNewProject();
		}
		else {
			AddNewTask();
		}
	}

	private: void AddNewProject() {
		Project project(static_cast<int>(TM.getProjects().size() + 1), msclr::interop::marshal_as<std::string>(textBox1->Text));
		TM.createProject(project);
		UpdateProjectListBox();
		this->addTable->Visible = false;
	}

	private: void AddNewTask() {
		int priority = GetPriorityFromText(comboBox1->Text);
		int index = -1;

		if (returnButton->Visible) {
			index = (!TM.getProjects()[listBox1->SelectedIndex].getTasks().empty()) ?
				static_cast<int>(TM.getProjects()[listBox1->SelectedIndex].getTasks().back().getTaskId() + 1) :
				static_cast<int>(100 * TM.getProjects()[listBox1->SelectedIndex].getProjectId() + 1);
		}
		else {
			index = static_cast<int>(TM.getTasks().size() + 1);
		}

		if (validateData()) {
			Task task(
				index,
				msclr::interop::marshal_as<std::string>(textBox1->Text),
				msclr::interop::marshal_as<std::string>(monthCalendar1->SelectionStart.ToString("yyyy-MM-dd")),
				priority,
				0
			);
			this->addTable->Visible = false;
			if (returnButton->Visible) {
				TM.addTaskToProject(listBox1->SelectedIndex, task);
				DisplayTasksInDataGridView(TM.getProjects()[listBox1->SelectedIndex].getTasks(), 3);
			}
			else {
				TM.addTask(task);
				DisplayTasksInDataGridView(TM.getTasks(), 2);
			}
		}
		this->addTable->Visible = false;
		clearForm();
	}

	private: System::Void deleteButton(System::Object^ sender, System::EventArgs^ e) {
		if (mainMenu->SelectedIndex == 2 && listBox1->Visible) {
			DeleteProject();
		}
		else if (mainMenu->SelectedIndex == 1 || !listBox1->Visible) {
			DeleteTask();
		}
	}

	private: void DeleteProject() {
		if (listBox1->Visible) {
			int selectedIndex = listBox1->SelectedIndex;
			if (selectedIndex >= 0 && selectedIndex < TM.getProjects().size()) {
				Project projectToDelete = TM.getProjects()[selectedIndex];
				if (ConfirmDeletion("Вы уверены, что хотите удалить этот проект?")) {
					TM.deleteProject(projectToDelete);
					UpdateIndex();
					UpdateProjectListBox();
				}
			}
		}
	}

	private: void DeleteTask() {
		if (dataGridView1->RowCount > 0) {
			int selectedIndex = dataGridView1->SelectedRows[0]->Index;
			if (ConfirmDeletion("Вы уверены, что хотите удалить этот элемент?")) {
				if (selectedIndex >= 0 && selectedIndex < dataGridView1->RowCount) {
					Task taskToDelete = GetTaskFromSelectedRow();
					if (!returnButton->Visible) {
						TM.deleteTask(taskToDelete, true);
						DisplayTasksInDataGridView(TM.getTasks(), 2);
					}
					else {
						TM.deleteTask(taskToDelete, false);
						DisplayTasksInDataGridView(TM.getProjects()[listBox1->SelectedIndex].getTasks(), 3);
					}
					UpdateIndex();
				}
			}
		}
		else {
			ShowErrorAndReturn("Нечего удалять!");
		}
	}

	private: bool ConfirmDeletion(String^ message) {
		return MessageBox::Show(message, "Подтверждение удаления", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes;
	}

	private: void ShowAdditionalControls(bool visibility) {
		label5->Visible = visibility;
		label6->Visible = visibility;
		label7->Visible = visibility;
		comboBox3->Visible = visibility;
		comboBox2->Visible = visibility;
		label8->Visible = visibility;
		monthCalendar2->Visible = visibility;
	}

	private: System::Void editButton(System::Object^ sender, System::EventArgs^ e) {
		UpdateElementVisibility();
		UpdateIndex();
	}

	private: void ShowEditTableOnTabPage(TabPage^ tabPage) {
		tabPage->Controls->Add(editTable);
		editTable->BringToFront();
		editTable->Visible = true;
	}

	private: void PopulateEditControls(Task task) {
		comboBox3->Text = task.isDone() ? "done" : "to do";
		textBox2->Text = gcnew System::String(task.getDescription().c_str());
		monthCalendar2->SetDate(System::DateTime::ParseExact(gcnew System::String(task.getDeadline().c_str()), "yyyy-MM-dd", System::Globalization::CultureInfo::InvariantCulture));
		comboBox2->Text = GetPriorityAsString(task.getPriority());
	}

	private: void UpdateElementVisibility() {
		int selectedIndex;
		switch (mainMenu->SelectedIndex) {
			case 1:
				selectedIndex = dataGridView1->SelectedRows[0]->Index;
				ShowAdditionalControls(true);
				if (selectedIndex >= 0 && selectedIndex < TM.getTasks().size()) {
					tabPage2->Controls->Add(editTable);
					PopulateEditControls(TM.getTasks()[selectedIndex]);
				}
				ShowEditTableOnTabPage(tabPage2);
				break;

			case 2:
				selectedIndex = listBox1->SelectedIndex;
				if (selectedIndex >= 0 && selectedIndex < TM.getProjects().size()) {
					ShowAdditionalControls(false);
					ShowEditTableOnTabPage(tabPage3);
					textBox2->Text = gcnew System::String(TM.getProjects()[selectedIndex].getProjectName().c_str());
				}

				if (returnButton->Visible) {
					int selectedPr = listBox1->SelectedIndex;
					ShowAdditionalControls(true);
					if (selectedPr >= 0 && selectedPr < TM.getProjects().size()) {
						ShowEditTableOnTabPage(tabPage3);
						selectedIndex = dataGridView1->Rows[0]->Index;
						PopulateEditControls(TM.getProjects()[selectedPr].getTasks()[selectedIndex]);
					}
				}
				break;

			default:
				break;
		}
	}

	private: System::Void editProcess(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox2->Text == "") {
			ShowErrorAndReturn("Пожалуйста, введите корректное название задачи/проекта.");
			return;
		}

		int Index = (mainMenu->SelectedIndex == 1) ? dataGridView1->SelectedRows[0]->Index : listBox1->SelectedIndex;

		if (mainMenu->SelectedIndex == 1) {
			EditTask(Index);
		}
		else if (mainMenu->SelectedIndex == 2 && returnButton->Visible) {
			EditTaskInProject(Index);
		}
		else if (Index >= 0 && Index < TM.getProjects().size()) {
			EditProject(Index);
		}
	}

	private: void EditTask(int selectedIndex) {
		if (selectedIndex >= 0 && selectedIndex < TM.getTasks().size()) {
			if (comboBox3->Text == "done") {
				TM.markTaskAsDone(selectedIndex);
			}
			else {
				TM.markTaskAsToDo(selectedIndex);
			}
			TM.editTaskDescription(selectedIndex, msclr::interop::marshal_as<std::string>(textBox2->Text));
			TM.setTaskDeadline(selectedIndex, msclr::interop::marshal_as<std::string>(monthCalendar2->SelectionStart.ToString("yyyy-MM-dd")));
			int priority = GetPriorityFromText(comboBox2->Text);
			TM.setTaskPriority(selectedIndex, priority);
		}
		editTable->Visible = false;
		DisplayTasksInDataGridView(TM.getTasks(), 2);
	}

	private: void EditTaskInProject(int selectedIndex) {
		if (selectedIndex >= 0 && selectedIndex < TM.getProjects().size()) {
			int selectedTask = dataGridView1->Rows[0]->Index;
			if (comboBox3->Text == "done") {
				TM.setTaskAsDone(selectedIndex, selectedTask);
			}
			else {
				TM.setTaskAsToDo(selectedIndex, selectedTask);
			}
			TM.editTaskInProject(selectedIndex, selectedTask, msclr::interop::marshal_as<std::string>(textBox2->Text));
			TM.editTaskDeadlineInProject(selectedIndex, selectedTask, msclr::interop::marshal_as<std::string>(monthCalendar2->SelectionStart.ToString("yyyy-MM-dd")));
			int priority = GetPriorityFromText(comboBox2->Text);
			TM.setProjPriority(selectedIndex, selectedTask, priority);
		}
		editTable->Visible = false;
		DisplayTasksInDataGridView(TM.getProjects()[selectedIndex].getTasks(), 3);
	}

	private: void EditProject(int selectedIndex) {
		std::string newName = msclr::interop::marshal_as<std::string>(textBox2->Text);
		TM.editProjectName(selectedIndex, newName);
		UpdateProjectListBox();
		this->editTable->Visible = false;
	}

	private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ClearSelection();
		listBox1->ClearSelected();
	}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TM.importData("tasks.txt", "projects.txt");
	}

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		TM.exportData("tasks.txt", "projects.txt");
	}
	
	private: void DisplayTasksInDataGridView(std::vector<Task> tasks, int page) {
		if (page == 2) {
			this->tabPage2->Controls->Add(dataGridView1);
			dataGridView1->Visible = true;
		}
		else {
			this->tabPage3->Controls->Add(dataGridView1);
			dataGridView1->Visible = true;
		}
		UpdateIndex();
		dataGridView1->Rows->Clear();
		for (const auto& task : tasks) {
			String^ priority = GetPriorityAsString(task.getPriority());
			dataGridView1->Rows->Add(gcnew array<String^> {
				Convert::ToString(task.getTaskId()),
					gcnew String(task.getDescription().c_str()),
					gcnew String(task.getDeadline().c_str()),
					priority,
					task.isDone() ? "done" : "to do"
			});
		}
	}

	private: void DisplayTasksInListBox(std::vector<Project> projects) {
		this->listBox1->Visible = true;
		this->listBox1->Font = gcnew System::Drawing::Font("Arial", 24);
		this->dataGridView1->Visible = false;
		UpdateIndex();
		UpdateProjectListBox();
	}

	private: System::Void tasksButton_Click(System::Object^ sender, System::EventArgs^ e) {
		mainMenu->SelectedIndex = 1;
	}

	private: System::Void projectsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		mainMenu->SelectedIndex = 2;
	}

	private: System::Void mainMenu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (mainMenu->SelectedIndex == 1) {
			DisplayTasksInDataGridView(TM.getTasks(),2);
		}
		if (mainMenu->SelectedIndex == 2) {
			this->returnButton->Visible = false;
			DisplayTasksInListBox(TM.getProjects());
		}
	}
};
}
