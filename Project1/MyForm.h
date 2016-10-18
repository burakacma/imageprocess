#pragma once
#include <math.h>
#include "opencv2\opencv.hpp"
#include "opencv2\core\core.hpp"
#include "opencv2\highgui\highgui.hpp"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace std;


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

	protected:















	private: System::Drawing::Graphics^ globalGraphics;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  lbl_sayi2Y;
	private: System::Windows::Forms::Label^  lbl_sayi2X;
	private: System::Windows::Forms::Label^  lbl_sayi1Y;
	private: System::Windows::Forms::Label^  lbl_sayi1X;
	private: System::Windows::Forms::Label^  lbl_satranc;
	private: System::Windows::Forms::Label^  lbl_sehir;
	private: System::Windows::Forms::Label^  lbl_oklid;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_ikiKodinat;
	private: System::Windows::Forms::Label^  lbl_ilkKordinat;
	private: System::Windows::Forms::TextBox^  tbx_y;
	private: System::Windows::Forms::TextBox^  tbx_x;
	private: System::Windows::Forms::Label^  lbl_y;
	private: System::Windows::Forms::Label^  lbl_x;
	private: System::Windows::Forms::Label^  lbl_mouse;
	private: System::Windows::Forms::PictureBox^  picBox_kor;
	private: System::Windows::Forms::Button^  btn_hesapla;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::PictureBox^  picBox_kaydýrma2;

	private: System::Windows::Forms::PictureBox^  picBox_kaydirma1;
	private: System::Windows::Forms::Button^  btn_K_resimekle;
	private: System::Windows::Forms::Button^  button1;














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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lbl_sayi2Y = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi2X = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi1Y = (gcnew System::Windows::Forms::Label());
			this->lbl_sayi1X = (gcnew System::Windows::Forms::Label());
			this->lbl_satranc = (gcnew System::Windows::Forms::Label());
			this->lbl_sehir = (gcnew System::Windows::Forms::Label());
			this->lbl_oklid = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_ikiKodinat = (gcnew System::Windows::Forms::Label());
			this->lbl_ilkKordinat = (gcnew System::Windows::Forms::Label());
			this->tbx_y = (gcnew System::Windows::Forms::TextBox());
			this->tbx_x = (gcnew System::Windows::Forms::TextBox());
			this->lbl_y = (gcnew System::Windows::Forms::Label());
			this->lbl_x = (gcnew System::Windows::Forms::Label());
			this->lbl_mouse = (gcnew System::Windows::Forms::Label());
			this->picBox_kor = (gcnew System::Windows::Forms::PictureBox());
			this->btn_hesapla = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btn_K_resimekle = (gcnew System::Windows::Forms::Button());
			this->picBox_kaydýrma2 = (gcnew System::Windows::Forms::PictureBox());
			this->picBox_kaydirma1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydýrma2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(744, 364);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lbl_sayi2Y);
			this->tabPage1->Controls->Add(this->lbl_sayi2X);
			this->tabPage1->Controls->Add(this->lbl_sayi1Y);
			this->tabPage1->Controls->Add(this->lbl_sayi1X);
			this->tabPage1->Controls->Add(this->lbl_satranc);
			this->tabPage1->Controls->Add(this->lbl_sehir);
			this->tabPage1->Controls->Add(this->lbl_oklid);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->lbl_ikiKodinat);
			this->tabPage1->Controls->Add(this->lbl_ilkKordinat);
			this->tabPage1->Controls->Add(this->tbx_y);
			this->tabPage1->Controls->Add(this->tbx_x);
			this->tabPage1->Controls->Add(this->lbl_y);
			this->tabPage1->Controls->Add(this->lbl_x);
			this->tabPage1->Controls->Add(this->lbl_mouse);
			this->tabPage1->Controls->Add(this->picBox_kor);
			this->tabPage1->Controls->Add(this->btn_hesapla);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(736, 338);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Uzaklýk";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lbl_sayi2Y
			// 
			this->lbl_sayi2Y->AutoSize = true;
			this->lbl_sayi2Y->Location = System::Drawing::Point(544, 137);
			this->lbl_sayi2Y->Name = L"lbl_sayi2Y";
			this->lbl_sayi2Y->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi2Y->TabIndex = 40;
			// 
			// lbl_sayi2X
			// 
			this->lbl_sayi2X->AutoSize = true;
			this->lbl_sayi2X->Location = System::Drawing::Point(445, 137);
			this->lbl_sayi2X->Name = L"lbl_sayi2X";
			this->lbl_sayi2X->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi2X->TabIndex = 39;
			// 
			// lbl_sayi1Y
			// 
			this->lbl_sayi1Y->AutoSize = true;
			this->lbl_sayi1Y->Location = System::Drawing::Point(541, 99);
			this->lbl_sayi1Y->Name = L"lbl_sayi1Y";
			this->lbl_sayi1Y->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi1Y->TabIndex = 38;
			// 
			// lbl_sayi1X
			// 
			this->lbl_sayi1X->AutoSize = true;
			this->lbl_sayi1X->Location = System::Drawing::Point(445, 99);
			this->lbl_sayi1X->Name = L"lbl_sayi1X";
			this->lbl_sayi1X->Size = System::Drawing::Size(0, 13);
			this->lbl_sayi1X->TabIndex = 37;
			// 
			// lbl_satranc
			// 
			this->lbl_satranc->AutoSize = true;
			this->lbl_satranc->Location = System::Drawing::Point(560, 207);
			this->lbl_satranc->Name = L"lbl_satranc";
			this->lbl_satranc->Size = System::Drawing::Size(0, 13);
			this->lbl_satranc->TabIndex = 36;
			// 
			// lbl_sehir
			// 
			this->lbl_sehir->AutoSize = true;
			this->lbl_sehir->Location = System::Drawing::Point(445, 207);
			this->lbl_sehir->Name = L"lbl_sehir";
			this->lbl_sehir->Size = System::Drawing::Size(0, 13);
			this->lbl_sehir->TabIndex = 35;
			// 
			// lbl_oklid
			// 
			this->lbl_oklid->AutoSize = true;
			this->lbl_oklid->Location = System::Drawing::Point(358, 207);
			this->lbl_oklid->Name = L"lbl_oklid";
			this->lbl_oklid->Size = System::Drawing::Size(0, 13);
			this->lbl_oklid->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(442, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Þehir Blok";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(538, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Satranç Tahtasý";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(358, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Oklid";
			// 
			// lbl_ikiKodinat
			// 
			this->lbl_ikiKodinat->AutoSize = true;
			this->lbl_ikiKodinat->Location = System::Drawing::Point(333, 137);
			this->lbl_ikiKodinat->Name = L"lbl_ikiKodinat";
			this->lbl_ikiKodinat->Size = System::Drawing::Size(74, 13);
			this->lbl_ikiKodinat->TabIndex = 30;
			this->lbl_ikiKodinat->Text = L"Ýkinci Kordinat";
			// 
			// lbl_ilkKordinat
			// 
			this->lbl_ilkKordinat->AutoSize = true;
			this->lbl_ilkKordinat->Location = System::Drawing::Point(333, 99);
			this->lbl_ilkKordinat->Name = L"lbl_ilkKordinat";
			this->lbl_ilkKordinat->Size = System::Drawing::Size(60, 13);
			this->lbl_ilkKordinat->TabIndex = 29;
			this->lbl_ilkKordinat->Text = L"Ýlk Kordinat";
			// 
			// tbx_y
			// 
			this->tbx_y->Location = System::Drawing::Point(541, 39);
			this->tbx_y->Name = L"tbx_y";
			this->tbx_y->Size = System::Drawing::Size(52, 20);
			this->tbx_y->TabIndex = 28;
			// 
			// tbx_x
			// 
			this->tbx_x->Location = System::Drawing::Point(445, 39);
			this->tbx_x->Name = L"tbx_x";
			this->tbx_x->Size = System::Drawing::Size(52, 20);
			this->tbx_x->TabIndex = 27;
			// 
			// lbl_y
			// 
			this->lbl_y->AutoSize = true;
			this->lbl_y->Location = System::Drawing::Point(560, 22);
			this->lbl_y->Name = L"lbl_y";
			this->lbl_y->Size = System::Drawing::Size(14, 13);
			this->lbl_y->TabIndex = 26;
			this->lbl_y->Text = L"Y";
			// 
			// lbl_x
			// 
			this->lbl_x->AutoSize = true;
			this->lbl_x->Location = System::Drawing::Point(462, 22);
			this->lbl_x->Name = L"lbl_x";
			this->lbl_x->Size = System::Drawing::Size(14, 13);
			this->lbl_x->TabIndex = 25;
			this->lbl_x->Text = L"X";
			// 
			// lbl_mouse
			// 
			this->lbl_mouse->AutoSize = true;
			this->lbl_mouse->Location = System::Drawing::Point(333, 42);
			this->lbl_mouse->Name = L"lbl_mouse";
			this->lbl_mouse->Size = System::Drawing::Size(83, 13);
			this->lbl_mouse->TabIndex = 24;
			this->lbl_mouse->Text = L"Fare Kordinatlarý";
			// 
			// picBox_kor
			// 
			this->picBox_kor->BackColor = System::Drawing::SystemColors::ControlDark;
			this->picBox_kor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBox_kor.BackgroundImage")));
			this->picBox_kor->Location = System::Drawing::Point(6, 6);
			this->picBox_kor->Name = L"picBox_kor";
			this->picBox_kor->Size = System::Drawing::Size(296, 282);
			this->picBox_kor->TabIndex = 23;
			this->picBox_kor->TabStop = false;
			this->picBox_kor->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::picBox_kor_MouseClick);
			this->picBox_kor->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::picBox_kor_MouseMove);
			// 
			// btn_hesapla
			// 
			this->btn_hesapla->Location = System::Drawing::Point(445, 239);
			this->btn_hesapla->Name = L"btn_hesapla";
			this->btn_hesapla->Size = System::Drawing::Size(75, 23);
			this->btn_hesapla->TabIndex = 22;
			this->btn_hesapla->Text = L"Hesapla";
			this->btn_hesapla->UseVisualStyleBackColor = true;
			this->btn_hesapla->Click += gcnew System::EventHandler(this, &MyForm::btn_hesapla_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->btn_K_resimekle);
			this->tabPage2->Controls->Add(this->picBox_kaydýrma2);
			this->tabPage2->Controls->Add(this->picBox_kaydirma1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(736, 338);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Görüntü Kaydýrma";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btn_K_resimekle
			// 
			this->btn_K_resimekle->Location = System::Drawing::Point(7, 285);
			this->btn_K_resimekle->Name = L"btn_K_resimekle";
			this->btn_K_resimekle->Size = System::Drawing::Size(75, 23);
			this->btn_K_resimekle->TabIndex = 2;
			this->btn_K_resimekle->Text = L"Resim Ekle";
			this->btn_K_resimekle->UseVisualStyleBackColor = true;
			this->btn_K_resimekle->Click += gcnew System::EventHandler(this, &MyForm::btn_K_resimekle_Click);
			// 
			// picBox_kaydýrma2
			// 
			this->picBox_kaydýrma2->BackColor = System::Drawing::Color::LightGray;
			this->picBox_kaydýrma2->Location = System::Drawing::Point(304, 7);
			this->picBox_kaydýrma2->Name = L"picBox_kaydýrma2";
			this->picBox_kaydýrma2->Size = System::Drawing::Size(272, 258);
			this->picBox_kaydýrma2->TabIndex = 1;
			this->picBox_kaydýrma2->TabStop = false;
			// 
			// picBox_kaydirma1
			// 
			this->picBox_kaydirma1->BackColor = System::Drawing::Color::LightGray;
			this->picBox_kaydirma1->Location = System::Drawing::Point(7, 7);
			this->picBox_kaydirma1->Name = L"picBox_kaydirma1";
			this->picBox_kaydirma1->Size = System::Drawing::Size(262, 258);
			this->picBox_kaydirma1->TabIndex = 0;
			this->picBox_kaydirma1->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(736, 338);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Gürültü Silme";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(125, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Resmi 1 px kaydýr";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 377);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydýrma2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma1))->EndInit();
			this->ResumeLayout(false);

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


private: System::Void btn_K_resimekle_Click(System::Object^  sender, System::EventArgs^  e) {
			 IplImage* img = cvLoadImage("D:/s.jpg", 1);
			 this->picBox_kaydirma1->Image = gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = picBox_kaydirma1->Image;
}
};
}
