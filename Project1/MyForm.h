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














	public:  System::String^ a;
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
	private: System::Windows::Forms::TabPage^  btn_;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  rB_m_negatif;
	private: System::Windows::Forms::RadioButton^  rB_Mean;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btn_m_fitrele;
	private: System::Windows::Forms::Button^  btn_m_rekle;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::RadioButton^  rB_y_esik;

	private: System::Windows::Forms::RadioButton^  rB_y_gama;



	private: System::Windows::Forms::RadioButton^  rB_y_log;
	private: System::Windows::Forms::RadioButton^  rB_y_terslog;
	private: System::Windows::Forms::RadioButton^  rB_y_Negatif;
	private: System::Windows::Forms::Button^  btn_y_resimekle;
private: System::Windows::Forms::PictureBox^  pB_2;
private: System::Windows::Forms::PictureBox^  pB_1;
private: System::Windows::Forms::Button^  b_filtre;
private: System::Windows::Forms::Label^  lbl_y_done;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Button^  btn_browse;
private: System::Windows::Forms::TextBox^  tbx_gama;

private: System::Windows::Forms::PictureBox^  pB_histogram;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart_his;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::RadioButton^  rB_bitDeger;
private: System::Windows::Forms::RadioButton^  rB_bol;
private: System::Windows::Forms::RadioButton^  rB_carp;
private: System::Windows::Forms::RadioButton^  rb_Fark;
private: System::Windows::Forms::RadioButton^  rb_topla;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Button^  btn_i_yap;
private: System::Windows::Forms::Button^  btn_i_resimekle;
private: System::Windows::Forms::PictureBox^  pB_i_3;

