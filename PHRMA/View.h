#include"View_2.h"
namespace PHRMA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for View
	/// </summary>
	public ref class View : public System::Windows::Forms::Form
	{
	public:
		Pharamacy *pha;
		View(Pharamacy *p)
		{
			InitializeComponent();
			pha = p;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Telerik::WinControls::UI::RadButton^  radButton5;
	private: Telerik::WinControls::UI::RadGridView^  radGridView1;
	private: Telerik::WinControls::Themes::TelerikMetroBlueTheme^  telerikMetroBlueTheme1;

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
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn1 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn2 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn3 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn4 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn5 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn6 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn7 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			Telerik::WinControls::UI::GridViewTextBoxColumn^  gridViewTextBoxColumn8 = (gcnew Telerik::WinControls::UI::GridViewTextBoxColumn());
			this->radButton5 = (gcnew Telerik::WinControls::UI::RadButton());
			this->radGridView1 = (gcnew Telerik::WinControls::UI::RadGridView());
			this->telerikMetroBlueTheme1 = (gcnew Telerik::WinControls::Themes::TelerikMetroBlueTheme());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1->MasterTemplate))->BeginInit();
			this->SuspendLayout();
			// 
			// radButton5
			// 
			this->radButton5->Location = System::Drawing::Point(0, 299);
			this->radButton5->Name = L"radButton5";
			this->radButton5->Size = System::Drawing::Size(85, 45);
			this->radButton5->TabIndex = 4;
			this->radButton5->Text = L"Back";
			this->radButton5->ThemeName = L"TelerikMetroBlue";
			this->radButton5->Click += gcnew System::EventHandler(this, &View::radButton5_Click);
			// 
			// radGridView1
			// 
			this->radGridView1->BackColor = System::Drawing::Color::Transparent;
			this->radGridView1->Location = System::Drawing::Point(0, 1);
			// 
			// radGridView1
			// 
			gridViewTextBoxColumn1->HeaderText = L"Dic";
			gridViewTextBoxColumn1->Name = L"column8";
			gridViewTextBoxColumn2->EnableExpressionEditor = true;
			gridViewTextBoxColumn2->HeaderText = L"Medicine Name";
			gridViewTextBoxColumn2->Name = L"column1";
			gridViewTextBoxColumn2->ReadOnly = true;
			gridViewTextBoxColumn2->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn2->Width = 120;
			gridViewTextBoxColumn3->HeaderText = L"Company";
			gridViewTextBoxColumn3->Name = L"column2";
			gridViewTextBoxColumn3->ReadOnly = true;
			gridViewTextBoxColumn3->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn3->Width = 120;
			gridViewTextBoxColumn4->HeaderText = L"Pro";
			gridViewTextBoxColumn4->Name = L"column3";
			gridViewTextBoxColumn4->ReadOnly = true;
			gridViewTextBoxColumn4->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn4->Width = 120;
			gridViewTextBoxColumn5->HeaderText = L"Exp";
			gridViewTextBoxColumn5->Name = L"column4";
			gridViewTextBoxColumn5->ReadOnly = true;
			gridViewTextBoxColumn5->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn5->Width = 120;
			gridViewTextBoxColumn6->HeaderText = L"price";
			gridViewTextBoxColumn6->Name = L"column5";
			gridViewTextBoxColumn6->ReadOnly = true;
			gridViewTextBoxColumn6->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn6->Width = 120;
			gridViewTextBoxColumn7->HeaderText = L"Count";
			gridViewTextBoxColumn7->Name = L"column6";
			gridViewTextBoxColumn7->ReadOnly = true;
			gridViewTextBoxColumn7->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn7->Width = 120;
			gridViewTextBoxColumn8->HeaderText = L"Replacments";
			gridViewTextBoxColumn8->Name = L"column7";
			gridViewTextBoxColumn8->ReadOnly = true;
			gridViewTextBoxColumn8->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			gridViewTextBoxColumn8->Width = 120;
			this->radGridView1->MasterTemplate->Columns->AddRange(gcnew cli::array< Telerik::WinControls::UI::GridViewDataColumn^  >(8) {
				gridViewTextBoxColumn1,
					gridViewTextBoxColumn2, gridViewTextBoxColumn3, gridViewTextBoxColumn4, gridViewTextBoxColumn5, gridViewTextBoxColumn6, gridViewTextBoxColumn7,
					gridViewTextBoxColumn8
			});
			this->radGridView1->Name = L"radGridView1";
			this->radGridView1->Size = System::Drawing::Size(677, 292);
			this->radGridView1->TabIndex = 5;
			this->radGridView1->Text = L"radGridView1";
			this->radGridView1->ThemeName = L"TelerikMetroBlue";
			this->radGridView1->Click += gcnew System::EventHandler(this, &View::radGridView1_Click);
			// 
			// View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(680, 345);
			this->ControlBox = false;
			this->Controls->Add(this->radGridView1);
			this->Controls->Add(this->radButton5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"View";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"View";
			this->Load += gcnew System::EventHandler(this, &View::View_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radButton5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1->MasterTemplate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->radGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radButton5_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 this->Owner->Show();
				 this->Close();
	}
	private: System::Void View_Load(System::Object^  sender, System::EventArgs^  e) {

				 int i = 0, j = 0;;
				 for (char c = 'a'; c <= 'z'; c++)

				 {
					 Medicine *Temp_Med = pha->PHA[c - 97];
					 while (Temp_Med != NULL)
					 {
						 radGridView1->Rows->Add(i);
						 string sc; sc.push_back(c);
						 String^ sc2 = gcnew String(sc.c_str());
						 radGridView1->Rows[i]->Cells[0]->Value = sc2;

						 string str = Temp_Med->Get_Rep()->Get_Name();
						 String^ str1 = gcnew String(str.c_str());
						 string sstr = Temp_Med->Get_Rep()->Get_Company();
						 String^ str2 = gcnew String(sstr.c_str());
						 int d1 = Temp_Med->Get_Rep()->Get_Pro().Get_Day();
						 int d2 = Temp_Med->Get_Rep()->Get_Pro().Get_Month();
						 int d3 = Temp_Med->Get_Rep()->Get_Pro().Get_Year();
						 int dd1 = Temp_Med->Get_Rep()->Get_Exp().Get_Day();
						 int dd2 = Temp_Med->Get_Rep()->Get_Exp().Get_Month();
						 int dd3 = Temp_Med->Get_Rep()->Get_Exp().Get_Year();


						 radGridView1->Rows[i]->Cells[1]->Value = str1;
						 radGridView1->Rows[i]->Cells[2]->Value = str2;
						 radGridView1->Rows[i]->Cells[3]->Value = d1.ToString() + "/" + d2.ToString() + "/" + d3.ToString();
						 radGridView1->Rows[i]->Cells[4]->Value = dd1.ToString() + "/" + dd2.ToString() + "/" + dd3.ToString();
						 radGridView1->Rows[i]->Cells[5]->Value = Temp_Med->Get_Rep()->Get_Price();
						 radGridView1->Rows[i]->Cells[6]->Value = Temp_Med->Get_Rep()->Get_Count();

						 Replacement *Temp_Rep = Temp_Med->Get_Rep()->Down;

						 if (Temp_Rep == NULL)
							 radGridView1->Rows[i]->Cells[7]->Value = " NO Replacment ! ";
						 else
						 while (Temp_Rep != NULL)
						 {

							 string ssstr = Temp_Rep->Get_Name();
							 String^ str3 = gcnew String(ssstr.c_str());
							 if (j==0)
							 radGridView1->Rows[i]->Cells[7]->Value += str3;
							 else
							 radGridView1->Rows[i]->Cells[7]->Value += " / " + str3;
							 Temp_Rep = Temp_Rep->Down;
							 j++;
						 }

						 Temp_Med = Temp_Med->Next;
						 i++;
						 j = 0;
					 }
				 }
	}


private: System::Void radGridView1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
