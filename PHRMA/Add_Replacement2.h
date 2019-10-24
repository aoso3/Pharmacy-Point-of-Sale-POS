#pragma once
#include"View.h"
#include <msclr/marshal_cppstd.h>
using namespace std;
namespace PHRMA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_Replacement1
	/// </summary>
	public ref class Add_Replacement1 : public System::Windows::Forms::Form
	{
		Pharamacy *pha;
		
	public:
		Add_Replacement1(Pharamacy *p)
		{
			InitializeComponent();
			pha = p;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add_Replacement1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Telerik::WinControls::UI::RadLabel^  radLabel12;
	protected:
	private: Telerik::WinControls::UI::RadLabel^  radLabel13;
	private: Telerik::WinControls::UI::RadLabel^  radLabel8;
	private: Telerik::WinControls::UI::RadLabel^  radLabel11;
	private: Telerik::WinControls::UI::RadLabel^  radLabel4;
	private: Telerik::WinControls::UI::RadLabel^  radLabel10;
	private: Telerik::WinControls::UI::RadLabel^  radLabel9;
	private: Telerik::WinControls::UI::RadLabel^  radLabel6;
	private: Telerik::WinControls::UI::RadLabel^  radLabel5;
	private: Telerik::WinControls::UI::RadLabel^  radLabel3;
	private: Telerik::WinControls::UI::RadLabel^  radLabel2;
	private: Telerik::WinControls::UI::RadLabel^  radLabel1;


	private: Telerik::WinControls::UI::RadButton^  radButton1;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox10;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox9;
	private: Telerik::WinControls::UI::RadLabel^  radLabel7;
	private: Telerik::WinControls::UI::RadButton^  radButton2;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox6;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox7;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox8;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox5;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox4;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox3;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox2;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox1;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox11;
	private: Telerik::WinControls::UI::RadLabel^  radLabel14;


















































































	protected:



























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radLabel12 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel13 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel8 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel11 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel4 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel10 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel9 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel6 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel5 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel3 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel2 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radLabel1 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radButton1 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radTextBox10 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox9 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radLabel7 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radButton2 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radTextBox6 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox7 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox8 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox5 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox4 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox3 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox2 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox1 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox11 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radLabel14 = (gcnew Telerik::WinControls::UI::RadLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox8))->BeginInit();
			this->radTextBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel14))->BeginInit();
			this->SuspendLayout();
			// 
			// radLabel12
			// 
			this->radLabel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel12->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel12->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel12->Location = System::Drawing::Point(101, 176);
			this->radLabel12->Name = L"radLabel12";
			this->radLabel12->Size = System::Drawing::Size(70, 23);
			this->radLabel12->TabIndex = 40;
			this->radLabel12->Text = L"EXP Date";
			this->radLabel12->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel13
			// 
			this->radLabel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel13->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel13->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel13->Location = System::Drawing::Point(98, 110);
			this->radLabel13->Name = L"radLabel13";
			this->radLabel13->Size = System::Drawing::Size(73, 23);
			this->radLabel13->TabIndex = 39;
			this->radLabel13->Text = L"PRO Date";
			this->radLabel13->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel8
			// 
			this->radLabel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel8->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel8->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel8->Location = System::Drawing::Point(186, 202);
			this->radLabel8->Name = L"radLabel8";
			this->radLabel8->Size = System::Drawing::Size(30, 19);
			this->radLabel8->TabIndex = 38;
			this->radLabel8->Text = L"Year";
			this->radLabel8->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel11
			// 
			this->radLabel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel11->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel11->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel11->Location = System::Drawing::Point(95, 202);
			this->radLabel11->Name = L"radLabel11";
			this->radLabel11->Size = System::Drawing::Size(44, 19);
			this->radLabel11->TabIndex = 37;
			this->radLabel11->Text = L"Month";
			this->radLabel11->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel4
			// 
			this->radLabel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel4->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel4->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel4->Location = System::Drawing::Point(97, 140);
			this->radLabel4->Name = L"radLabel4";
			this->radLabel4->Size = System::Drawing::Size(44, 19);
			this->radLabel4->TabIndex = 35;
			this->radLabel4->Text = L"Month";
			this->radLabel4->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel10
			// 
			this->radLabel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel10->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel10->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel10->Location = System::Drawing::Point(47, 283);
			this->radLabel10->Name = L"radLabel10";
			this->radLabel10->Size = System::Drawing::Size(51, 23);
			this->radLabel10->TabIndex = 34;
			this->radLabel10->Text = L"Count";
			this->radLabel10->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel9
			// 
			this->radLabel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel9->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel9->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel9->Location = System::Drawing::Point(47, 247);
			this->radLabel9->Name = L"radLabel9";
			this->radLabel9->Size = System::Drawing::Size(40, 23);
			this->radLabel9->TabIndex = 33;
			this->radLabel9->Text = L"Price";
			this->radLabel9->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel6
			// 
			this->radLabel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel6->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel6->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel6->Location = System::Drawing::Point(22, 202);
			this->radLabel6->Name = L"radLabel6";
			this->radLabel6->Size = System::Drawing::Size(27, 19);
			this->radLabel6->TabIndex = 32;
			this->radLabel6->Text = L"Day";
			this->radLabel6->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel5
			// 
			this->radLabel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel5->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel5->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel5->Location = System::Drawing::Point(186, 140);
			this->radLabel5->Name = L"radLabel5";
			this->radLabel5->Size = System::Drawing::Size(30, 19);
			this->radLabel5->TabIndex = 31;
			this->radLabel5->Text = L"Year";
			this->radLabel5->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel3
			// 
			this->radLabel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel3->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel3->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel3->Location = System::Drawing::Point(22, 140);
			this->radLabel3->Name = L"radLabel3";
			this->radLabel3->Size = System::Drawing::Size(27, 19);
			this->radLabel3->TabIndex = 36;
			this->radLabel3->Text = L"Day";
			this->radLabel3->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel2
			// 
			this->radLabel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel2->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel2->Location = System::Drawing::Point(12, 79);
			this->radLabel2->Name = L"radLabel2";
			this->radLabel2->Size = System::Drawing::Size(73, 23);
			this->radLabel2->TabIndex = 30;
			this->radLabel2->Text = L"Company";
			this->radLabel2->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel1
			// 
			this->radLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel1->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel1->Location = System::Drawing::Point(11, 44);
			this->radLabel1->Name = L"radLabel1";
			this->radLabel1->Size = System::Drawing::Size(139, 23);
			this->radLabel1->TabIndex = 29;
			this->radLabel1->Text = L"Replacement Name";
			this->radLabel1->ThemeName = L"TelerikMetroBlue";
			// 
			// radButton1
			// 
			this->radButton1->Location = System::Drawing::Point(11, 319);
			this->radButton1->Name = L"radButton1";
			this->radButton1->Size = System::Drawing::Size(87, 24);
			this->radButton1->TabIndex = 12;
			this->radButton1->Text = L"Back";
			this->radButton1->ThemeName = L"TelerikMetroBlue";
			this->radButton1->Click += gcnew System::EventHandler(this, &Add_Replacement1::radButton1_Click);
			// 
			// radTextBox10
			// 
			this->radTextBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox10->Location = System::Drawing::Point(165, 283);
			this->radTextBox10->Name = L"radTextBox10";
			this->radTextBox10->Size = System::Drawing::Size(99, 22);
			this->radTextBox10->TabIndex = 10;
			this->radTextBox10->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox9
			// 
			this->radTextBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox9->Location = System::Drawing::Point(165, 247);
			this->radTextBox9->Name = L"radTextBox9";
			this->radTextBox9->Size = System::Drawing::Size(99, 22);
			this->radTextBox9->TabIndex = 9;
			this->radTextBox9->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel7
			// 
			this->radLabel7->Location = System::Drawing::Point(34, 3);
			this->radLabel7->Name = L"radLabel7";
			this->radLabel7->Size = System::Drawing::Size(60, 19);
			this->radLabel7->TabIndex = 12;
			this->radLabel7->Text = L"radLabel7";
			this->radLabel7->ThemeName = L"TelerikMetroBlue";
			// 
			// radButton2
			// 
			this->radButton2->Location = System::Drawing::Point(199, 320);
			this->radButton2->Name = L"radButton2";
			this->radButton2->Size = System::Drawing::Size(87, 24);
			this->radButton2->TabIndex = 11;
			this->radButton2->Text = L"ADD";
			this->radButton2->ThemeName = L"TelerikMetroBlue";
			this->radButton2->Click += gcnew System::EventHandler(this, &Add_Replacement1::radButton2_Click);
			// 
			// radTextBox6
			// 
			this->radTextBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox6->Location = System::Drawing::Point(58, 208);
			this->radTextBox6->Name = L"radTextBox6";
			this->radTextBox6->Size = System::Drawing::Size(33, 22);
			this->radTextBox6->TabIndex = 6;
			this->radTextBox6->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox7
			// 
			this->radTextBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox7->Location = System::Drawing::Point(147, 208);
			this->radTextBox7->Name = L"radTextBox7";
			this->radTextBox7->Size = System::Drawing::Size(33, 22);
			this->radTextBox7->TabIndex = 7;
			this->radTextBox7->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox8
			// 
			this->radTextBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox8->Controls->Add(this->radLabel7);
			this->radTextBox8->Location = System::Drawing::Point(222, 208);
			this->radTextBox8->Name = L"radTextBox8";
			this->radTextBox8->Size = System::Drawing::Size(60, 22);
			this->radTextBox8->TabIndex = 8;
			this->radTextBox8->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox5
			// 
			this->radTextBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox5->Location = System::Drawing::Point(222, 139);
			this->radTextBox5->Name = L"radTextBox5";
			this->radTextBox5->Size = System::Drawing::Size(60, 22);
			this->radTextBox5->TabIndex = 5;
			this->radTextBox5->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox4
			// 
			this->radTextBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox4->Location = System::Drawing::Point(147, 139);
			this->radTextBox4->Name = L"radTextBox4";
			this->radTextBox4->Size = System::Drawing::Size(33, 22);
			this->radTextBox4->TabIndex = 4;
			this->radTextBox4->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox3
			// 
			this->radTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox3->Location = System::Drawing::Point(58, 139);
			this->radTextBox3->Name = L"radTextBox3";
			this->radTextBox3->Size = System::Drawing::Size(33, 22);
			this->radTextBox3->TabIndex = 3;
			this->radTextBox3->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox2
			// 
			this->radTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox2->Location = System::Drawing::Point(165, 79);
			this->radTextBox2->Name = L"radTextBox2";
			this->radTextBox2->Size = System::Drawing::Size(99, 22);
			this->radTextBox2->TabIndex = 2;
			this->radTextBox2->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox1
			// 
			this->radTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox1->Location = System::Drawing::Point(165, 44);
			this->radTextBox1->Name = L"radTextBox1";
			this->radTextBox1->Size = System::Drawing::Size(99, 22);
			this->radTextBox1->TabIndex = 1;
			this->radTextBox1->ThemeName = L"TelerikMetroBlue";
			// 
			// radTextBox11
			// 
			this->radTextBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radTextBox11->Location = System::Drawing::Point(165, 12);
			this->radTextBox11->Name = L"radTextBox11";
			this->radTextBox11->Size = System::Drawing::Size(99, 22);
			this->radTextBox11->TabIndex = 0;
			this->radTextBox11->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel14
			// 
			this->radLabel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel14->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel14->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel14->Location = System::Drawing::Point(12, 12);
			this->radLabel14->Name = L"radLabel14";
			this->radLabel14->Size = System::Drawing::Size(114, 23);
			this->radLabel14->TabIndex = 41;
			this->radLabel14->Text = L"Medicine Name";
			this->radLabel14->ThemeName = L"TelerikMetroBlue";
			// 
			// Add_Replacement1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(292, 348);
			this->ControlBox = false;
			this->Controls->Add(this->radLabel14);
			this->Controls->Add(this->radTextBox11);
			this->Controls->Add(this->radLabel12);
			this->Controls->Add(this->radLabel13);
			this->Controls->Add(this->radLabel8);
			this->Controls->Add(this->radLabel11);
			this->Controls->Add(this->radLabel4);
			this->Controls->Add(this->radLabel10);
			this->Controls->Add(this->radLabel9);
			this->Controls->Add(this->radLabel6);
			this->Controls->Add(this->radLabel5);
			this->Controls->Add(this->radLabel3);
			this->Controls->Add(this->radLabel2);
			this->Controls->Add(this->radLabel1);
			this->Controls->Add(this->radButton1);
			this->Controls->Add(this->radTextBox10);
			this->Controls->Add(this->radTextBox9);
			this->Controls->Add(this->radButton2);
			this->Controls->Add(this->radTextBox6);
			this->Controls->Add(this->radTextBox7);
			this->Controls->Add(this->radTextBox8);
			this->Controls->Add(this->radTextBox5);
			this->Controls->Add(this->radTextBox4);
			this->Controls->Add(this->radTextBox3);
			this->Controls->Add(this->radTextBox2);
			this->Controls->Add(this->radTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Add_Replacement1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add_Replacement1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox8))->EndInit();
			this->radTextBox8->ResumeLayout(false);
			this->radTextBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel14))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





	private: System::Void radButton1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 this->Owner->Show();
				 this->Close();

	}


			 std::string convert1(String^ x)
			 {
				 std::string converted_xyz = msclr::interop::marshal_as< std::string >(x);
				 return converted_xyz;
			 }

			 private: System::Void radButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if (radTextBox1->Text == "" || radTextBox2->Text == "" || radTextBox3->Text == "" || radTextBox4->Text == "" || radTextBox5->Text == "" || radTextBox6->Text == "" || radTextBox7->Text == "" || radTextBox8->Text == "" || radTextBox9->Text == "" || radTextBox10->Text == "" || radTextBox11->Text == "")
			 				 MessageBox::Show("Please Fill The Fields");
			 			 else
			 			 {
			 				 string M_name = convert1(radTextBox11->Text);
			 				 string R_name = convert1(radTextBox1->Text);
			 				 string company = convert1(radTextBox2->Text);
			 				 Date pro(Convert::ToInt16(radTextBox3->Text), Convert::ToInt16(radTextBox4->Text), Convert::ToInt16(radTextBox5->Text));
			 				 Date exp(Convert::ToInt16(radTextBox6->Text), Convert::ToInt16(radTextBox7->Text), Convert::ToInt16(radTextBox8->Text));
			 				 double price = Convert::ToDouble(radTextBox9->Text);
			 				 int count = Convert::ToInt16(radTextBox10->Text);
							 pha->Add_Rep(true,M_name, R_name, company, pro, exp, price, count);

							
			 				 
			 				 radTextBox1->Text = "";
			 				 radTextBox2->Text = "";
			 				 radTextBox3->Text = "";
			 				 radTextBox4->Text = "";
			 				 radTextBox5->Text = "";
			 				 radTextBox6->Text = "";
			 				 radTextBox7->Text = "";
			 				 radTextBox8->Text = "";
			 				 radTextBox9->Text  = "";
			 				 radTextBox10->Text = "";
			 				 radTextBox11->Text = "";
			 			 }
			 }

};
}
