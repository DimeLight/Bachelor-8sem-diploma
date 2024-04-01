#include "math.h"
#pragma once

namespace Calcship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Data::DataSet^ dataSet1;

	private:
	protected:


	private: System::Data::DataTable^ dataTable1;
	private: System::Data::DataColumn^ dataColumn1;
	private: System::Data::DataColumn^ dataColumn2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dsParamsDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dsValueDataGridViewTextBoxColumn;
	private: System::Data::DataSet^ dataSet2;
	private: System::Data::DataTable^ dataTable2;
	private: System::Data::DataColumn^ dataColumn3;
	private: System::Data::DataColumn^ dataColumn4;
	private: System::Data::DataColumn^ dataColumn5;
	private: System::Data::DataColumn^ dataColumn6;
	private: System::Data::DataColumn^ dataColumn7;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dsParamsDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dsValueDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Red;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Black;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Red;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dsParamsDataGridViewTextBoxColumn,
					this->dsValueDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataMember = L"Table1";
			this->dataGridView1->DataSource = this->dataSet1;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Red;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Yellow;
			this->dataGridView1->Location = System::Drawing::Point(12, 70);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Red;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 40;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle5->NullValue = nullptr;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Red;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Yellow;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Black;
			this->dataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Red;
			this->dataGridView1->Size = System::Drawing::Size(300, 540);
			this->dataGridView1->TabIndex = 0;
			// 
			// dsParamsDataGridViewTextBoxColumn
			// 
			this->dsParamsDataGridViewTextBoxColumn->DataPropertyName = L"dsParams";
			this->dsParamsDataGridViewTextBoxColumn->DividerWidth = 1;
			this->dsParamsDataGridViewTextBoxColumn->HeaderText = L"Параметр";
			this->dsParamsDataGridViewTextBoxColumn->Name = L"dsParamsDataGridViewTextBoxColumn";
			this->dsParamsDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// dsValueDataGridViewTextBoxColumn
			// 
			this->dsValueDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dsValueDataGridViewTextBoxColumn->DataPropertyName = L"dsValue";
			this->dsValueDataGridViewTextBoxColumn->HeaderText = L"Значение";
			this->dsValueDataGridViewTextBoxColumn->Name = L"dsValueDataGridViewTextBoxColumn";
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"inputDS";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(2) { this->dataColumn1, this->dataColumn2 });
			cli::array< System::String^ >^ __mcTemp__1 = gcnew cli::array< System::String^  >(1) { L"dsParams" };
			this->dataTable1->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {
				(gcnew System::Data::UniqueConstraint(L"Constraint1",
					__mcTemp__1, false))
			});
			this->dataTable1->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->ColumnName = L"dsParams";
			this->dataColumn1->ReadOnly = true;
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"dsValue";
			this->dataColumn2->DataType = System::Double::typeid;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Yellow;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Расчет положения судна";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackColor = System::Drawing::Color::Black;
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->chart1->BackSecondaryColor = System::Drawing::Color::Black;
			this->chart1->BorderlineColor = System::Drawing::Color::Yellow;
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->BorderColor = System::Drawing::Color::Purple;
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisX->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea1->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisX->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisX->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->MinorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->ScaleBreakStyle->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->ScrollBar->BackColor = System::Drawing::Color::Black;
			chartArea1->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->ScrollBar->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX->Title = L"t";
			chartArea1->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->IsLabelAutoFit = false;
			chartArea1->AxisX2->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisX2->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->MajorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->MinorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->ScrollBar->BackColor = System::Drawing::Color::Black;
			chartArea1->AxisX2->ScrollBar->ButtonColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->ScrollBar->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisX2->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisX2->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->AxisY->IsLabelAutoFit = false;
			chartArea1->AxisY->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea1->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisY->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->MinorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->ScrollBar->BackColor = System::Drawing::Color::Black;
			chartArea1->AxisY->ScrollBar->ButtonColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->ScrollBar->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea1->AxisY->Title = L"β";
			chartArea1->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisY->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->IsLabelAutoFit = false;
			chartArea1->AxisY2->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisY2->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->MajorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->MinorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea1->AxisY2->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea1->AxisY2->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea1->BackColor = System::Drawing::Color::Black;
			chartArea1->BorderColor = System::Drawing::Color::Yellow;
			chartArea1->Name = L"ChartArea1";
			chartArea1->ShadowColor = System::Drawing::Color::Red;
			chartArea2->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea2->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea2->AxisX->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea2->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea2->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisX->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->MinorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->ScaleBreakStyle->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->ScaleBreakStyle->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea2->AxisX->ScrollBar->BackColor = System::Drawing::Color::Black;
			chartArea2->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->ScrollBar->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX->Title = L"t";
			chartArea2->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX2->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisX2->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea2->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea2->AxisY->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea2->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea2->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea2->AxisY->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->MinorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->ScrollBar->BackColor = System::Drawing::Color::Black;
			chartArea2->AxisY->ScrollBar->ButtonColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->ScrollBar->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea2->AxisY->Title = L"ω";
			chartArea2->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea2->AxisY->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY2->LineColor = System::Drawing::Color::Yellow;
			chartArea2->AxisY2->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea2->BackColor = System::Drawing::Color::Black;
			chartArea2->BorderColor = System::Drawing::Color::Yellow;
			chartArea2->Name = L"ChartArea2";
			chartArea2->ShadowColor = System::Drawing::Color::Red;
			chartArea3->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea3->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea3->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea3->AxisX->LineColor = System::Drawing::Color::Yellow;
			chartArea3->AxisX->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea3->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea3->AxisX->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea3->AxisX->Title = L"t";
			chartArea3->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisX->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea3->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea3->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea3->AxisY->IsLabelAutoFit = false;
			chartArea3->AxisY->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold));
			chartArea3->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea3->AxisY->LineColor = System::Drawing::Color::Yellow;
			chartArea3->AxisY->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea3->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea3->AxisY->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea3->AxisY->MinorGrid->LineColor = System::Drawing::Color::Yellow;
			chartArea3->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Stacked;
			chartArea3->AxisY->Title = L"ψ";
			chartArea3->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisY->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea3->BackColor = System::Drawing::Color::Black;
			chartArea3->BorderColor = System::Drawing::Color::Yellow;
			chartArea3->Name = L"ChartArea3";
			chartArea3->ShadowColor = System::Drawing::Color::Red;
			chartArea4->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea4->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea4->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea4->AxisX->LineColor = System::Drawing::Color::Yellow;
			chartArea4->AxisX->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea4->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea4->AxisX->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea4->AxisX->Title = L"t";
			chartArea4->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea4->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea4->AxisX->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea4->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea4->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea4->AxisY->IsLabelAutoFit = false;
			chartArea4->AxisY->LabelStyle->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea4->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Yellow;
			chartArea4->AxisY->LineColor = System::Drawing::Color::Yellow;
			chartArea4->AxisY->MajorGrid->LineColor = System::Drawing::Color::Lime;
			chartArea4->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea4->AxisY->MajorTickMark->LineColor = System::Drawing::Color::Yellow;
			chartArea4->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Stacked;
			chartArea4->AxisY->Title = L"δ";
			chartArea4->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea4->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea4->AxisY->TitleForeColor = System::Drawing::Color::Yellow;
			chartArea4->BackColor = System::Drawing::Color::Black;
			chartArea4->BorderColor = System::Drawing::Color::Yellow;
			chartArea4->Name = L"ChartArea4";
			chartArea4->ShadowColor = System::Drawing::Color::Red;
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->ChartAreas->Add(chartArea4);
			this->chart1->DataSource = this->dataSet2;
			this->chart1->Location = System::Drawing::Point(324, 12);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Name = L"Series1";
			series1->XValueMember = L"time";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series1->YValueMembers = L"B";
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea2";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Name = L"Series2";
			series2->XValueMember = L"time";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series2->YValueMembers = L"w";
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea3";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Name = L"Series3";
			series3->XValueMember = L"time";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series3->YValueMembers = L"psi";
			series3->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea4";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Name = L"Series4";
			series4->XValueMember = L"time";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			series4->YValueMembers = L"d";
			series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(804, 598);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"Графики";
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"outputDS";
			this->dataSet2->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable2 });
			// 
			// dataTable2
			// 
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn3, this->dataColumn4,
					this->dataColumn5, this->dataColumn6, this->dataColumn7
			});
			cli::array< System::String^ >^ __mcTemp__2 = gcnew cli::array< System::String^  >(1) { L"time" };
			this->dataTable2->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {
				(gcnew System::Data::UniqueConstraint(L"Constraint1",
					__mcTemp__2, false))
			});
			this->dataTable2->TableName = L"Table1";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"time";
			this->dataColumn3->DataType = System::Int32::typeid;
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"B";
			this->dataColumn4->DataType = System::Double::typeid;
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"w";
			this->dataColumn5->DataType = System::Double::typeid;
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"psi";
			this->dataColumn6->DataType = System::Double::typeid;
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"d";
			this->dataColumn7->DataType = System::Double::typeid;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1140, 624);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::Yellow;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"MyForm";
			this->Opacity = 0.8;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Расчет положения судна";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		dataTable1->Rows->Add("T", 10);
		dataTable1->Rows->Add("h", 0.01);
		dataTable1->Rows->Add("K Пси", 1);
		dataTable1->Rows->Add("Бета 0", 1);
		dataTable1->Rows->Add("Омега 0", 1);
		dataTable1->Rows->Add("Пси 0", 1);
		dataTable1->Rows->Add("Пси заданное", 1);
		dataTable1->Rows->Add("Дельта 0", 1);
		dataTable1->Rows->Add("a1", 1);
		dataTable1->Rows->Add("a2", 1);
		dataTable1->Rows->Add("a3", 1);
		dataTable1->Rows->Add("d1", 1);
		dataTable1->Rows->Add("d2", 1);
		dataTable1->Rows->Add("d3", 1);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		dataSet2->Tables[0]->Clear();

		int T = (int)(double)dataSet1->Tables[0]->Rows[0]->ItemArray[1];
		double h = (double)dataSet1->Tables[0]->Rows[1]->ItemArray[1];
		double Kpsi = (double)dataSet1->Tables[0]->Rows[2]->ItemArray[1];
		double B = (double)dataSet1->Tables[0]->Rows[3]->ItemArray[1];
		double w = (double)dataSet1->Tables[0]->Rows[4]->ItemArray[1];
		double psi = (double)dataSet1->Tables[0]->Rows[5]->ItemArray[1];
		double psi_zadannoe = (double)dataSet1->Tables[0]->Rows[6]->ItemArray[1];
		double d = (double)dataSet1->Tables[0]->Rows[7]->ItemArray[1];
		double a1 = (double)dataSet1->Tables[0]->Rows[8]->ItemArray[1];
		double a2 = (double)dataSet1->Tables[0]->Rows[9]->ItemArray[1];
		double a3 = (double)dataSet1->Tables[0]->Rows[10]->ItemArray[1];
		double d1 = (double)dataSet1->Tables[0]->Rows[11]->ItemArray[1];
		double d2 = (double)dataSet1->Tables[0]->Rows[12]->ItemArray[1];
		double d3 = (double)dataSet1->Tables[0]->Rows[13]->ItemArray[1];

		int j = (int)ceil(T / h);

		for (int i = 0; i <= j; i++)
		{
			B = B + h * ((a1 * B) + (a2 * w) + (a3 * d));
			w = w + h * ((d1 * B) + (d2 * w) + (d3 * d));
			psi = psi + h * w;
			d = Kpsi + (psi - psi_zadannoe);

			dataSet2->Tables[0]->Rows->Add(i, B, w, psi, d);
		}
		chart1->DataBind();
	}

	};
}
