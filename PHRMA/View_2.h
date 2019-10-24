#include"Pharamacy.h"
#include <msclr/marshal_cppstd.h>

namespace PHRMA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for View_2
	/// </summary>
	public ref class View_2 : public System::Windows::Forms::Form
	{
	public:
		Pharamacy *pha;
		View_2(Pharamacy *p)
		{
			InitializeComponent();
			pha = p;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Telerik::WinControls::UI::RadGridView^  radGridView1;
	protected:
	private: Telerik::WinControls::UI::RadButton^  radButton5;


	private: Telerik::WinControls::UI::RadButton^  radButton1;
	private: Telerik::WinControls::UI::RadTextBox^  radTextBox1;
	private: Telerik::WinControls::UI::RadLabel^  radLabel14;
	private: Telerik::WinControls::Themes::TelerikMetroBlueTheme^  telerikMetroBlueTheme1;

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
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn1 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn2 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn3 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn4 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn5 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn6 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			this->radGridView1 = (gcnew Telerik::WinControls::UI::RadGridView());
			this->radButton5 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radButton1 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radTextBox1 = (gcnew Telerik::WinControls::UI::RadTextBox());
			this->radLabel14 = (gcnew Telerik::WinControls::UI::RadLabel());
			this->telerikMetroBlueTheme1 = (gcnew Telerik::WinControls::Themes::TelerikMetroBlueTheme());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1->MasterTemplate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel14))->BeginInit();
			this->SuspendLayout();
			// 
			// radGridView1
			// 
			this->radGridView1->BackColor = System::Drawing::Color::Transparent;
			this->radGridView1->Location = System::Drawing::Point(1, 48);
			// 
			// radGridView1
			// 
			gridViewTextBoxColumn1->EnableExpressionEditor = true;
			gridViewTextBoxColumn1->HeaderText = L"Medicine Name";
			gridViewTextBoxColumn1->Name = L"column1";
			gridViewTextBoxColumn1->ReadOnly = true;
			gridViewTextBoxColumn1->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn1->Width = 120;
			gridViewTextBoxColumn2->HeaderText = L"Company";
			gridViewTextBoxColumn2->Name = L"column2";
			gridViewTextBoxColumn2->ReadOnly = true;
			gridViewTextBoxColumn2->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn2->Width = 120;
			gridViewTextBoxColumn3->HeaderText = L"Pro";
			gridViewTextBoxColumn3->Name = L"column3";
			gridViewTextBoxColumn3->ReadOnly = true;
			gridViewTextBoxColumn3->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn3->Width = 120;
			gridViewTextBoxColumn4->HeaderText = L"Exp";
			gridViewTextBoxColumn4->Name = L"column4";
			gridViewTextBoxColumn4->ReadOnly = true;
			gridViewTextBoxColumn4->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn4->Width = 120;
			gridViewTextBoxColumn5->HeaderText = L"price";
			gridViewTextBoxColumn5->Name = L"column5";
			gridViewTextBoxColumn5->ReadOnly = true;
			gridViewTextBoxColumn5->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn5->Width = 120;
			gridViewTextBoxColumn6->HeaderText = L"Count";
			gridViewTextBoxColumn6->Name = L"column6";
			gridViewTextBoxColumn6->ReadOnly = true;
			gridViewTextBoxColumn6->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn6->Width = 120;
			this->radGridView1->MasterTemplate->Columns->AddRange(gcnew cli::array< Telerik::WinControls::UI::GridViewDataColumn^  >(6) {
				gridViewTextBoxColumn1,
					gridViewTextBoxColumn2, gridViewTextBoxColumn3, gridViewTextBoxColumn4, gridViewTextBoxColumn5, gridViewTextBoxColumn6
			});
			this->radGridView1->Name = L"radGridView1";
			this->radGridView1->Size = System::Drawing::Size(677, 274);
			this->radGridView1->TabIndex = 7;
			this->radGridView1->Text = L"radGridView1";
			this->radGridView1->ThemeName = L"TelerikMetroBlue";
			this->radGridView1->Click += gcnew System::EventHandler(this, &View_2::radGridView1_Click);
			// 
			// radButton5
			// 
			this->radButton5->Location = System::Drawing::Point(1, 328);
			this->radButton5->Name = L"radButton5";
			this->radButton5->Size = System::Drawing::Size(85, 45);
			this->radButton5->TabIndex = 2;
			this->radButton5->Text = L"Back";
			this->radButton5->ThemeName = L"TelerikMetroBlue";
			this->radButton5->Click += gcnew System::EventHandler(this, &View_2::radButton5_Click);
			// 
			// radButton1
			// 
			this->radButton1->Location = System::Drawing::Point(342, 10);
			this->radButton1->Name = L"radButton1";
			this->radButton1->Size = System::Drawing::Size(93, 26);
			this->radButton1->TabIndex = 1;
			this->radButton1->Text = L"View";
			this->radButton1->ThemeName = L"TelerikMetroBlue";
			this->radButton1->Click += gcnew System::EventHandler(this, &View_2::radButton1_Click);
			// 
			// radTextBox1
			// 
			this->radTextBox1->Location = System::Drawing::Point(220, 12);
			this->radTextBox1->Name = L"radTextBox1";
			this->radTextBox1->Size = System::Drawing::Size(100, 22);
			this->radTextBox1->TabIndex = 0;
			this->radTextBox1->ThemeName = L"TelerikMetroBlue";
			// 
			// radLabel14
			// 
			this->radLabel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radLabel14->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radLabel14->ForeColor = System::Drawing::Color::Maroon;
			this->radLabel14->Location = System::Drawing::Point(74, 12);
			this->radLabel14->Name = L"radLabel14";
			this->radLabel14->Size = System::Drawing::Size(114, 23);
			this->radLabel14->TabIndex = 42;
			this->radLabel14->Text = L"Medicine Name";
			this->radLabel14->ThemeName = L"TelerikMetroBlue";
			// 
			// View_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(678, 374);
			this->ControlBox = false;
			this->Controls->Add(this->radLabel14);
			this->Controls->Add(this->radTextBox1);
			this->Controls->Add(this->radButton1);
			this->Controls->Add(this->radGridView1);
			this->Controls->Add(this->radButton5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"View_2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View_2";
			this->Load += gcnew System::EventHandler(this, &View_2::View_2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1->MasterTemplate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radTextBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radLabel14))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string convert1(String^ x)
		{
			std::string converted_xyz = msclr::interop::marshal_as< std::string >(x);
			return converted_xyz;
		}

	private: System::Void radButton5_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 this->Owner->Show();
				 this->Close();
	}