private: System::Windows::Forms::PictureBox^  pB_i_2;
private: System::Windows::Forms::PictureBox^  pB_i_1;
private: System::Windows::Forms::Button^  btn_hisesit;
private: System::Windows::Forms::Button^  btn_sobel;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;




















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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->rB_arti8 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_eksi8 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_arti4 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_eksi4 = (gcnew System::Windows::Forms::RadioButton());
			this->pBox_fitreli = (gcnew System::Windows::Forms::PictureBox());
			this->pBox_orjinal = (gcnew System::Windows::Forms::PictureBox());
			this->btn_fitrele = (gcnew System::Windows::Forms::Button());
			this->btn_lf_Ekle = (gcnew System::Windows::Forms::Button());
			this->btn_ = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_sobel = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->rB_m_negatif = (gcnew System::Windows::Forms::RadioButton());
			this->rB_Mean = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_m_fitrele = (gcnew System::Windows::Forms::Button());
			this->btn_m_rekle = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tbx_gama = (gcnew System::Windows::Forms::TextBox());
			this->lbl_y_done = (gcnew System::Windows::Forms::Label());
			this->b_filtre = (gcnew System::Windows::Forms::Button());
			this->pB_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pB_1 = (gcnew System::Windows::Forms::PictureBox());
			this->rB_y_esik = (gcnew System::Windows::Forms::RadioButton());
			this->rB_y_gama = (gcnew System::Windows::Forms::RadioButton());
			this->rB_y_log = (gcnew System::Windows::Forms::RadioButton());
			this->rB_y_terslog = (gcnew System::Windows::Forms::RadioButton());
			this->rB_y_Negatif = (gcnew System::Windows::Forms::RadioButton());
			this->btn_y_resimekle = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->btn_hisesit = (gcnew System::Windows::Forms::Button());
			this->chart_his = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pB_histogram = (gcnew System::Windows::Forms::PictureBox());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->pB_i_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pB_i_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pB_i_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->rB_bitDeger = (gcnew System::Windows::Forms::RadioButton());
			this->rB_bol = (gcnew System::Windows::Forms::RadioButton());
			this->rB_carp = (gcnew System::Windows::Forms::RadioButton());
			this->rb_Fark = (gcnew System::Windows::Forms::RadioButton());
			this->rb_topla = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_i_yap = (gcnew System::Windows::Forms::Button());
			this->btn_i_resimekle = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kor))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBox_kaydirma1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox_fitreli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox_orjinal))->BeginInit();
			this->btn_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_his))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_histogram))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_i_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_i_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_i_1))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->btn_);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
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
			this->picBox_kor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			// btn_
			// 
			this->btn_->Controls->Add(this->label8);
			this->btn_->Controls->Add(this->btn_sobel);
			this->btn_->Controls->Add(this->radioButton4);
			this->btn_->Controls->Add(this->radioButton3);
			this->btn_->Controls->Add(this->rB_m_negatif);
			this->btn_->Controls->Add(this->rB_Mean);
			this->btn_->Controls->Add(this->pictureBox2);
			this->btn_->Controls->Add(this->pictureBox1);
			this->btn_->Controls->Add(this->btn_m_fitrele);
			this->btn_->Controls->Add(this->btn_m_rekle);
			this->btn_->Location = System::Drawing::Point(4, 22);
			this->btn_->Name = L"btn_";
			this->btn_->Padding = System::Windows::Forms::Padding(3);
			this->btn_->Size = System::Drawing::Size(811, 415);
			this->btn_->TabIndex = 3;
			this->btn_->Text = L"Filter";
			this->btn_->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(163, 341);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"label8";
			// 
			// btn_sobel
			// 
			this->btn_sobel->Location = System::Drawing::Point(28, 226);
			this->btn_sobel->Name = L"btn_sobel";
			this->btn_sobel->Size = System::Drawing::Size(75, 23);
			this->btn_sobel->TabIndex = 8;
			this->btn_sobel->Text = L"Sobel";
			this->btn_sobel->UseVisualStyleBackColor = true;
			this->btn_sobel->Click += gcnew System::EventHandler(this, &MyForm::btn_sobel_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(18, 128);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(18, 105);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// rB_m_negatif
			// 
			this->rB_m_negatif->AutoSize = true;
			this->rB_m_negatif->Location = System::Drawing::Point(18, 82);
			this->rB_m_negatif->Name = L"rB_m_negatif";
			this->rB_m_negatif->Size = System::Drawing::Size(59, 17);
			this->rB_m_negatif->TabIndex = 5;
			this->rB_m_negatif->Text = L"Negatif";
			this->rB_m_negatif->UseVisualStyleBackColor = true;
			// 
			// rB_Mean
			// 
			this->rB_Mean->AutoSize = true;
			this->rB_Mean->Checked = true;
			this->rB_Mean->Location = System::Drawing::Point(18, 59);
			this->rB_Mean->Name = L"rB_Mean";
			this->rB_Mean->Size = System::Drawing::Size(75, 17);
			this->rB_Mean->TabIndex = 4;
			this->rB_Mean->TabStop = true;
			this->rB_Mean->Text = L"Mean Fitre";
			this->rB_Mean->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(475, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 300);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(150, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// btn_m_fitrele
			// 
			this->btn_m_fitrele->Location = System::Drawing::Point(18, 173);
			this->btn_m_fitrele->Name = L"btn_m_fitrele";
			this->btn_m_fitrele->Size = System::Drawing::Size(75, 23);
			this->btn_m_fitrele->TabIndex = 1;
			this->btn_m_fitrele->Text = L"Filtrele";
			this->btn_m_fitrele->UseVisualStyleBackColor = true;
			this->btn_m_fitrele->Click += gcnew System::EventHandler(this, &MyForm::btn_m_fitrele_Click);
			// 
			// btn_m_rekle
			// 
			this->btn_m_rekle->Location = System::Drawing::Point(18, 21);
			this->btn_m_rekle->Name = L"btn_m_rekle";
			this->btn_m_rekle->Size = System::Drawing::Size(75, 23);
			this->btn_m_rekle->TabIndex = 0;
			this->btn_m_rekle->Text = L"Resim Ekle";
			this->btn_m_rekle->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tbx_gama);
			this->tabPage4->Controls->Add(this->lbl_y_done);
			this->tabPage4->Controls->Add(this->b_filtre);
			this->tabPage4->Controls->Add(this->pB_2);
			this->tabPage4->Controls->Add(this->pB_1);
			this->tabPage4->Controls->Add(this->rB_y_esik);
			this->tabPage4->Controls->Add(this->rB_y_gama);
			this->tabPage4->Controls->Add(this->rB_y_log);
			this->tabPage4->Controls->Add(this->rB_y_terslog);
			this->tabPage4->Controls->Add(this->rB_y_Negatif);
			this->tabPage4->Controls->Add(this->btn_y_resimekle);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(811, 415);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Yeðinlik Dönüþüm Fonk.";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tbx_gama
			// 
			this->tbx_gama->Location = System::Drawing::Point(66, 136);
			this->tbx_gama->Name = L"tbx_gama";
			this->tbx_gama->Size = System::Drawing::Size(36, 20);
			this->tbx_gama->TabIndex = 8;
			this->tbx_gama->Text = L"0";
			// 
			// lbl_y_done
			// 
			this->lbl_y_done->AutoSize = true;
			this->lbl_y_done->Location = System::Drawing::Point(14, 274);
			this->lbl_y_done->Name = L"lbl_y_done";
			this->lbl_y_done->Size = System::Drawing::Size(35, 13);
			this->lbl_y_done->TabIndex = 7;
			this->lbl_y_done->Text = L"label5";
			// 
			// b_filtre
			// 
			this->b_filtre->Location = System::Drawing::Point(7, 238);
			this->b_filtre->Name = L"b_filtre";
			this->b_filtre->Size = System::Drawing::Size(75, 23);
			this->b_filtre->TabIndex = 6;
			this->b_filtre->Text = L"Filtrele";
			this->b_filtre->UseVisualStyleBackColor = true;
			this->b_filtre->Click += gcnew System::EventHandler(this, &MyForm::b_filtre_Click);
			// 
			// pB_2
			// 
			this->pB_2->Location = System::Drawing::Point(452, 3);
			this->pB_2->Name = L"pB_2";
			this->pB_2->Size = System::Drawing::Size(300, 300);
			this->pB_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pB_2->TabIndex = 5;
			this->pB_2->TabStop = false;
			// 
			// pB_1
			// 
			this->pB_1->Location = System::Drawing::Point(108, 3);
			this->pB_1->Name = L"pB_1";
			this->pB_1->Size = System::Drawing::Size(300, 300);
			this->pB_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pB_1->TabIndex = 5;
			this->pB_1->TabStop = false;
			// 
			// rB_y_esik
			// 
			this->rB_y_esik->AutoSize = true;
			this->rB_y_esik->Location = System::Drawing::Point(7, 159);
			this->rB_y_esik->Name = L"rB_y_esik";
			this->rB_y_esik->Size = System::Drawing::Size(67, 17);
			this->rB_y_esik->TabIndex = 4;
			this->rB_y_esik->Text = L"Eþikleme";
			this->rB_y_esik->UseVisualStyleBackColor = true;
			// 
			// rB_y_gama
			// 
			this->rB_y_gama->AutoSize = true;
			this->rB_y_gama->Location = System::Drawing::Point(7, 136);
			this->rB_y_gama->Name = L"rB_y_gama";
			this->rB_y_gama->Size = System::Drawing::Size(53, 17);
			this->rB_y_gama->TabIndex = 3;
			this->rB_y_gama->Text = L"Gama";
			this->rB_y_gama->UseVisualStyleBackColor = true;
			// 
			// rB_y_log
			// 
			this->rB_y_log->AutoSize = true;
			this->rB_y_log->Location = System::Drawing::Point(7, 90);
			this->rB_y_log->Name = L"rB_y_log";
			this->rB_y_log->Size = System::Drawing::Size(43, 17);
			this->rB_y_log->TabIndex = 2;
			this->rB_y_log->Text = L"Log";
			this->rB_y_log->UseVisualStyleBackColor = true;
			// 
			// rB_y_terslog
			// 
			this->rB_y_terslog->AutoSize = true;
			this->rB_y_terslog->Location = System::Drawing::Point(7, 113);
			this->rB_y_terslog->Name = L"rB_y_terslog";
			this->rB_y_terslog->Size = System::Drawing::Size(67, 17);
			this->rB_y_terslog->TabIndex = 2;
			this->rB_y_terslog->Text = L"Ters Log";
			this->rB_y_terslog->UseVisualStyleBackColor = true;
			// 
			// rB_y_Negatif
			// 
			this->rB_y_Negatif->AutoSize = true;
			this->rB_y_Negatif->Checked = true;
			this->rB_y_Negatif->Location = System::Drawing::Point(7, 67);
			this->rB_y_Negatif->Name = L"rB_y_Negatif";
			this->rB_y_Negatif->Size = System::Drawing::Size(59, 17);
			this->rB_y_Negatif->TabIndex = 1;
			this->rB_y_Negatif->TabStop = true;
			this->rB_y_Negatif->Text = L"Negatif";
			this->rB_y_Negatif->UseVisualStyleBackColor = true;
			// 
			// btn_y_resimekle
			// 
			this->btn_y_resimekle->Location = System::Drawing::Point(6, 19);
			this->btn_y_resimekle->Name = L"btn_y_resimekle";
			this->btn_y_resimekle->Size = System::Drawing::Size(75, 23);
			this->btn_y_resimekle->TabIndex = 0;
			this->btn_y_resimekle->Text = L"Resim Ekle";
			this->btn_y_resimekle->UseVisualStyleBackColor = true;
			this->btn_y_resimekle->Click += gcnew System::EventHandler(this, &MyForm::btn_y_resimekle_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->btn_hisesit);
			this->tabPage5->Controls->Add(this->chart_his);
			this->tabPage5->Controls->Add(this->pB_histogram);
			this->tabPage5->Controls->Add(this->btn_browse);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(811, 415);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Histogram";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// btn_hisesit
			// 
			this->btn_hisesit->Location = System::Drawing::Point(38, 255);
			this->btn_hisesit->Name = L"btn_hisesit";
			this->btn_hisesit->Size = System::Drawing::Size(137, 23);
			this->btn_hisesit->TabIndex = 4;
			this->btn_hisesit->Text = L"Histogram Eþitleme";
			this->btn_hisesit->UseVisualStyleBackColor = true;
			this->btn_hisesit->Click += gcnew System::EventHandler(this, &MyForm::btn_hisesit_Click);
			// 
			// chart_his
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart_his->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart_his->Legends->Add(legend1);
			this->chart_his->Location = System::Drawing::Point(207, 6);
			this->chart_his->Name = L"chart_his";
			this->chart_his->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"ilkhist";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"esitlenmisHist";
			this->chart_his->Series->Add(series1);
			this->chart_his->Series->Add(series2);
			this->chart_his->Size = System::Drawing::Size(598, 363);
			this->chart_his->TabIndex = 3;
			this->chart_his->Text = L"Histogram Grafiði";
			this->chart_his->Visible = false;
			// 
			// pB_histogram
			// 
			this->pB_histogram->Location = System::Drawing::Point(6, 52);
			this->pB_histogram->Name = L"pB_histogram";
			this->pB_histogram->Size = System::Drawing::Size(195, 155);
			this->pB_histogram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pB_histogram->TabIndex = 1;
			this->pB_histogram->TabStop = false;
			// 
			// btn_browse
			// 
			this->btn_browse->Location = System::Drawing::Point(64, 23);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(75, 23);
			this->btn_browse->TabIndex = 0;
			this->btn_browse->Text = L"Resim Ekle";
			this->btn_browse->UseVisualStyleBackColor = true;
			this->btn_browse->Click += gcnew System::EventHandler(this, &MyForm::btn_browse_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->pB_i_3);
			this->tabPage6->Controls->Add(this->pB_i_2);
			this->tabPage6->Controls->Add(this->pB_i_1);
			this->tabPage6->Controls->Add(this->label7);
			this->tabPage6->Controls->Add(this->textBox1);
			this->tabPage6->Controls->Add(this->label6);
			this->tabPage6->Controls->Add(this->rB_bitDeger);
			this->tabPage6->Controls->Add(this->rB_bol);
			this->tabPage6->Controls->Add(this->rB_carp);
			this->tabPage6->Controls->Add(this->rb_Fark);
			this->tabPage6->Controls->Add(this->rb_topla);
			this->tabPage6->Controls->Add(this->label5);
			this->tabPage6->Controls->Add(this->btn_i_yap);
			this->tabPage6->Controls->Add(this->btn_i_resimekle);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(811, 415);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"4 Ýþlem";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// pB_i_3
			// 
			this->pB_i_3->Location = System::Drawing::Point(617, 6);
			this->pB_i_3->Name = L"pB_i_3";
			this->pB_i_3->Size = System::Drawing::Size(188, 160);
			this->pB_i_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pB_i_3->TabIndex = 13;
			this->pB_i_3->TabStop = false;
			// 
			// pB_i_2
			// 
			this->pB_i_2->Location = System::Drawing::Point(391, 6);
			this->pB_i_2->Name = L"pB_i_2";
			this->pB_i_2->Size = System::Drawing::Size(188, 160);
			this->pB_i_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pB_i_2->TabIndex = 12;
			this->pB_i_2->TabStop = false;
			// 
			// pB_i_1
			// 
			this->pB_i_1->Location = System::Drawing::Point(174, 6);
			this->pB_i_1->Name = L"pB_i_1";
			this->pB_i_1->Size = System::Drawing::Size(188, 160);
			this->pB_i_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pB_i_1->TabIndex = 11;
			this->pB_i_1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"0-7 Arasýnda deðer giriniz.";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Hangi Biti 0 Olsun";
			// 
			// rB_bitDeger
			// 
			this->rB_bitDeger->AutoSize = true;
			this->rB_bitDeger->Location = System::Drawing::Point(3, 133);
			this->rB_bitDeger->Name = L"rB_bitDeger";
			this->rB_bitDeger->Size = System::Drawing::Size(124, 17);
			this->rB_bitDeger->TabIndex = 7;
			this->rB_bitDeger->TabStop = true;
			this->rB_bitDeger->Text = L"Bit Deðerini 0 Yapma";
			this->rB_bitDeger->UseVisualStyleBackColor = true;
			// 
			// rB_bol
			// 
			this->rB_bol->AutoSize = true;
			this->rB_bol->Location = System::Drawing::Point(64, 97);
			this->rB_bol->Name = L"rB_bol";
			this->rB_bol->Size = System::Drawing::Size(40, 17);
			this->rB_bol->TabIndex = 6;
			this->rB_bol->Text = L"Böl";
			this->rB_bol->UseVisualStyleBackColor = true;
			// 
			// rB_carp
			// 
			this->rB_carp->AutoSize = true;
			this->rB_carp->Location = System::Drawing::Point(6, 97);
			this->rB_carp->Name = L"rB_carp";
			this->rB_carp->Size = System::Drawing::Size(47, 17);
			this->rB_carp->TabIndex = 5;
			this->rB_carp->Text = L"Çarp";
			this->rB_carp->UseVisualStyleBackColor = true;
			// 
			// rb_Fark
			// 
			this->rb_Fark->AutoSize = true;
			this->rb_Fark->Location = System::Drawing::Point(64, 74);
			this->rb_Fark->Name = L"rb_Fark";
			this->rb_Fark->Size = System::Drawing::Size(46, 17);
			this->rb_Fark->TabIndex = 4;
			this->rb_Fark->Text = L"Fark";
			this->rb_Fark->UseVisualStyleBackColor = true;
			// 
			// rb_topla
			// 
			this->rb_topla->AutoSize = true;
			this->rb_topla->Checked = true;
			this->rb_topla->Location = System::Drawing::Point(6, 74);
			this->rb_topla->Name = L"rb_topla";
			this->rb_topla->Size = System::Drawing::Size(52, 17);
			this->rb_topla->TabIndex = 3;
			this->rb_topla->TabStop = true;
			this->rb_topla->Text = L"Topla";
			this->rb_topla->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Ýþlem Seçiniz";
			// 
			// btn_i_yap
			// 
			this->btn_i_yap->Location = System::Drawing::Point(6, 250);
			this->btn_i_yap->Name = L"btn_i_yap";
			this->btn_i_yap->Size = System::Drawing::Size(75, 23);
			this->btn_i_yap->TabIndex = 1;
			this->btn_i_yap->Text = L"Ýþle";
			this->btn_i_yap->UseVisualStyleBackColor = true;
			this->btn_i_yap->Click += gcnew System::EventHandler(this, &MyForm::btn_i_yap_Click);
			// 
			// btn_i_resimekle
			// 
			this->btn_i_resimekle->Location = System::Drawing::Point(6, 6);
			this->btn_i_resimekle->Name = L"btn_i_resimekle";
			this->btn_i_resimekle->Size = System::Drawing::Size(75, 23);
			this->btn_i_resimekle->TabIndex = 0;
			this->btn_i_resimekle->Text = L"Resim Ekle";
			this->btn_i_resimekle->UseVisualStyleBackColor = true;
			this->btn_i_resimekle->Click += gcnew System::EventHandler(this, &MyForm::btn_i_resimekle_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label9);
			this->tabPage7->Controls->Add(this->button2);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(811, 415);
			this->tabPage7->TabIndex = 7;
			this->tabPage7->Text = L"browse";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(160, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"label9";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 5;
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
			this->btn_->ResumeLayout(false);
			this->btn_->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart_his))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_histogram))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_i_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_i_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_i_1))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
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
			 IplImage* img = cvLoadImage("D:/images/s_gray.jpg", 1);
			 this->pBox_orjinal->Image =
				 gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);
}




