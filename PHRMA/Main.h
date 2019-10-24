#include"Add_Medicine1.h"
#include <msclr/marshal_cppstd.h>
#include<fstream>
#include<iostream>

namespace PHRMA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Pharamacy *pha;
		Main(void)
		{
			InitializeComponent();
			pha = new Pharamacy;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Telerik::WinControls::UI::RadButton^  radButton1;
	private: Telerik::WinControls::Themes::TelerikMetroBlueTheme^  telerikMetroBlueTheme1;
	private: Telerik::WinControls::UI::RadButton^  radButton2;
	private: Telerik::WinControls::UI::RadButton^  radButton3;
	private: Telerik::WinControls::UI::RadButton^  radButton4;
	private: Telerik::WinControls::UI::RadButton^  radButton5;
	private: Telerik::WinControls::UI::RadButton^  radButton6;
	private: Telerik::WinControls::UI::RadButton^  radButton9;
	private: Telerik::WinControls::UI::RadButton^  radButton12;







	private: Telerik::WinControls::UI::RadTextBox^  radTextBox1;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox2;
	private: Telerik::WinControls::UI::RadLabel^  radLabel1;
	private: Telerik::WinControls::UI::RadLabel^  radLabel2;
	private: Telerik::WinControls::UI::RadButton^  radButton14;


	private: Telerik::WinControls::UI::RadButton^  radButton7;
	private: Telerik::WinControls::UI::RadButton^  radButton8;


	private: Telerik::WinControls::UI::RadLabel^  radLabel3;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox3;
	private: Telerik::WinControls::UI::RadButton^  radButton10;
	private: Telerik::WinControls::UI::RadButton^  radButton11;
	private: Telerik::WinControls::UI::RadButton^  radButton13;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->radButton1 = (gcnew Telerik::WinControls::UI::RadButton());
			this->telerikMetroBlueTheme1 = (gcnew Telerik::WinControls::Themes::TelerikMetroBlueTheme());
			this->radButton2 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton3 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton4 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton5 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radLabel2 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radButton6 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton9 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton12 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radTextBox1 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radTextBox2 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radLabel1 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radButton14 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton7 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton8 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radLabel3 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->radTextBox3 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radButton10 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton13 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton11 = (gcnew Telerik::WinControls::UI::RadButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton11))->BeginInit();
			this->SuspendLayout();
			// 
			// radButton1
			// 
			this->radButton1->Location = System::Drawing::Point(128, 7);
			this->radButton1->Name = L"radButton1";
			this->radButton1->Size = System::Drawing::Size(131, 53);
			this->radButton1->TabIndex = 0;
			this->radButton1->Text = L"Add Medicine";
			this->radButton1->ThemeName = L"TelerikMetroBlue";
			this->radButton1->Click += gcnew System::EventHandler(this, &Main::radButton1_Click);
			// 
			// radButton2
			// 
			this->radButton2->Location = System::Drawing::Point(383, 7);
			this->radButton2->Name = L"radButton2";
			this->radButton2->Size = System::Drawing::Size(131, 53);
			this->radButton2->TabIndex = 1;
			this->radButton2->Text = L"Add Replacement";
			this->radButton2->ThemeName = L"TelerikMetroBlue";
			this->radButton2->Click += gcnew System::EventHandler(this, &Main::radButton2_Click);
			// 
			// radButton3
			// 
			this->radButton3->Location = System::Drawing::Point(128, 67);
			this->radButton3->Name = L"radButton3";
			this->radButton3->Size = System::Drawing::Size(131, 53);
			this->radButton3->TabIndex = 2;
			this->radButton3->Text = L"Delete Medicine";
			this->radButton3->ThemeName = L"TelerikMetroBlue";
			this->radButton3->Click += gcnew System::EventHandler(this, &Main::radButton3_Click);
			// 
			// radButton4
			// 
			this->radButton4->Location = System::Drawing::Point(385, 69);
			this->radButton4->Name = L"radButton4";
			this->radButton4->Size = System::Drawing::Size(131, 53);
			this->radButton4->TabIndex = 3;
			this->radButton4->Text = L"Delete Replacement";
			this->radButton4->ThemeName = L"TelerikMetroBlue";
			this->radButton4->Click += gcnew System::EventHandler(this, &Main::radButton4_Click);
			// 
			// radButton5
			// 
			this->radButton5->Location = System::Drawing::Point(128, 135);
			this->radButton5->Name = L"radButton5";
			this->radButton5->Size = System::Drawing::Size(131, 53);
			this->radButton5->TabIndex = 4;
			this->radButton5->Text = L"Search Medicine";
			this->radButton5->ThemeName = L"TelerikMetroBlue";
			this->radButton5->Click += gcnew System::EventHandler(this, &Main::radButton5_Click);
			// 
			// radLabel2
			// 
			this->radLabel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel2->Font = (gcnew System::Drawing::Font(L"Chiller", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel2->Location = System::Drawing::Point(245, 138);
			this->radLabel2->Name = L"radLabel2";
			this->radLabel2->Size = System::Drawing::Size(163, 37);
			this->radLabel2->TabIndex = 10;
			this->radLabel2->Text = L"Replacment Name";
			this->radLabel2->ThemeName = L"TelerikMetroBlue";
			this->radLabel2->Visible = false;
			// 
			// radButton6
			// 
			this->radButton6->Location = System::Drawing::Point(385, 135);
			this->radButton6->Name = L"radButton6";
			this->radButton6->Size = System::Drawing::Size(131, 53);
			this->radButton6->TabIndex = 5;
			this->radButton6->Text = L"Search Replacement";
			this->radButton6->ThemeName = L"TelerikMetroBlue";
			this->radButton6->Click += gcnew System::EventHandler(this, &Main::radButton6_Click);
			// 
			// radButton9
			// 
			this->radButton9->Location = System::Drawing::Point(128, 271);
			this->radButton9->Name = L"radButton9";
			this->radButton9->Size = System::Drawing::Size(131, 53);
			this->radButton9->TabIndex = 8;
			this->radButton9->Text = L"Print Pharmacy";
			this->radButton9->ThemeName = L"TelerikMetroBlue";
			this->radButton9->Click += gcnew System::EventHandler(this, &Main::radButton9_Click);
			// 
			// radButton12
			// 
			this->radButton12->Location = System::Drawing::Point(10, 370);
			this->radButton12->Name = L"radButton12";
			this->radButton12->Size = System::Drawing::Size(55, 46);
			this->radButton12->TabIndex = 11;
			this->radButton12->Text = L"Save";
			this->radButton12->ThemeName = L"TelerikMetroBlue";
			this->radButton12->Click += gcnew System::EventHandler(this, &Main::radButton12_Click);
			// 
			// radTextBox1
			// 
			this->radTextBox1->Location = System::Drawing::Point(274, 110);
			this->radTextBox1->Name = L"radTextBox1";
			this->radTextBox1->Size = System::Drawing::Size(100, 22);
			this->radTextBox1->TabIndex = 7;
			this->radTextBox1->ThemeName = L"TelerikMetroBlue";
			this->radTextBox1->Visible = false;
			// 
			// radTextBox2
			// 
			this->radTextBox2->Location = System::Drawing::Point(274, 193);
			this->radTextBox2->Name = L"radTextBox2";
			this->radTextBox2->Size = System::Drawing::Size(100, 22);
			this->radTextBox2->TabIndex = 8;
			this->radTextBox2->ThemeName = L"TelerikMetroBlue";
			this->radTextBox2->Visible = false;
			// 
			// radLabel1
			// 
			this->radLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel1->Font = (gcnew System::Drawing::Font(L"Chiller", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel1->Location = System::Drawing::Point(249, 67);
			this->radLabel1->Name = L"radLabel1";
			this->radLabel1->Size = System::Drawing::Size(142, 37);
			this->radLabel1->TabIndex = 9;
			this->radLabel1->Text = L"Medicine Name";
			this->radLabel1->ThemeName = L"TelerikMetroBlue";
			this->radLabel1->Visible = false;
			// 
			// radButton14
			// 
			this->radButton14->Location = System::Drawing::Point(274, 348);
			this->radButton14->Name = L"radButton14";
			this->radButton14->Size = System::Drawing::Size(100, 47);
			this->radButton14->TabIndex = 13;
			this->radButton14->Text = L"OK";
			this->radButton14->ThemeName = L"TelerikMetroBlue";
			this->radButton14->Visible = false;
			this->radButton14->Click += gcnew System::EventHandler(this, &Main::radButton14_Click);
			// 
			// radButton7
			// 
			this->radButton7->Location = System::Drawing::Point(128, 204);
			this->radButton7->Name = L"radButton7";
			this->radButton7->Size = System::Drawing::Size(131, 53);
			this->radButton7->TabIndex = 6;
			this->radButton7->Text = L"Sale Medicine";
			this->radButton7->ThemeName = L"TelerikMetroBlue";
			this->radButton7->Click += gcnew System::EventHandler(this, &Main::radButton7_Click);
			// 
			// radButton8
			// 
			this->radButton8->Location = System::Drawing::Point(385, 204);
			this->radButton8->Name = L"radButton8";
			this->radButton8->Size = System::Drawing::Size(131, 53);
			this->radButton8->TabIndex = 7;
			this->radButton8->Text = L"Sale Replacement";
			this->radButton8->ThemeName = L"TelerikMetroBlue";
			this->radButton8->Click += gcnew System::EventHandler(this, &Main::radButton8_Click);
			// 
			// radLabel3
			// 
			this->radLabel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel3->Font = (gcnew System::Drawing::Font(L"Chiller", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel3->Location = System::Drawing::Point(288, 238);
			this->radLabel3->Name = L"radLabel3";
			this->radLabel3->Size = System::Drawing::Size(64, 37);
			this->radLabel3->TabIndex = 11;
			this->radLabel3->Text = L"Count";
			this->radLabel3->ThemeName = L"TelerikMetroBlue";
			this->radLabel3->Visible = false;
			// 
			// radTextBox3
			// 
			this->radTextBox3->Location = System::Drawing::Point(274, 281);
			this->radTextBox3->Name = L"radTextBox3";
			this->radTextBox3->Size = System::Drawing::Size(100, 22);
			this->radTextBox3->TabIndex = 9;
			this->radTextBox3->ThemeName = L"TelerikMetroBlue";
			this->radTextBox3->Visible = false;
			// 
			// radButton10
			// 
			this->radButton10->Location = System::Drawing::Point(385, 271);
			this->radButton10->Name = L"radButton10";
			this->radButton10->Size = System::Drawing::Size(131, 53);
			this->radButton10->TabIndex = 9;
			this->radButton10->Text = L"Print Rep Of Med";
			this->radButton10->ThemeName = L"TelerikMetroBlue";
			this->radButton10->Click += gcnew System::EventHandler(this, &Main::radButton10_Click);
			// 
			// radButton13
			// 
			this->radButton13->Location = System::Drawing::Point(71, 370);
			this->radButton13->Name = L"radButton13";
			this->radButton13->Size = System::Drawing::Size(58, 46);
			this->radButton13->TabIndex = 12;
			this->radButton13->Text = L"Upload";
			this->radButton13->ThemeName = L"TelerikMetroBlue";
			this->radButton13->Click += gcnew System::EventHandler(this, &Main::radButton13_Click);
			// 
			// radButton11
			// 
			this->radButton11->Location = System::Drawing::Point(524, 370);
			this->radButton11->Name = L"radButton11";
			this->radButton11->Size = System::Drawing::Size(119, 46);
			this->radButton11->TabIndex = 10;
			this->radButton11->Text = L"Exit";
			this->radButton11->ThemeName = L"TelerikMetroBlue";
			this->radButton11->Click += gcnew System::EventHandler(this, &Main::radButton11_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(655, 419);
			this->Controls->Add(this->radLabel2);
			this->Controls->Add(this->radButton11);
			this->Controls->Add(this->radButton13);
			this->Controls->Add(this->radButton12);
			this->Controls->Add(this->radButton6);
			this->Controls->Add(this->radButton5);
			this->Controls->Add(this->radButton4);
			this->Controls->Add(this->radButton10);
			this->Controls->Add(this->radTextBox3);
			this->Controls->Add(this->radLabel3);
			this->Controls->Add(this->radButton7);
			this->Controls->Add(this->radButton8);
			this->Controls->Add(this->radButton14);
			this->Controls->Add(this->radLabel1);
			this->Controls->Add(this->radTextBox2);
			this->Controls->Add(this->radTextBox1);
			this->Controls->Add(this->radButton9);
			this->Controls->Add(this->radButton3);
			this->Controls->Add(this->radButton2);
			this->Controls->Add(this->radButton1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pharmacy";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void move1()
	{
			//	 for (int i = 0; i < 105; i += 35)
				 {
					 int i = 105;
					 radButton1->Location = System::Drawing::Point(128 - i, 7);
					 radButton2->Location = System::Drawing::Point(385 + i, 7);
					 radButton3->Location = System::Drawing::Point(128 - i, 67);
					 radButton4->Location = System::Drawing::Point(385 + i, 67);
					 radButton5->Location = System::Drawing::Point(128 - i, 135);
					 radButton6->Location = System::Drawing::Point(385 + i, 135);
					 radButton7->Location = System::Drawing::Point(128 - i, 204);
					 radButton8->Location = System::Drawing::Point(385 + i, 204);
					 radButton9->Location = System::Drawing::Point(128 - i, 271);
					 radButton10->Location = System::Drawing::Point(385 + i, 271);
				 }

				 this->radButton14->Show();

				 //this->radButton1->Enabled = false;
				 //this->radButton2->Enabled = false;
				 //this->radButton3->Enabled = false;
				 //this->radButton4->Enabled = false;
				 //this->radButton5->Enabled = false;
				 //this->radButton6->Enabled = false;
				 //this->radButton7->Enabled = false;
				 //this->radButton8->Enabled = false;
				 //this->radButton9->Enabled = false;
				 //this->radButton10->Enabled = false;
				 //this->radButton12->Enabled = false;
				 //this->radButton13->Enabled = false;
				 //this->radButton14->Enabled = false;

	}
			 
	private: void move2()
	{
				 //for (int i = 105; i > 0; i -= 35)
				 {
					 int i = 0;
					 radButton1->Location = System::Drawing::Point(128 - i, 7);
					 radButton2->Location = System::Drawing::Point(385 + i, 7);
					 radButton3->Location = System::Drawing::Point(128 - i, 67);
					 radButton4->Location = System::Drawing::Point(385 + i, 67);
					 radButton5->Location = System::Drawing::Point(128 - i, 135);
					 radButton6->Location = System::Drawing::Point(385 + i, 135);
					 radButton7->Location = System::Drawing::Point(128 - i, 204);
					 radButton8->Location = System::Drawing::Point(385 + i, 204);
					 radButton9->Location = System::Drawing::Point(128 - i, 271);
					 radButton10->Location = System::Drawing::Point(385 + i, 271);
				 }
				 this->radTextBox1->Hide();
				 this->radLabel1->Hide();
				 this->radTextBox2->Hide();
				 this->radLabel2->Hide();
				 this->radTextBox3->Hide();
				 this->radLabel3->Hide();
				 this->radButton14->Hide();
				 //this->radButton1->Enabled = true;
				 //this->radButton2->Enabled = true;
				 //this->radButton3->Enabled = true;
				 //this->radButton4->Enabled = true;
				 //this->radButton5->Enabled = true;
				 //this->radButton6->Enabled = true;
				 //this->radButton7->Enabled = true;
				 //this->radButton8->Enabled = true;
				 //this->radButton9->Enabled = true;
				 //this->radButton10->Enabled = true;
				 //this->radButton12->Enabled = true;
				 //this->radButton13->Enabled = true;
				 //	  this->radButton14->Enabled = true;

	}
  public: int bobo;
		  std::string convert1(String^ x)
		  {
			  std::string converted_xyz = msclr::interop::marshal_as< std::string >(x);
			  return converted_xyz;
		  }

		

private: System::Void radButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Add_Medicine ^ add_med = gcnew Add_Medicine(pha);
			 add_med->Owner = this;
			 add_med->ShowDialog();
}
private: System::Void radButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Add_Replacement1 ^ add_med = gcnew Add_Replacement1(pha);
			 add_med->Owner = this;
			 add_med->ShowDialog();
}
private: System::Void radButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 bobo = 3;
			 move1();
			 this->radTextBox1->Show();
			 this->radLabel1->Show();
			 this->radTextBox2->Hide();
			 this->radLabel2->Hide();
			 this->radTextBox3->Hide();
			 this->radLabel3->Hide();

}
private: System::Void radButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			 bobo = 4;
			 move1();
			 this->radTextBox1->Show();
			 this->radLabel1->Show();
			 this->radTextBox2->Show();
			 this->radLabel2->Show();
			 this->radTextBox3->Hide();
			 this->radLabel3->Hide();
}
private: System::Void radButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 bobo = 5;
			 move1();

			 this->radTextBox1->Show();
			 this->radLabel1->Show();
			 this->radTextBox2->Hide();
			 this->radLabel2->Hide();
			 this->radTextBox3->Hide();
			 this->radLabel3->Hide();
}
private: System::Void radButton6_Click(System::Object^  sender, System::EventArgs^  e) {
			 bobo = 6;
			 move1();
			 this->radTextBox1->Show();
			 this->radLabel1->Show();
			 this->radTextBox2->Show();
			 this->radLabel2->Show();
			 this->radTextBox3->Hide();
			 this->radLabel3->Hide();
}
private: System::Void radButton7_Click(System::Object^  sender, System::EventArgs^  e) {
			 bobo = 7;
			 move1();

			 this->radTextBox1->Show();
			 this->radLabel1->Show();
			 this->radTextBox2->Hide();
			 this->radLabel2->Hide();
			 this->radTextBox3->Show();
			 this->radLabel3->Show();

}
private: System::Void radButton8_Click(System::Object^  sender, System::EventArgs^  e) {
			 bobo =8;
			 move1();
			 this->radTextBox1->Show();
			 this->radLabel1->Show();
			 this->radTextBox2->Show();
			 this->radLabel2->Show();
			 this->radTextBox3->Show();
			 this->radLabel3->Show();
}
private: System::Void radButton9_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View ^ view_pha = gcnew View(pha);
			 view_pha->Owner = this;
			 view_pha->ShowDialog();
}
private: System::Void radButton10_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 View_2 ^ view_rep = gcnew View_2(pha);
			 view_rep->Owner = this;
			 view_rep->ShowDialog();
}
private: System::Void radButton14_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (bobo == 3 || bobo == 5 || bobo == 7)
			 {
				 if (radTextBox1->Text == "")
				 {
					 move2();
				 }
				 else {
					 if (bobo == 3)
						 pha->Delete_Med(convert1(radTextBox1->Text));
					 else if (bobo == 5)
					 {
						 Medicine*med = pha->Search_Med(convert1(radTextBox1->Text));
						 if (med == NULL)
							 MessageBox::Show("Sorry , The Medicine " + radTextBox1->Text + "  is not found");
						 else
							 MessageBox::Show(" The Medicine " + radTextBox1->Text + " is  found");
					 }
					 else
						 pha->Sale_Med(convert1(radTextBox1->Text), Convert::ToInt16(radTextBox3->Text));
					 move2();
				 }
			 }
			 else
			 {
				 if (radTextBox1->Text == "" || radTextBox2->Text == "")
				 {
					 move2();
				 }
				 else
				 {
					 if (bobo == 4)
						 pha->Delete_Rep(convert1(radTextBox1->Text), convert1(radTextBox2->Text));
					 else if (bobo == 6)
					 {
						Replacement*rep= pha->Search_Rep(convert1(radTextBox1->Text), convert1(radTextBox2->Text));
						 if (rep == NULL)
							 MessageBox::Show("Sorry , The Replacement " + radTextBox2->Text + "  is not found");
						 else

							 MessageBox::Show("The Replacement " + radTextBox1->Text + "  of  The Medicine " + radTextBox2->Text + "  is  found");
					 }
					 else
						 pha->Sale_Rep(convert1(radTextBox1->Text), convert1(radTextBox2->Text), Convert::ToInt16(radTextBox3->Text));
					 move2();
				 }
			 }

			 radTextBox1->Text = "";
			 radTextBox2->Text = "";
			 radTextBox3->Text = "";
			
}
private: System::Void radButton11_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
	private: System::Void radButton12_Click(System::Object^  sender, System::EventArgs^  e) {

					 ofstream file;

					 file.open("D:\\new Pharmacy.txt");
					 for (char c = 'a'; c < 'z'; c++)
					 {
						 Medicine * p = pha->PHA[c - 97];
						 while (p != NULL)
						 {
							 file << "Medicine " << endl;
							 file << p->Get_Rep()->Get_Name() << endl;
							 file << p->Get_Rep()->Get_Company() << endl;
							 file << p->Get_Rep()->Get_Pro().Get_Day() << endl;
							 file << p->Get_Rep()->Get_Pro().Get_Month() << endl;
							 file << p->Get_Rep()->Get_Pro().Get_Year() << endl;
							 file << p->Get_Rep()->Get_Exp().Get_Day() << endl;
							 file << p->Get_Rep()->Get_Exp().Get_Month() << endl;
							 file << p->Get_Rep()->Get_Exp().Get_Year() << endl;
							 file << p->Get_Rep()->Get_Count() << endl;
							 file << p->Get_Rep()->Get_Price() << endl;

							 Replacement *temp = p->Get_Rep()->Down;
							 while (temp != NULL)
							 {

								 file << "Replacement " << endl;

								 file << temp->Get_Name() << endl;
								 file << temp->Get_Company() << endl;
								 file << temp->Get_Pro().Get_Day() << endl;
								 file << temp->Get_Pro().Get_Month() << endl;
								 file << temp->Get_Pro().Get_Year() << endl;
								 file << temp->Get_Exp().Get_Day() << endl;
								 file << temp->Get_Exp().Get_Month() << endl;
								 file << temp->Get_Exp().Get_Year() << endl;
								 file << temp->Get_Count() << endl;
								 file << temp->Get_Price() << endl;

								 temp = temp->Down;
							 }
							 p = p->Next;
						 }
					 }
					 file.close();
					 MessageBox::Show("File Has Been Saved On D:\\new Pharmacy.txt");
				 
}