private: System::Void View_2_Load(System::Object^  sender, System::EventArgs^  e) {
			

}
private: System::Void radButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (radTextBox1->Text == "")
				 MessageBox::Show("Please Fill The Field ");
			 else
			 {
				 while (radGridView1->RowCount - 1 >= 0)
				 {
					 radGridView1->Rows[radGridView1->RowCount - 1]->Delete();
				 }
				 int i = 0;
				 Medicine * Temp_Med = pha->Search_Med(convert1(radTextBox1->Text));
				 if (Temp_Med == NULL)
					 MessageBox::Show("NO Replacment For This Med !");
				 else
				 {
					 Replacement *Temp_Rep = Temp_Med->Get_Rep()->Down;
					 while (Temp_Rep != NULL)
					 {
						 radGridView1->Rows->Add(i);

						 string str = Temp_Rep->Get_Name();
						 String^ str1 = gcnew String(str.c_str());
						 string sstr = Temp_Rep->Get_Company();
						 String^ str2 = gcnew String(sstr.c_str());
						 int d1 = Temp_Rep->Get_Pro().Get_Day();
						 int d2 = Temp_Rep->Get_Pro().Get_Month();
						 int d3 = Temp_Rep->Get_Pro().Get_Year();
						 int dd1 = Temp_Rep->Get_Exp().Get_Day();
						 int dd2 = Temp_Rep->Get_Exp().Get_Month();
						 int dd3 = Temp_Rep->Get_Exp().Get_Year();


						 radGridView1->Rows[i]->Cells[0]->Value = str1;
						 radGridView1->Rows[i]->Cells[1]->Value = str2;
						 radGridView1->Rows[i]->Cells[2]->Value = d1.ToString() + "/" + d2.ToString() + "/" + d3.ToString();
						 radGridView1->Rows[i]->Cells[3]->Value = dd1.ToString() + "/" + dd2.ToString() + "/" + dd3.ToString();
						 radGridView1->Rows[i]->Cells[4]->Value = Temp_Rep->Get_Price();
						 radGridView1->Rows[i]->Cells[5]->Value = Temp_Rep->Get_Count();

						 Temp_Rep = Temp_Rep->Down;
						 i++;
					 }
				 }
			 }

}
private: System::Void radGridView1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