private: System::Void btn_fitrele_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = imread("D:/images/s.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 Mat img_new = img.clone();
			 /*for (int i = 1; i < img.rows - 1; i++)
				for (int j = 1; j < img.cols - 1; j++)
				 img_new.at<uchar>(i, j) = 0;*/
			 int eksi4[3][3] = { { 0, 1, 0 }   , { 1, -4, 1 }   , { 0, 1, 0 } };
			 int arti4[3][3] = { { 0, -1, 0 }  , { -1, 4, -1 }  , { 0, -1, 0 } };
			 int eksi8[3][3] = { { 1, 1, 1 }   , { 1, -8, 1 }   , { 1, 1, 1 } };
			 int arti8[3][3] = { { -1, -1, -1 }, { -1, 8, -1 }  , { -1, -1, -1 } };
			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 for (int a = -1; a < 2; a++){
						 for (int b = -1; b < 2; b++){

							 if      (rB_eksi4->Checked){ img_new.at<uchar>(i, j) += eksi4[a+1][b+1] * img.at<uchar>(i - a, j - b); }
							 else if (rB_arti4->Checked){ img_new.at<uchar>(i, j) += arti4[a+1][b+1] * img.at<uchar>(i - a, j - b); }
							 else if (rB_eksi8->Checked){ img_new.at<uchar>(i, j) += eksi8[a+1][b+1] * img.at<uchar>(i - a, j - b); }
							 else if (rB_arti8->Checked){ img_new.at<uchar>(i, j) += arti8[a+1][b+1] * img.at<uchar>(i - a, j - b); }
						 }
					 }

				 }
			 }
			 imwrite("D:/images/s_gray_lablace.jpg", img_new);
			 IplImage* img3 = cvLoadImage("D:/images/s_gray_lablace.jpg", 1);
			 this->pBox_fitreli->Image =
				 gcnew System::Drawing::Bitmap(img3->width, img3->height, img3->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img3->imageData);

}
private: System::Void btn_y_resimekle_Click(System::Object^  sender, System::EventArgs^  e) {
			 IplImage* img = cvLoadImage("D:/images/s_gray.jpg", 1);
			 this->pB_1->Image =
				 gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);
			
}