private: System::Void radButton13_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 string s, name_med, name_rep, company, d, m, y, d1, m1, y1, count, price;
			 int di, mi, yi, d1i, m1i, y1i, counti, pricei;

				 if (openFileDialog1->ShowDialog().ToString() !="")
				 {

					 System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);

					 while (!sr->EndOfStream)
					 {
						 s = convert1(sr->ReadLine());
						 if (s == "Medicine")
						 {

							 name_med = convert1(sr->ReadLine());
							 company = convert1(sr->ReadLine());
							 d = convert1(sr->ReadLine()); di = stoi(d);
							 m = convert1(sr->ReadLine()); mi = stoi(m);
							 y = convert1(sr->ReadLine()); yi = stoi(y);
							 d1 = convert1(sr->ReadLine()); d1i = stoi(d1);
							 m1 = convert1(sr->ReadLine()); m1i = stoi(m1);
							 y1 = convert1(sr->ReadLine()); y1i = stoi(y1);
							 count = convert1(sr->ReadLine()); counti = stoi(count);
							 price = convert1(sr->ReadLine()); pricei = stoi(price);

							 pha->Add_Med(false, name_med, company, Date(di, mi, yi), Date(d1i, m1i, y1i), pricei, counti);
							 s.clear();
						 }
						 else
						 {
							 name_med = convert1(sr->ReadLine());
							 name_rep = convert1(sr->ReadLine());
							 company = convert1(sr->ReadLine());
							 d = convert1(sr->ReadLine()); di = stoi(d);
							 m = convert1(sr->ReadLine()); mi = stoi(m);
							 y = convert1(sr->ReadLine()); yi = stoi(y);
							 d1 = convert1(sr->ReadLine()); d1i = stoi(d1);
							 m1 = convert1(sr->ReadLine()); m1i = stoi(m1);
							 y1 = convert1(sr->ReadLine()); y1i = stoi(y1);
							 count = convert1(sr->ReadLine()); counti = stoi(count);
							 price = convert1(sr->ReadLine()); pricei = stoi(price);

							 pha->Add_Rep(false, name_med, name_rep, company, Date(di, mi, yi), Date(d1i, m1i, y1i), pricei, counti);
							 s.clear();
						 }

					 }
				 }
}
private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
