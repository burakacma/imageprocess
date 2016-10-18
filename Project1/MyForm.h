#pragma once
#include <math.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_hesapla;
	protected:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ýmlecKordinatlarýToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resimCýkarmaToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  picBox_kor;

	private: System::Windows::Forms::Label^  lbl_mouse;
	private: System::Windows::Forms::Label^  lbl_x;
	private: System::Windows::Forms::Label^  lbl_y;
	private: System::Windows::Forms::TextBox^  tbx_x;
	private: System::Windows::Forms::TextBox^  tbx_y;
	private: System::Windows::Forms::Label^  lbl_ilkKordinat;
	private: System::Windows::Forms::Label^  lbl_ikiKodinat;


	private: System::Drawing::Graphics^ globalGraphics;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lbl_oklid;
	private: System::Windows::Forms::Label^  lbl_sehir;
	private: System::Windows::Forms::Label^  lbl_satranc;



	private: System::Windows::Forms::Label^  lbl_sayi1X;
	private: System::Windows::Forms::Label^  lbl_sayi1Y;
	private: System::Windows::Forms::Label^  lbl_sayi2X;
	private: System::Windows::Forms::Label^  lbl_sayi2Y;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_hesapla = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ýmlecKordinatlarýToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resimCýkarmaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->picBox_kor = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_mouse = (gcnew System::Windows::Forms::Label());
			this->lbl_x = (gcnew System::Windows::Forms::Label());
			this->lbl_y = (gcnew System::Windows::Forms::Label());
			this->tbx_x = (gcnew System::Windows::Forms::TextBox());
			this->tbx_y = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ilkKordinat = (gcnew System::Windows::Forms::Label());
			this->lbl_ikiKodinat = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl_oklid = (gcnew System::Windows::Forms::Label());
			this->lbl_sehir = (gcnew System::Windows::Forms::Label());
			this->lbl_satranc = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi1X = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi1Y = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi2X = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi2Y = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_hesapla
			// 
			this->btn_hesapla->Location = System::Drawing::Point(440, 244);
			this->btn_hesapla->Name = L"btn_hesapla";
			this->btn_hesapla->Size = System::Drawing::Size(75, 23);
			this->btn_hesapla->TabIndex = 0;
			this->btn_hesapla->Text = L"Hesapla";
			this->btn_hesapla->UseVisualStyleBackColor = true;
			this->btn_hesapla->Click += gcnew System::EventHandler(this, &MyForm::btn_hesapla_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ýmlecKordinatlarýToolStripMenuItem,
					this->resimCýkarmaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(649, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ýmlecKordinatlarýToolStripMenuItem
			// 
			this->ýmlecKordinatlarýToolStripMenuItem->Name = L"ýmlecKordinatlarýToolStripMenuItem";
			this->ýmlecKordinatlarýToolStripMenuItem->Size = System::Drawing::Size(112, 20);
			this->ýmlecKordinatlarýToolStripMenuItem->Text = L"Imlec Kordinatlarý";
			// 
			// resimCýkarmaToolStripMenuItem
			// 
			this->resimCýkarmaToolStripMenuItem->Name = L"resimCýkarmaToolStripMenuItem";
			this->resimCýkarmaToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->resimCýkarmaToolStripMenuItem->Text = L"Resim Cýkarma";
			// 
			// picBox_kor
			// 
			this->picBox_kor->BackColor = System::Drawing::SystemColors::ControlDark;
			this->picBox_kor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBox_kor.BackgroundImage")));
			this->picBox_kor->Location = System::Drawing::Point(12, 27);
			this->picBox_kor->Name = L"picBox_kor";
			this->picBox_kor->Size = System::Drawing::Size(296, 240);
			this->picBox_kor->TabIndex = 2;
			this->picBox_kor->TabStop = false;
			this->picBox_kor->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::picBox_kor_MouseClick);
			this->picBox_kor->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::picBox_kor_MouseMove);
			// 
			// lbl_mouse
			// 
			this->lbl_mouse->AutoSize = true;
			this->lbl_mouse->Location = System::Drawing::Point(328, 47);
			this->lbl_mouse->Name = L"lbl_mouse";
			this->lbl_mouse->Size = System::Drawing::Size(83, 13);
			this->lbl_mouse->TabIndex = 3;
			this->lbl_mouse->Text = L"Fare Kordinatlarý";
			// 
			// lbl_x
			// 
			this->lbl_x->AutoSize = true;
			this->lbl_x->Location = System::Drawing::Point(457, 27);
			this->lbl_x->Name = L"lbl_x";
			this->lbl_x->Size = System::Drawing::Size(14, 13);
			this->lbl_x->TabIndex = 4;
			this->lbl_x->Text = L"X";
			// 
			// lbl_y
			// 
			this->lbl_y->AutoSize = true;
			this->lbl_y->Location = System::Drawing::Point(555, 27);
			this->lbl_y->Name = L"lbl_y";
			this->lbl_y->Size = System::Drawing::Size(14, 13);
			this->lbl_y->TabIndex = 5;
			this->lbl_y->Text = L"Y";
			// 
			// tbx_x
			// 
			this->tbx_x->Location = System::Drawing::Point(440, 44);
			this->tbx_x->Name = L"tbx_x";
			this->tbx_x->Size = System::Drawing::Size(52, 20);
			this->tbx_x->TabIndex = 6;
			// 
			// tbx_y
			// 
			this->tbx_y->Location = System::Drawing::Point(536, 44);
			this->tbx_y->Name = L"tbx_y";
			this->tbx_y->Size = System::Drawing::Size(52, 20);
			this->tbx_y->TabIndex = 7;
			// 
			// lbl_ilkKordinat
			// 
			this->lbl_ilkKordinat->AutoSize = true;
			this->lbl_ilkKordinat->Location = System::Drawing::Point(328, 104);
			this->lbl_ilkKordinat->Name = L"lbl_ilkKordinat";
			this->lbl_ilkKordinat->Size = System::Drawing::Size(60, 13);
			this->lbl_ilkKordinat->TabIndex = 8;
			this->lbl_ilkKordinat->Text = L"Ýlk Kordinat";
			// 
			// lbl_ikiKodinat
			// 
			this->lbl_ikiKodinat->AutoSize = true;
			this->lbl_ikiKodinat->Location = System::Drawing::Point(328, 142);
			this->lbl_ikiKodinat->Name = L"lbl_ikiKodinat";
			this->lbl_ikiKodinat->Size = System::Drawing::Size(74, 13);
			this->lbl_ikiKodinat->TabIndex = 9;
			this->lbl_ikiKodinat->Text = L"Ýkinci Kordinat";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(353, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Oklid";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(533, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Satranç Tahtasý";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Þehir Blok";
			// 
			// lbl_oklid
			// 
			this->lbl_oklid->AutoSize = true;
			this->lbl_oklid->Location = System::Drawing::Point(353, 212);
			this->lbl_oklid->Name = L"lbl_oklid";
			this->lbl_oklid->Size = System::Drawing::Size(0, 13);
			this->lbl_oklid->TabIndex = 15;
			// 
			// lbl_sehir
			// 
			this->lbl_sehir->AutoSize = true;
			this->lbl_sehir->Location = System::Drawing::Point(440, 212);
			this->lbl_sehir->Name = L"lbl_sehir";
			this->lbl_sehir->Size = System::Drawing::Size(0, 13);
			this->lbl_sehir->TabIndex = 16;
			// 
			// lbl_satranc
			// 
			this->lbl_satranc->AutoSize = true;
			this->lbl_satranc->Location = System::Drawing::Point(555, 212);
			this->lbl_satranc->Name = L"lbl_satranc";
			this->lbl_satranc->Size = System::Drawing::Size(0, 13);
			this->lbl_satranc->TabIndex = 17;
			// 
			// lbl_sayi1X
			// 
			this->lbl_sayi1X->AutoSize = true;
			this->lbl_sayi1X->Location = System::Drawing::Point(440, 104);
			this->lbl_sayi1X->Name = L"lbl_sayi1X";
			this->lbl_sayi1X->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi1X->TabIndex = 18;
			// 
			// lbl_sayi1Y
			// 
			this->lbl_sayi1Y->AutoSize = true;
			this->lbl_sayi1Y->Location = System::Drawing::Point(536, 104);
			this->lbl_sayi1Y->Name = L"lbl_sayi1Y";
			this->lbl_sayi1Y->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi1Y->TabIndex = 19;
			// 
			// lbl_sayi2X
			// 
			this->lbl_sayi2X->AutoSize = true;
			this->lbl_sayi2X->Location = System::Drawing::Point(440, 142);
			this->lbl_sayi2X->Name = L"lbl_sayi2X";
			this->lbl_sayi2X->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi2X->TabIndex = 20;
			// 
			// lbl_sayi2Y
			// 
			this->lbl_sayi2Y->AutoSize = true;
			this->lbl_sayi2Y->Location = System::Drawing::Point(539, 142);
			this->lbl_sayi2Y->Name = L"lbl_sayi2Y";
			this->lbl_sayi2Y->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi2Y->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 323);
			this->Controls->Add(this->lbl_sayi2Y);
			this->Controls->Add(this->lbl_sayi2X);
			this->Controls->Add(this->lbl_sayi1Y);
			this->Controls->Add(this->lbl_sayi1X);
			this->Controls->Add(this->lbl_satranc);
			this->Controls->Add(this->lbl_sehir);
			this->Controls->Add(this->lbl_oklid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_ikiKodinat);
			this->Controls->Add(this->lbl_ilkKordinat);
			this->Controls->Add(this->tbx_y);
			this->Controls->Add(this->tbx_x);
			this->Controls->Add(this->lbl_y);
			this->Controls->Add(this->lbl_x);
			this->Controls->Add(this->lbl_mouse);
			this->Controls->Add(this->picBox_kor);
			this->Controls->Add(this->btn_hesapla);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void picBox_kor_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 tbx_x->Text = e->Location.X.ToString();
			 tbx_y->Text = e->Location.Y.ToString();
}
		 Boolean control = true;
