<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form9
    Inherits System.Windows.Forms.Form

    'Форма переопределяет dispose для очистки списка компонентов.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Является обязательной для конструктора форм Windows Forms
    Private components As System.ComponentModel.IContainer

    'Примечание: следующая процедура является обязательной для конструктора форм Windows Forms
    'Для ее изменения используйте конструктор форм Windows Form.  
    'Не изменяйте ее в редакторе исходного кода.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Dim ReportDataSource1 As Microsoft.Reporting.WinForms.ReportDataSource = New Microsoft.Reporting.WinForms.ReportDataSource()
        Me.ReportViewer1 = New Microsoft.Reporting.WinForms.ReportViewer()
        Me.PlanetsDataSet = New PlanetBD.PlanetsDataSet()
        Me.Анализ_для_каждой_планетыBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.Анализ_для_каждой_планетыTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Анализ_для_каждой_планетыTableAdapter()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Анализ_для_каждой_планетыBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'ReportViewer1
        '
        ReportDataSource1.Name = "DataSet1"
        ReportDataSource1.Value = Me.Анализ_для_каждой_планетыBindingSource
        Me.ReportViewer1.LocalReport.DataSources.Add(ReportDataSource1)
        Me.ReportViewer1.LocalReport.ReportEmbeddedResource = "PlanetBD.Report2.rdlc"
        Me.ReportViewer1.Location = New System.Drawing.Point(12, 12)
        Me.ReportViewer1.Name = "ReportViewer1"
        Me.ReportViewer1.ServerReport.BearerToken = Nothing
        Me.ReportViewer1.Size = New System.Drawing.Size(502, 412)
        Me.ReportViewer1.TabIndex = 0
        '
        'PlanetsDataSet
        '
        Me.PlanetsDataSet.DataSetName = "PlanetsDataSet"
        Me.PlanetsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'Анализ_для_каждой_планетыBindingSource
        '
        Me.Анализ_для_каждой_планетыBindingSource.DataMember = "Анализ_для_каждой_планеты"
        Me.Анализ_для_каждой_планетыBindingSource.DataSource = Me.PlanetsDataSet
        '
        'Анализ_для_каждой_планетыTableAdapter
        '
        Me.Анализ_для_каждой_планетыTableAdapter.ClearBeforeFill = True
        '
        'Form9
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.FromArgb(CType(CType(9, Byte), Integer), CType(CType(7, Byte), Integer), CType(CType(56, Byte), Integer))
        Me.ClientSize = New System.Drawing.Size(526, 450)
        Me.Controls.Add(Me.ReportViewer1)
        Me.Name = "Form9"
        Me.Text = "Отчет Анализа о жизнепригодноси планет"
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Анализ_для_каждой_планетыBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents ReportViewer1 As Microsoft.Reporting.WinForms.ReportViewer
    Friend WithEvents Анализ_для_каждой_планетыBindingSource As BindingSource
    Friend WithEvents PlanetsDataSet As PlanetsDataSet
    Friend WithEvents Анализ_для_каждой_планетыTableAdapter As PlanetsDataSetTableAdapters.Анализ_для_каждой_планетыTableAdapter
End Class
