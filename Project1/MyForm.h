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
	private: System::Windows::Forms::PictureBox^  picBox_kaydirma2;


	private: System::Windows::Forms::PictureBox^  picBox_kaydirma1;
	private: System::Windows::Forms::Button^  btn_K_resimekle;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  kaydir;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbx_kaydir;
	private: System::Windows::Forms::Label^  lbl_done;
	private: System::Windows::Forms::RadioButton^  rb_dikey;
	private: System::Windows::Forms::RadioButton^  rb_yatay;

	private: System::Windows::Forms::PictureBox^  pBox_fitreli;

	private: System::Windows::Forms::PictureBox^  pBox_orjinal;

	private: System::Windows::Forms::Button^  btn_fitrele;
	private: System::Windows::Forms::Button^  btn_lf_Ekle;
	private: System::Windows::Forms::RadioButton^  rB_arti8;
	private: System::Windows::Forms::RadioButton^  rB_eksi8;
	private: System::Windows::Forms::RadioButton^  rB_arti4;
	private: System::Windows::Forms::RadioButton^  rB_eksi4;

















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
			this->rb_dikey = (gcnew System::Windows::Forms::RadioButton());
			this->rb_yatay = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_done = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbx_kaydir = (gcnew System::Windows::Forms::TextBox());
			this->kaydir = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_K_resimekle = (gcnew System::Windows::Forms::Button());
			this->picBox_kaydirma2 = (gcnew System::Windows::Forms::PictureBox());
			this->picBox_kaydirma1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pBox_fitreli = (gcnew System::Windows::Forms::PictureBox());
			this->pBox_orjinal = (gcnew System::Windows::Forms::PictureBox());
			this->btn_fitrele = (gcnew System::Windows::Forms::Button());
			this->btn_lf_Ekle = (gcnew System::Windows::Forms::Button());
			this->rB_eksi4 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_arti4 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_eksi8 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_arti8 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox_fitreli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox_orjinal))->BeginInit();
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
			this->tabControl1->Size = System::Drawing::Size(819, 441);
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
			this->tabPage1->Size = System::Drawing::Size(811, 415);
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
			this->tabPage2->Controls->Add(this->rb_dikey);
			this->tabPage2->Controls->Add(this->rb_yatay);
			this->tabPage2->Controls->Add(this->lbl_done);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->tbx_kaydir);
			this->tabPage2->Controls->Add(this->kaydir);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->btn_K_resimekle);
			this->tabPage2->Controls->Add(this->picBox_kaydirma2);
			this->tabPage2->Controls->Add(this->picBox_kaydirma1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(811, 415);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Görüntü Kaydýrma";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// rb_dikey
			// 
			this->rb_dikey->AutoSize = true;
			this->rb_dikey->Location = System::Drawing::Point(6, 173);
			this->rb_dikey->Name = L"rb_dikey";
			this->rb_dikey->Size = System::Drawing::Size(52, 17);
			this->rb_dikey->TabIndex = 9;
			this->rb_dikey->Text = L"Dikey";
			this->rb_dikey->UseVisualStyleBackColor = true;
			// 
			// rb_yatay
			// 
			this->rb_yatay->AllowDrop = true;
			this->rb_yatay->AutoSize = true;
			this->rb_yatay->Checked = true;
			this->rb_yatay->Location = System::Drawing::Point(6, 150);
			this->rb_yatay->Name = L"rb_yatay";
			this->rb_yatay->Size = System::Drawing::Size(52, 17);
			this->rb_yatay->TabIndex = 8;
			this->rb_yatay->TabStop = true;
			this->rb_yatay->Text = L"Yatay";
			this->rb_yatay->UseVisualStyleBackColor = true;
			// 
			// lbl_done
			// 
			this->lbl_done->AutoSize = true;
			this->lbl_done->Location = System::Drawing::Point(58, 212);
			this->lbl_done->Name = L"lbl_done";
			this->lbl_done->Size = System::Drawing::Size(0, 13);
			this->lbl_done->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Kaydýrýlacak deðeri giriniz.";
			// 
			// tbx_kaydir
			// 
			this->tbx_kaydir->Location = System::Drawing::Point(6, 109);
			this->tbx_kaydir->Name = L"tbx_kaydir";
			this->tbx_kaydir->Size = System::Drawing::Size(100, 20);
			this->tbx_kaydir->TabIndex = 5;
			// 
			// kaydir
			// 
			this->kaydir->Location = System::Drawing::Point(64, 158);
			this->kaydir->Name = L"kaydir";
			this->kaydir->Size = System::Drawing::Size(75, 23);
			this->kaydir->TabIndex = 4;
			this->kaydir->Text = L"Kaydýr";
			this->kaydir->UseVisualStyleBackColor = true;
			this->kaydir->Click += gcnew System::EventHandler(this, &MyForm::kaydir_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Gray Level";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_K_resimekle
			// 
			this->btn_K_resimekle->Location = System::Drawing::Point(6, 6);
			this->btn_K_resimekle->Name = L"btn_K_resimekle";
			this->btn_K_resimekle->Size = System::Drawing::Size(75, 23);
			this->btn_K_resimekle->TabIndex = 2;
			this->btn_K_resimekle->Text = L"Resim Ekle";
			this->btn_K_resimekle->UseVisualStyleBackColor = true;
			this->btn_K_resimekle->Click += gcnew System::EventHandler(this, &MyForm::btn_K_resimekle_Click);
			// 
			// picBox_kaydirma2
			// 
			this->picBox_kaydirma2->BackColor = System::Drawing::Color::LightGray;
			this->picBox_kaydirma2->Location = System::Drawing::Point(499, 3);
			this->picBox_kaydirma2->Name = L"picBox_kaydirma2";
			this->picBox_kaydirma2->Size = System::Drawing::Size(306, 324);
			this->picBox_kaydirma2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBox_kaydirma2->TabIndex = 1;
			this->picBox_kaydirma2->TabStop = false;
			// 
			// picBox_kaydirma1
			// 
			this->picBox_kaydirma1->BackColor = System::Drawing::Color::LightGray;
			this->picBox_kaydirma1->Location = System::Drawing::Point(174, 3);
			this->picBox_kaydirma1->Name = L"picBox_kaydirma1";
			this->picBox_kaydirma1->Size = System::Drawing::Size(310, 324);
			this->picBox_kaydirma1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBox_kaydirma1->TabIndex = 0;
			this->picBox_kaydirma1->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->rB_arti8);
			this->tabPage3->Controls->Add(this->rB_eksi8);
			this->tabPage3->Controls->Add(this->rB_arti4);
			this->tabPage3->Controls->Add(this->rB_eksi4);
			this->tabPage3->Controls->Add(this->pBox_fitreli);
			this->tabPage3->Controls->Add(this->pBox_orjinal);
			this->tabPage3->Controls->Add(this->btn_fitrele);
			this->tabPage3->Controls->Add(this->btn_lf_Ekle);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(811, 415);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Laplas Fitresi";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pBox_fitreli
			// 
			this->pBox_fitreli->Location = System::Drawing::Point(484, 6);
			this->pBox_fitreli->Name = L"pBox_fitreli";
			this->pBox_fitreli->Size = System::Drawing::Size(300, 300);
			this->pBox_fitreli->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBox_fitreli->TabIndex = 3;
			this->pBox_fitreli->TabStop = false;
			// 
			// pBox_orjinal
			// 
			this->pBox_orjinal->Location = System::Drawing::Point(139, 6);
			this->pBox_orjinal->Name = L"pBox_orjinal";
			this->pBox_orjinal->Size = System::Drawing::Size(300, 300);
			this->pBox_orjinal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pBox_orjinal->TabIndex = 2;
			this->pBox_orjinal->TabStop = false;
			// 
			// btn_fitrele
			// 
			this->btn_fitrele->Location = System::Drawing::Point(15, 202);
			this->btn_fitrele->Name = L"btn_fitrele";
			this->btn_fitrele->Size = System::Drawing::Size(75, 23);
			this->btn_fitrele->TabIndex = 1;
			this->btn_fitrele->Text = L"Fitrele";
			this->btn_fitrele->UseVisualStyleBackColor = true;
			this->btn_fitrele->Click += gcnew System::EventHandler(this, &MyForm::btn_fitrele_Click);
			// 
			// btn_lf_Ekle
			// 
			this->btn_lf_Ekle->Location = System::Drawing::Point(15, 56);
			this->btn_lf_Ekle->Name = L"btn_lf_Ekle";
			this->btn_lf_Ekle->Size = System::Drawing::Size(75, 23);
			this->btn_lf_Ekle->TabIndex = 0;
			this->btn_lf_Ekle->Text = L"Resim Ekle";
			this->btn_lf_Ekle->UseVisualStyleBackColor = true;
			this->btn_lf_Ekle->Click += gcnew System::EventHandler(this, &MyForm::btn_lf_Ekle_Click);
			// 
			// rB_eksi4
			// 
			this->rB_eksi4->AutoSize = true;
			this->rB_eksi4->Location = System::Drawing::Point(15, 96);
			this->rB_eksi4->Name = L"rB_eksi4";
			this->rB_eksi4->Size = System::Drawing::Size(54, 17);
			this->rB_eksi4->TabIndex = 4;
			this->rB_eksi4->TabStop = true;
			this->rB_eksi4->Text = L"Eksi 4";
			this->rB_eksi4->UseVisualStyleBackColor = true;
			// 
			// rB_arti4
			// 
			this->rB_arti4->AutoSize = true;
			this->rB_arti4->Location = System::Drawing::Point(15, 119);
			this->rB_arti4->Name = L"rB_arti4";
			this->rB_arti4->Size = System::Drawing::Size(49, 17);
			this->rB_arti4->TabIndex = 5;
			this->rB_arti4->TabStop = true;
			this->rB_arti4->Text = L"Artý 4";
			this->rB_arti4->UseVisualStyleBackColor = true;
			// 
			// rB_eksi8
			// 
			this->rB_eksi8->AutoSize = true;
			this->rB_eksi8->Location = System::Drawing::Point(15, 142);
			this->rB_eksi8->Name = L"rB_eksi8";
			this->rB_eksi8->Size = System::Drawing::Size(54, 17);
			this->rB_eksi8->TabIndex = 6;
			this->rB_eksi8->TabStop = true;
			this->rB_eksi8->Text = L"Eksi 8";
			this->rB_eksi8->UseVisualStyleBackColor = true;
			// 
			// rB_arti8
			// 
			this->rB_arti8->AutoSize = true;
			this->rB_arti8->Location = System::Drawing::Point(15, 165);
			this->rB_arti8->Name = L"rB_arti8";
			this->rB_arti8->Size = System::Drawing::Size(49, 17);
			this->rB_arti8->TabIndex = 7;
			this->rB_arti8->TabStop = true;
			this->rB_arti8->Text = L"Artý 8";
			this->rB_arti8->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 475);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox_fitreli))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox_orjinal))->EndInit();
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
			 IplImage* img = cvLoadImage("D:/images/s.jpg", 1);
			 this->picBox_kaydirma1->Image = 
				 gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img2 = imread("D:/images/s.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 imwrite("D:/images/s_gray.jpg", img2);
			 IplImage* img = cvLoadImage("D:/images/s_gray.jpg", 1);
			 this->picBox_kaydirma1->Image =
				 gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);

}
private: System::Void kaydir_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = imread("D:/images/s.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 Mat img_new = img.clone();
			 int a = 20, b;
			 b = Convert::ToInt32(tbx_kaydir->Text);
			for (int i = 1; i < img.rows-1; i++){
				 for (int j = 1; j < img.cols-1; j++){
					 if (rb_dikey->Checked)
					 {
						if (i + b < img.rows - 1)
						{
							 img_new.at<uchar>(i, j) = img.at<uchar>(i + b, j);
						 }
						else img_new.at<uchar>(i, j) = 0;
					 }
					 else if (rb_yatay->Checked)
					 {
						 if (j + b < img.cols - 1)
						 {
							 img_new.at<uchar>(i, j) = img.at<uchar>(i, j + b);
						 }
						 else img_new.at<uchar>(i, j) = 0;
					 }
				 }
			 }
				lbl_done->Text = "done.";
				if (rb_yatay->Checked)
				{
					imwrite("D:/images/s_gray_shift_yatay.jpg", img_new);
					IplImage* img = cvLoadImage("D:/images/s_gray_shift_yatay.jpg", 1);
					this->picBox_kaydirma2->Image =
						gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);

				}
				else{ 
					imwrite("D:/images/s_gray_shift_dikey.jpg", img_new);
					IplImage* img = cvLoadImage("D:/images/s_gray_shift_dikey.jpg", 1);
					this->picBox_kaydirma2->Image =
						gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);

				}


}
private: System::Void btn_lf_Ekle_Click(System::Object^  sender, System::EventArgs^  e) {
			 IplImage* img = cvLoadImage("D:/images/s.jpg", 1);
			 this->pBox_orjinal->Image =
				 gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);
}