private: System::Void b_filtre_Click(System::Object^  sender, System::EventArgs^  e) {

			 Mat img = imread("D:/images/s.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 if (rB_y_gama->Checked)
			 {
				 for (int i = 1; i < img.rows - 1; i++)
					 for (int j = 1; j < img.cols - 1; j++)
						 img.at<uchar>(i, j) = 122;
			 }
			 Mat img_new = img.clone();
			 

			 int a, b; double c,gama;
			 gama = Convert::ToDouble(tbx_gama->Text);
			 
			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 if (rB_y_Negatif->Checked){
						 img_new.at<uchar>(i, j) = 255-img.at<uchar>(i, j) - 1;
					 }
					 if (rB_y_log->Checked){
						 c = 255 / log10(img.at<uchar>(i, j)+1);
						 img_new.at<uchar>(i, j) = c*log10(1+img.at<uchar>(i, j));
					 }
					 if (rB_y_gama->Checked){
						 img_new.at<uchar>(i, j) = 100*pow( img.at<uchar>(i, j),gama);
					 }
					 if (rB_y_terslog->Checked){
						 lbl_y_done->Text = "Yapým Aþamasýnda";
					 }
					 if (rB_y_esik->Checked){
						 if (img.at<uchar>(i, j) < 230){ img_new.at<uchar>(i, j) = 0; }
						 else { img_new.at<uchar>(i, j) = 255; }
					 }
					 
				 }
			 }
			 Mat img_hisnew = histogramesitleme(img_new);
			 imwrite("D:/images/s_gray_y_yeginlik.jpg", img_hisnew);
			 IplImage* img3 = cvLoadImage("D:/images/s_gray_y_yeginlik.jpg", 1);
			 this->pB_2->Image =
				 gcnew System::Drawing::Bitmap(img3->width, img3->height, img3->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img3->imageData);
}
private: System::Void btn_browse_Click(System::Object^  sender, System::EventArgs^  e) {
			 IplImage* img = cvLoadImage("D:/images/s_gray.jpg", 1);
			 this->pB_histogram->Image =
				 gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img->imageData);

}
private: System::Void btn_histogram_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = imread("D:/images/kizilotesi_toplam.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 int His[257] = {0};
			 chart_his->Visible = true;

			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 His[img.at<uchar>(i, j)]++;
					 
				 }
			 }
			 for (int i = 0; i < 256; i++)
			 {
				 chart_his->Series["Pixel"]->Points->AddXY(i, His[i]);
			 }
			 

}
private: System::Void btn_i_yap_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = imread("D:/images/kizilotesi.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 Mat img_new = img.clone();
			 Mat img_new2 = img.clone();
			 int t1, t2, min, max, min2, max2;
			 int dizi[256][256] = {};
			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 img_new.at<uchar>(i, j) = img.at<uchar>(i, j) & 64;
				 }
			 }
			 imwrite("D:/images/kizilotesi_eksikbit.jpg", img_new);
			 IplImage* img3 = cvLoadImage("D:/images/kizilotesi_eksikbit.jpg", 1);
			 this->pB_i_2->Image =
				 gcnew System::Drawing::Bitmap(img3->width, img3->height, img3->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img3->imageData);

			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 img_new.at<uchar>(i, j) = (img_new.at<uchar>(i, j) + img.at<uchar>(i, j))/2;
				 }
			 }
			/* for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 dizi[i][j] = img_new.at<uchar>(i, j);
					 img_new2.at<uchar>(i, j) = (img_new.at<uchar>(i, j)+t1)*t2;

				 }
			 }*/
			 imwrite("D:/images/kizilotesi_toplam.jpg", img_new);
			 IplImage* img4 = cvLoadImage("D:/images/kizilotesi_toplam.jpg", 1);
			 this->pB_i_3->Image =
				 gcnew System::Drawing::Bitmap(img4->width, img4->height, img4->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img4->imageData);



}
private: System::Void btn_i_resimekle_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat img = imread("D:/images/kizilotesi.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 imwrite("D:/images/kizilotesi_gray.jpg", img);
			 IplImage* img3 = cvLoadImage("D:/images/kizilotesi_gray.jpg", 1);
			 this->pB_i_1->Image =
				 gcnew System::Drawing::Bitmap(img3->width, img3->height, img3->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr) img3->imageData);

}
private: System::Void btn_m_fitrele_Click(System::Object^  sender, System::EventArgs^  e) {
			/* Mat img = imread("D:/images/kizilotesi.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 Mat img_new = img.clone();
			 float sum;
			 float kernel[3][3] = {
				 { 1 / 9.0, 1 / 9.0, 1 / 9.0 }, { 1 / 9.0, 1 / 9.0, 1 / 9.0 }, { 1 / 9.0, 1 / 9.0, 1 / 9.0 }
			 };
			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 if (rB_Mean->Checked){
						 sum = 0.0;
						 for (int k = -1; i < 2; k++){
							 for (int l = -1; j < 2; l++){
								 sum = sum + kernel[k][l] * img.at<uchar>(i - k, j - l);
							 }
						 }
						 img_new.at<uchar>(i, j) = sum;
					 }
					 imwrite("D:/images/kizilotesi_mean.jpg", img_new);
				 
				 }
			 }*/
}
		 public: Mat histogramesitleme(Mat image){
					 int size = image.rows * image.cols;
					 Mat new_image = image.clone();
					 int histogram[256]; double cumhistogram[256]; double ratiohistogram[256];
					 int scalehistogram[256]; double esithistogram[256] = { 0 }; int final[256];
					// gelen resmin Histogramýný oluþturma (A)
					 for (int i = 0; i < 256; i++)
					 {
						 histogram[i] = 0;
					 }
					 for (int y = 0; y < image.rows; y++)
					 for (int x = 0; x < image.cols; x++)
						 histogram[(int)image.at<uchar>(y, x)]++;
					// (A) Bitti
					//*  Birikimli yüzde oranlarý hesaplanýr. (B)
					 float alpha = 255.0 / size;
					//* (B) Bitti
					//  oluþturulan histogramýn oranýný hesapladýk; c
					 for (int i = 0; i < 256; i++)
					 {
						 ratiohistogram[i] = (double)histogram[i] / size;
					 }
					// c bitti
					 //
					 cumhistogram[0] = histogram[0];

					 for (int i = 1; i < 256; i++)
					 {
						 cumhistogram[i] = histogram[i] + cumhistogram[i - 1];
					 }
					 //
					 //
					 for (int i = 0; i < 256; i++)
					 {
						 scalehistogram[i] = cvRound((double)cumhistogram[i] * alpha);
					 }
					 //
					 //
					 for (int i = 0; i < 256; i++)
					 {
						 esithistogram[i] = 0;
					 }

					 for (int i = 0; i < 256; i++)
					 {
						 esithistogram[scalehistogram[i]] += ratiohistogram[i];
					 }

					 
					 for (int i = 0; i < 256; i++)
						 final[i] = cvRound(esithistogram[i] * 255);
					 //
					 // Generate the equlized image
					 

					 for (int y = 0; y < image.rows; y++)
					 for (int x = 0; x < image.cols; x++)
						 new_image.at<uchar>(y, x) = saturate_cast<uchar>(scalehistogram[image.at<uchar>(y, x)]);

					 return new_image;
		 }
