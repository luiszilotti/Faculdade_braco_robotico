#pragma once

namespace projeto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmproj
	/// </summary>
	public ref class frmproj : public System::Windows::Forms::Form
	{
	public:
		frmproj(void)
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
		~frmproj()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pctjanela;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtXorigem;
	private: System::Windows::Forms::TextBox^ txtYorigem;
	private: System::Windows::Forms::Button^ btnPlotarEixos;
	private: System::Windows::Forms::TextBox^ txtBraco2;




	private: System::Windows::Forms::TextBox^ txtBraco1;
	private: System::Windows::Forms::TextBox^ txtTheta2;


	private: System::Windows::Forms::TextBox^ txtTheta1;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtX;
	private: System::Windows::Forms::TextBox^ txtXaj;


	private: System::Windows::Forms::TextBox^ txtY;
	private: System::Windows::Forms::TextBox^ txtYaj;
	private: System::Windows::Forms::TextBox^ txtTheta2Relativo;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnup;
	private: System::Windows::Forms::Button^ btnleft;



	private: System::Windows::Forms::Button^ btnright;
	private: System::Windows::Forms::Button^ btndown;
	private: System::Windows::Forms::ComboBox^ cmbpasso;
	private: System::Windows::Forms::ComboBox^ cmbporta;
	private: System::Windows::Forms::ComboBox^ cmbbaud;







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
			this->pctjanela = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtXorigem = (gcnew System::Windows::Forms::TextBox());
			this->txtYorigem = (gcnew System::Windows::Forms::TextBox());
			this->btnPlotarEixos = (gcnew System::Windows::Forms::Button());
			this->txtBraco2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBraco1 = (gcnew System::Windows::Forms::TextBox());
			this->txtTheta2 = (gcnew System::Windows::Forms::TextBox());
			this->txtTheta1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->txtXaj = (gcnew System::Windows::Forms::TextBox());
			this->txtY = (gcnew System::Windows::Forms::TextBox());
			this->txtYaj = (gcnew System::Windows::Forms::TextBox());
			this->txtTheta2Relativo = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnup = (gcnew System::Windows::Forms::Button());
			this->btnleft = (gcnew System::Windows::Forms::Button());
			this->btnright = (gcnew System::Windows::Forms::Button());
			this->btndown = (gcnew System::Windows::Forms::Button());
			this->cmbpasso = (gcnew System::Windows::Forms::ComboBox());
			this->cmbporta = (gcnew System::Windows::Forms::ComboBox());
			this->cmbbaud = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctjanela))->BeginInit();
			this->SuspendLayout();
			// 
			// pctjanela
			// 
			this->pctjanela->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pctjanela->Location = System::Drawing::Point(13, 13);
			this->pctjanela->Name = L"pctjanela";
			this->pctjanela->Size = System::Drawing::Size(793, 556);
			this->pctjanela->TabIndex = 0;
			this->pctjanela->TabStop = false;
			this->pctjanela->Click += gcnew System::EventHandler(this, &frmproj::pctjanela_Click);
			this->pctjanela->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmproj::pctjanela_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(829, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Coordenadas reais do ponto pivô (primeira junta)";
			this->label1->Click += gcnew System::EventHandler(this, &frmproj::label1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(829, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Comprimento dos braços (links/elos)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(829, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ângulos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(832, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"X";
			this->label4->Click += gcnew System::EventHandler(this, &frmproj::label4_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(832, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(832, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Braço 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(832, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Braço 2";
			this->label7->Click += gcnew System::EventHandler(this, &frmproj::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(829, 349);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Braço 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(829, 288);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Braço 1";
			// 
			// txtXorigem
			// 
			this->txtXorigem->Location = System::Drawing::Point(853, 55);
			this->txtXorigem->Name = L"txtXorigem";
			this->txtXorigem->Size = System::Drawing::Size(100, 20);
			this->txtXorigem->TabIndex = 11;
			this->txtXorigem->Text = L"300";
			// 
			// txtYorigem
			// 
			this->txtYorigem->Location = System::Drawing::Point(853, 82);
			this->txtYorigem->Name = L"txtYorigem";
			this->txtYorigem->Size = System::Drawing::Size(100, 20);
			this->txtYorigem->TabIndex = 12;
			this->txtYorigem->Text = L"300";
			// 
			// btnPlotarEixos
			// 
			this->btnPlotarEixos->Location = System::Drawing::Point(960, 55);
			this->btnPlotarEixos->Name = L"btnPlotarEixos";
			this->btnPlotarEixos->Size = System::Drawing::Size(75, 47);
			this->btnPlotarEixos->TabIndex = 13;
			this->btnPlotarEixos->Text = L"Plotar eixos";
			this->btnPlotarEixos->UseVisualStyleBackColor = true;
			this->btnPlotarEixos->Click += gcnew System::EventHandler(this, &frmproj::btnPlotarEixos_Click);
			// 
			// txtBraco2
			// 
			this->txtBraco2->Location = System::Drawing::Point(882, 186);
			this->txtBraco2->Name = L"txtBraco2";
			this->txtBraco2->Size = System::Drawing::Size(100, 20);
			this->txtBraco2->TabIndex = 15;
			this->txtBraco2->Text = L"100";
			// 
			// txtBraco1
			// 
			this->txtBraco1->Location = System::Drawing::Point(882, 159);
			this->txtBraco1->Name = L"txtBraco1";
			this->txtBraco1->Size = System::Drawing::Size(100, 20);
			this->txtBraco1->TabIndex = 14;
			this->txtBraco1->Text = L"100";
			// 
			// txtTheta2
			// 
			this->txtTheta2->Location = System::Drawing::Point(892, 345);
			this->txtTheta2->Name = L"txtTheta2";
			this->txtTheta2->Size = System::Drawing::Size(77, 20);
			this->txtTheta2->TabIndex = 17;
			this->txtTheta2->Text = L"0";
			// 
			// txtTheta1
			// 
			this->txtTheta1->Location = System::Drawing::Point(892, 288);
			this->txtTheta1->Name = L"txtTheta1";
			this->txtTheta1->Size = System::Drawing::Size(77, 20);
			this->txtTheta1->TabIndex = 16;
			this->txtTheta1->Text = L"90";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(344, 612);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Coordenadas ajustadas";
			this->label10->Click += gcnew System::EventHandler(this, &frmproj::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(344, 577);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Coordenadas reais";
			this->label11->Click += gcnew System::EventHandler(this, &frmproj::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(487, 577);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"X";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(487, 612);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"X";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(548, 577);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Y";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(548, 612);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Y";
			// 
			// txtX
			// 
			this->txtX->Location = System::Drawing::Point(507, 574);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(35, 20);
			this->txtX->TabIndex = 24;
			this->txtX->Text = L"100";
			// 
			// txtXaj
			// 
			this->txtXaj->Location = System::Drawing::Point(507, 609);
			this->txtXaj->Name = L"txtXaj";
			this->txtXaj->Size = System::Drawing::Size(35, 20);
			this->txtXaj->TabIndex = 25;
			this->txtXaj->Text = L"100";
			// 
			// txtY
			// 
			this->txtY->Location = System::Drawing::Point(568, 574);
			this->txtY->Name = L"txtY";
			this->txtY->Size = System::Drawing::Size(35, 20);
			this->txtY->TabIndex = 26;
			this->txtY->Text = L"100";
			// 
			// txtYaj
			// 
			this->txtYaj->Location = System::Drawing::Point(568, 609);
			this->txtYaj->Name = L"txtYaj";
			this->txtYaj->Size = System::Drawing::Size(35, 20);
			this->txtYaj->TabIndex = 27;
			this->txtYaj->Text = L"100";
			// 
			// txtTheta2Relativo
			// 
			this->txtTheta2Relativo->Location = System::Drawing::Point(975, 346);
			this->txtTheta2Relativo->Name = L"txtTheta2Relativo";
			this->txtTheta2Relativo->Size = System::Drawing::Size(77, 20);
			this->txtTheta2Relativo->TabIndex = 28;
			this->txtTheta2Relativo->Text = L"90";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(892, 326);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Tela";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(972, 326);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Relativo";
			// 
			// btnup
			// 
			this->btnup->Location = System::Drawing::Point(683, 20);
			this->btnup->Name = L"btnup";
			this->btnup->Size = System::Drawing::Size(75, 23);
			this->btnup->TabIndex = 31;
			this->btnup->Text = L"UP";
			this->btnup->UseVisualStyleBackColor = true;
			this->btnup->Click += gcnew System::EventHandler(this, &frmproj::btnup_Click);
			// 
			// btnleft
			// 
			this->btnleft->Location = System::Drawing::Point(640, 49);
			this->btnleft->Name = L"btnleft";
			this->btnleft->Size = System::Drawing::Size(75, 23);
			this->btnleft->TabIndex = 32;
			this->btnleft->Text = L"LEFT";
			this->btnleft->UseVisualStyleBackColor = true;
			this->btnleft->Click += gcnew System::EventHandler(this, &frmproj::btnleft_Click);
			// 
			// btnright
			// 
			this->btnright->Location = System::Drawing::Point(721, 49);
			this->btnright->Name = L"btnright";
			this->btnright->Size = System::Drawing::Size(75, 23);
			this->btnright->TabIndex = 33;
			this->btnright->Text = L"RIGHT";
			this->btnright->UseVisualStyleBackColor = true;
			this->btnright->Click += gcnew System::EventHandler(this, &frmproj::btnright_Click);
			// 
			// btndown
			// 
			this->btndown->Location = System::Drawing::Point(683, 78);
			this->btndown->Name = L"btndown";
			this->btndown->Size = System::Drawing::Size(75, 23);
			this->btndown->TabIndex = 34;
			this->btndown->Text = L"DOWN";
			this->btndown->UseVisualStyleBackColor = true;
			this->btndown->Click += gcnew System::EventHandler(this, &frmproj::btndown_Click);
			// 
			// cmbpasso
			// 
			this->cmbpasso->FormattingEnabled = true;
			this->cmbpasso->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->cmbpasso->Location = System::Drawing::Point(683, 119);
			this->cmbpasso->Name = L"cmbpasso";
			this->cmbpasso->Size = System::Drawing::Size(75, 21);
			this->cmbpasso->TabIndex = 35;
			this->cmbpasso->Text = L"1";
			// 
			// cmbporta
			// 
			this->cmbporta->FormattingEnabled = true;
			this->cmbporta->Location = System::Drawing::Point(835, 405);
			this->cmbporta->Name = L"cmbporta";
			this->cmbporta->Size = System::Drawing::Size(121, 21);
			this->cmbporta->TabIndex = 36;
			// 
			// cmbbaud
			// 
			this->cmbbaud->FormattingEnabled = true;
			this->cmbbaud->Location = System::Drawing::Point(835, 449);
			this->cmbbaud->Name = L"cmbbaud";
			this->cmbbaud->Size = System::Drawing::Size(121, 21);
			this->cmbbaud->TabIndex = 37;
			// 
			// frmproj
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1076, 641);
			this->Controls->Add(this->cmbbaud);
			this->Controls->Add(this->cmbporta);
			this->Controls->Add(this->cmbpasso);
			this->Controls->Add(this->btndown);
			this->Controls->Add(this->btnright);
			this->Controls->Add(this->btnleft);
			this->Controls->Add(this->btnup);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtTheta2Relativo);
			this->Controls->Add(this->txtYaj);
			this->Controls->Add(this->txtY);
			this->Controls->Add(this->txtXaj);
			this->Controls->Add(this->txtX);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtTheta2);
			this->Controls->Add(this->txtTheta1);
			this->Controls->Add(this->txtBraco2);
			this->Controls->Add(this->txtBraco1);
			this->Controls->Add(this->btnPlotarEixos);
			this->Controls->Add(this->txtYorigem);
			this->Controls->Add(this->txtXorigem);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pctjanela);
			this->Name = L"frmproj";
			this->Text = L"frmproj";
			this->Load += gcnew System::EventHandler(this, &frmproj::frmproj_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctjanela))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Variáveis globais
		int x_atual = 0, y_atual = 0;

#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmproj_Load(System::Object^ sender, System::EventArgs^ e) {

	x_atual = Int16::Parse(txtX->Text);
	y_atual = Int16::Parse(txtY->Text);

	Bitmap^ imagem = gcnew Bitmap(pctjanela->Width, pctjanela->Height);
	Graphics^ g = Graphics::FromImage(imagem);
	g->Clear(Color::White);
	int origemX = Int16::Parse(txtXorigem->Text);
	int origemY = Int16::Parse(txtYorigem->Text);
	g->DrawLine(gcnew Pen(Color::LightGray, 1.0f), (float)(0), (float)(origemY), (float)(pctjanela->Width),
		(float)(origemY)); // eixo x
	g->DrawLine(gcnew Pen(Color::LightGray, 1.0f), (float)(origemX), (float)(0), (float)(origemX),
		(float)(pctjanela->Height)); // eixo y
	pctjanela->Image = imagem;

}
private: System::Void pctjanela_Click(System::Object^ sender, System::EventArgs^ e) {

	int xo = Int16::Parse(txtXorigem->Text); // Coordenada X do ponto pivô (1ª junta)
	int yo = Int16::Parse(txtYorigem->Text); // Coordenada Y do ponto pivô (1ª Junta)
	int xp = Int16::Parse(txtX->Text); // Coordenada X do ponto destino (terminal)
	int yp = Int16::Parse(txtY->Text); // Coordenada Y do ponto destino (terminal)
	int r1 = Int16::Parse(txtBraco1->Text); // Comprimento do braço 1 (primeiro elo)
	int r2 = Int16::Parse(txtBraco2->Text); // Comprimento do braço 2 (segundo elo)
	//
	// Cálculo da distância "r3" entre o pronto pivô e o ponto destino:
	double r3 = Math::Sqrt((xp - xo) * (xp - xo) + (yp - yo) * (yp - yo));
	//
	// Verificação do alcance
	if (r3 > r1 + r2) { // Se r3 for maior que a soma dos comprimentos dos braços, o ponto é inatingível
		MessageBox::Show(this, "Inatingível!", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		// Cálculo da distância "a" entre o ponto "o" e o ponto "s" (onde a linha "L" cruza com a
		// linha que liga os centros das circunferências - linha entre os pontos "o" e "p"):
		double a = ((r1 * r1) - (r2 * r2) + (r3 * r3)) / (2 * r3);
	
			// Cálculo das coordenadas do ponto "s" (xs,ys):
			double xs = xo + a * ((xp - xo) / r3);
		double ys = yo + a * ((yp - yo) / r3);
		// Cálculo da altura do segmento iniciado no ponto "s" e finalizado na intersecção das circunferências:
		double h = Math::Sqrt((r1 * r1) - (a * a));
		// Cálculo das coordenadas do primeiro ponto de intersecção "q" (ponto da 2ª junta):
		double xq = xs + h * ((yp - yo) / r3);
		double yq = ys - h * ((xp - xo) / r3);
		// Cálculo dos ângulos Theta1 e Theta2
		double theta1 = Math::Atan2(yq - yo, xq - xo); // ângulo em radianos
		double theta2 = Math::Atan2(yp - yq, xp - xq); // ângulo em radianos
		int a1 = theta1 * 180 / Math::PI; // converte ângulo para graus
		int a2 = theta2 * 180 / Math::PI; // converte ângulo para graus
		txtTheta1->Text = (a1 * -1).ToString();
		txtTheta2->Text = (a2 * -1).ToString();
		txtTheta2Relativo->Text = (180 - (a1 * -1 - a2 * -1)).ToString();
		// OBS.: Os ângulos a1 e a2 devem ter o sinal trocado (*-1) para representar os valores reais, pois,
		// a PictureBox apresenta o eixo Y invertido, o que a faz representar o quadrante Y negativo.
		//
		// DESENHO DA IMAGEM NA PICTUREBOX
		// -----------------------------------------------------
		Bitmap^ imagem = gcnew Bitmap(pctjanela->Width, pctjanela->Height);
		Graphics^ g = Graphics::FromImage(imagem);
		g->Clear(Color::White);
		//
		// Desenho da área de trabalho (workspace)
		g->FillEllipse(gcnew SolidBrush(Color::LightYellow), (float)(xo - (r1 + r2)), (float)(yo - (r1 + r2)),
			(float)((r1 + r2) * 2), (float)((r1 + r2) * 2));
		//
		// Desenho dos eixos X e Y:
		g->DrawLine(gcnew Pen(Color::LightGray, 1.0f), (float)(0), (float)(yo), (float)(pctjanela->Width), (float)(yo));
		g->DrawLine(gcnew Pen(Color::LightGray, 1.0f), (float)(xo), (float)(0), (float)(xo), (float)(pctjanela->Height));
		//
		// Desenho dos braços:
		g->DrawLine(gcnew Pen(Color::Black, 2.0f), (float)(xo), (float)(yo), (float)(xq), (float)(yq)); // braço 1
		g->DrawLine(gcnew Pen(Color::Black, 2.0f), (float)(xq), (float)(yq), (float)(xp), (float)(yp)); // braço 2
		//
		// Desenho das juntas:
		// ---------------------------
		g->FillEllipse(gcnew SolidBrush(Color::Gold), (float)(xo - 12), (float)(yo - 12), 24.0f, 24.0f);
		g->FillEllipse(gcnew SolidBrush(Color::Gold), (float)(xq - 12), (float)(yq - 12), 24.0f, 24.0f);
		pctjanela->Image = imagem;
	}

}
private:   System::Void pctjanela_MouseMove(System::Object^ sender, System::Windows::Forms::
		   MouseEventArgs^ e) {
		   txtX->Text = e->X.ToString();
		   txtY->Text = e->Y.ToString();
		   int origemX = Int16::Parse(txtXorigem->Text);
		   int origemY = Int16::Parse(txtYorigem->Text);
		   txtXaj->Text = (e->X - origemX).ToString();
		   txtYaj->Text = (origemY - e->Y).ToString();
}

private: System::Void btnPlotarEixos_Click(System::Object^ sender, System::EventArgs^ e) {

	Bitmap^ imagem = gcnew Bitmap(pctjanela->Width, pctjanela->Height);
	Graphics^ g = Graphics::FromImage(imagem);
	g->Clear(Color::White);
	int origemX = Int16::Parse(txtXorigem->Text);
	int origemY = Int16::Parse(txtYorigem->Text);
	g->DrawLine(gcnew Pen(Color::LightGray, 1.0f), (float)(0), (float)(origemY), (float)(pctjanela->Width),
		(float)(origemY)); // eixo x
	g->DrawLine(gcnew Pen(Color::LightGray, 1.0f), (float)(origemX), (float)(0), (float)(origemX),
		(float)(pctjanela->Height)); // eixo y
	pctjanela->Image = imagem;

}
private: System::Void btnup_Click(System::Object^ sender, System::EventArgs^ e) {
	txtX->Text = x_atual.ToString();
	txtY->Text = (y_atual - Int16::Parse(cmbpasso -> Text)).ToString();
	pctjanela_Click(pctjanela, e);

}
private: System::Void btndown_Click(System::Object^ sender, System::EventArgs^ e) {
	txtX->Text = x_atual.ToString();
	txtY->Text = (y_atual + Int16::Parse(cmbpasso->Text)).ToString();
	pctjanela_Click(pctjanela, e);

}
private: System::Void btnright_Click(System::Object^ sender, System::EventArgs^ e) {
	txtX->Text = y_atual.ToString();
	txtY->Text = (x_atual + Int16::Parse(cmbpasso->Text)).ToString();
	pctjanela_Click(pctjanela, e);

}
private: System::Void btnleft_Click(System::Object^ sender, System::EventArgs^ e) {
	txtX->Text = y_atual.ToString();
	txtY->Text = (x_atual - Int16::Parse(cmbpasso->Text)).ToString();
	pctjanela_Click(pctjanela, e);

}
};
}