private: System::Void picBox_kor_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (control){
			 lbl_sayi1X->Text = e->Location.X.ToString(); 
			 lbl_sayi1Y->Text = e->Location.Y.ToString();
			 control = false;
			 }
			 else
			 {
				 lbl_sayi2X->Text = e->Location.X.ToString();
				 lbl_sayi2Y->Text = e->Location.Y.ToString();
			 control = true;
			 }

}

private: System::Void btn_hesapla_Click(System::Object^  sender, System::EventArgs^  e) {
			 float oklid = 0.0;
			 float sehirblog = 0.0;
			 float satranc = 0.0;
			 float x1, x2, y1, y2, xa, ya;
			 x1 = Convert::ToInt32(lbl_sayi1X->Text);
			 x2 = Convert::ToInt32(lbl_sayi2X->Text);
			 y1 = Convert::ToInt32(lbl_sayi1Y->Text);
			 y2 = Convert::ToInt32(lbl_sayi2Y->Text);
			 xa = x2 - x1;
			 ya = y2 - y1;
			 oklid = sqrt((xa)+(ya));
			 lbl_oklid->Text = oklid.ToString();

			 sehirblog = fabs(xa) + fabs(ya);
			 lbl_sehir->Text = sehirblog.ToString();

			 
			 satranc = fmax(fabs(xa), fabs(ya));
			 lbl_satranc->Text = satranc.ToString();
}
};
}