private: System::Void btn_hisesit_Click(System::Object^  sender, System::EventArgs^  e) {

			 Mat img = imread("D:/images/kizilotesi_eksikbit.jpg", CV_LOAD_IMAGE_GRAYSCALE);

			 Mat his_esit = histogramesitleme(img);

			 int His[257] = { 0 }, his_new[256] = { 0 };
			 chart_his->Visible = true;

			 for (int i = 1; i < img.rows - 1; i++){
				 for (int j = 1; j < img.cols - 1; j++){
					 His[img.at<uchar>(i, j)]++;
					 his_new[his_esit.at<uchar>(i,j)]++;
				 }
			 }
			 for (int i = 0; i < 256; i++)
			 {

				 chart_his->Series["ilkhist"]->Points->AddXY(i, His[i]);
				 chart_his->Series["esitlenmisHist"]->Points->AddXY(i, his_new[i]);
			 }
			 imwrite("D:/images/h/h_esithis.jpg", his_esit);
			 imwrite("D:/images/h/h.jpg", img);
			 label10->Text = a;


}
private: System::Void btn_sobel_Click(System::Object^  sender, System::EventArgs^  e) {
			 Mat src = imread("D:/images/lena.jpg", CV_LOAD_IMAGE_GRAYSCALE);
			 Mat  dst;
			 int sumx, sumy, sum,sum2, toplam = 0, suma, sumb,k,l;

			 int GX[3][3] = { { -1, -2, -1 }, { 0, 0, 0 }, { 1, 2, 1 } };
			 int GY[3][3] = { { -1, 0, 1 }, { -2, 0, 2 }, { -1, 0, 1 } };
			 dst = src.clone();
			 for (int i = 0; i < src.rows; i++){
				 for (int j = 0; j < src.cols; j++){
					 dst.at<uchar>(i, j) = 0.0;
				 }
			 }
			 for (int i = 0; i < src.rows -1; i++){
				 for (int j = 0; j < src.cols-1 ; j++){
					 sumx=0, sumy=0, sum=0 /*,sum2=0, suma=0, sumb = 0.0*/;
					 for (int a = -1; a <= 1; a++){
						 for (int b = -1; b <= 1; b++){
							 if (i + a < 0) a++;
							 if (j + b < 0) b++;
						   /*else if (i + a > src.rows)a++ ; 
							 else if (j + b > src.cols)b++ ;*/ 
							 else{
							 sumx += GX[a+1][b+1] * src.at<uchar>(i+a,j+b);
							 sumy += GY[a + 1][b + 1] * src.at<uchar>(i + a, j + b);
							}
						 
						 }
					 }
					 
					 sum = abs(sumx) + abs(sumy) ;
					 dst.at<uchar>(i, j) = sum;
				 }
			 }
			 /*suma = src.at<uchar>(i - 1, j - 1) +
				 2 * src.at<uchar>(i, j - 1) +
				 src.at<uchar>(i + 1, j - 1) -
				 src.at<uchar>(i - 1, j + 1) -
				 2 * src.at<uchar>(i, j + 1) -
				 src.at<uchar>(i + 1, j + 1);

			 sumb = src.at<uchar>(i - 1, j - 1) +
				 2 * src.at<uchar>(i - 1, j) +
				 src.at<uchar>(i - 1, j + 1) -
				 src.at<uchar>(i + 1, j - 1) -
				 2 * src.at<uchar>(i + 1, j) -
				 src.at<uchar>(i + 1, j + 1);*/
			 imwrite("D:/images/sobel.jpg", dst);
			 pictureBox2->Load("D:/images/sobel.jpg");
}
		  
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 
			 openFileDialog1->Filter = "Image Files (*.jpg)|*.jpg| All files (*.*)|*.*";
			 openFileDialog1->Title = "Resmi Seçiniz.";

			 // Show the Dialog.
			 // If the user clicked OK in the dialog and
			 // a .CUR file was selected, open it.
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 a = openFileDialog1->FileName;
			 }
			 label9->Text = a;
}
};
}