private: System::Void btn_fitrele_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = imread("D:/images/s.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 Mat img_new = img.clone();
			 int eksi4[3][3] = { { 0, 1, 0 }, { 1, -4, 1 }, { 0, 1, 0 } };
			 int arti4[3][3] = { { 0, -1, 0 }, { -1, 4, -1 }, { 0, -1, 0 } };
			 int eksi8[3][3] = { { 1, 1, 1 }, { 1, -8, 1 }, { 1, 1, 1 } };
			 int arti8[3][3] = { { -1, -1, -1 }, { -1, 8, -1 }, { -1, -1, -1 } };
			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 for (int a = -1; a < 2; a++){
						 for (int b = -1; b < 2; b++){

							 if (rB_eksi4->Checked){
								 img_new.at<uchar>(i, j) = eksi4[a][b] * img.at<uchar>(i, j);
								 
							 }
							 else if (rB_arti4->Checked){ img_new.at<uchar>(i, j) = arti4[a][b] * img.at<uchar>(i, j); }
							 else if (rB_eksi8->Checked){ img_new.at<uchar>(i, j) = eksi8[a][b] * img.at<uchar>(i, j); }
							 else if (rB_arti8->Checked){ img_new.at<uchar>(i, j) = arti8[a][b] * img.at<uchar>(i, j); }
						 }
					 }
				 }
			 }
			 imwrite("D:/images/s_gray_lablace.jpg", img_new);
			 IplImage* img3 = cvLoadImage("D:/images/s_gray_lablace.jpg", 1);
			 this->pBox_fitreli->Image =
				 gcnew System::Drawing::Bitmap(img3->width, img3->height, img3->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img3->imageData);

}
};
}
