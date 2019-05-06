#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Draw();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(28, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(740, 515);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 579);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ðèñîâàíèå ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		void Draw()
		{
			if (pictureBox1->BackgroundImage == nullptr)
				pictureBox1->BackgroundImage = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			Graphics^ buffGraphics = Graphics::FromImage(pictureBox1->BackgroundImage);
			buffGraphics->Clear(pictureBox1->BackColor);
			Point point1 = Point(9 * (pictureBox1->Width / 3), pictureBox1->Top);
			Point point2 = Point(pictureBox1->Right, pictureBox1->Top);
			Point point3 = Point(pictureBox1->Width / 6, pictureBox1->Bottom);
			Point point4 = Point(pictureBox1->Right, pictureBox1->Bottom);
			array<Point>^ curvePoints = { point1, point2, point4, point3 };
			System::Drawing::Drawing2D::GraphicsPath^ gg = gcnew System::Drawing::Drawing2D::GraphicsPath();
			gg->AddLines(curvePoints);
			buffGraphics->FillPath(Brushes::GreenYellow, gg);
			buffGraphics->FillEllipse(Brushes::White, pictureBox1->Width / 2.5, (pictureBox1->Height / 3), pictureBox1->Width / 3, pictureBox1->Width / 3);
			Point point1tri = Point((pictureBox1->Width / 7), pictureBox1->Height / 2);
			Point point2tri = Point(3 * (pictureBox1->Width / 3), pictureBox1->Height / 22);
			Point point3tri = Point(6 * (pictureBox1->Width / 4), 3 * (pictureBox1->Height / 8));
			array<Point>^ TrianglePoints = { point1tri, point2tri, point3tri };

			System::Drawing::Drawing2D::GraphicsPath^ PaintedTriangle = gcnew System::Drawing::Drawing2D::GraphicsPath();
			PaintedTriangle->AddLines(TrianglePoints);
			buffGraphics->FillPath(Brushes::Orange, PaintedTriangle);

			
		}

#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
