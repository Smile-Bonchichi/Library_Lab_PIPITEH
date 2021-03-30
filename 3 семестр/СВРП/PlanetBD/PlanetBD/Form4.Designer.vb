<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form4
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
        Dim Класс_ПланетыLabel As System.Windows.Forms.Label
        Dim Краткие_сведенияLabel As System.Windows.Forms.Label
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form4))
        Me.Panel1 = New System.Windows.Forms.Panel()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PlanetsDataSet = New PlanetBD.PlanetsDataSet()
        Me.Класс_ПланетыBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.Класс_ПланетыTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Класс_ПланетыTableAdapter()
        Me.TableAdapterManager = New PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager()
        Me.Класс_ПланетыBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
        Me.BindingNavigatorAddNewItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorCountItem = New System.Windows.Forms.ToolStripLabel()
        Me.BindingNavigatorDeleteItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveFirstItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMovePreviousItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorPositionItem = New System.Windows.Forms.ToolStripTextBox()
        Me.BindingNavigatorSeparator1 = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorMoveNextItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveLastItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator2 = New System.Windows.Forms.ToolStripSeparator()
        Me.Класс_ПланетыBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.Класс_ПланетыTextBox = New System.Windows.Forms.TextBox()
        Me.RichTextBox1 = New System.Windows.Forms.RichTextBox()
        Класс_ПланетыLabel = New System.Windows.Forms.Label()
        Краткие_сведенияLabel = New System.Windows.Forms.Label()
        Me.Panel1.SuspendLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Класс_ПланетыBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Класс_ПланетыBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.Класс_ПланетыBindingNavigator.SuspendLayout()
        Me.SuspendLayout()
        '
        'Класс_ПланетыLabel
        '
        Класс_ПланетыLabel.AutoSize = True
        Класс_ПланетыLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Класс_ПланетыLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Класс_ПланетыLabel.Location = New System.Drawing.Point(47, 314)
        Класс_ПланетыLabel.Name = "Класс_ПланетыLabel"
        Класс_ПланетыLabel.Size = New System.Drawing.Size(150, 24)
        Класс_ПланетыLabel.TabIndex = 15
        Класс_ПланетыLabel.Text = "Класс Планеты:"
        '
        'Краткие_сведенияLabel
        '
        Краткие_сведенияLabel.AutoSize = True
        Краткие_сведенияLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Краткие_сведенияLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Краткие_сведенияLabel.Location = New System.Drawing.Point(47, 365)
        Краткие_сведенияLabel.Name = "Краткие_сведенияLabel"
        Краткие_сведенияLabel.Size = New System.Drawing.Size(181, 24)
        Краткие_сведенияLabel.TabIndex = 16
        Краткие_сведенияLabel.Text = "Краткие сведения:"
        '
        'Panel1
        '
        Me.Panel1.BackColor = System.Drawing.Color.FromArgb(CType(CType(22, Byte), Integer), CType(CType(54, Byte), Integer), CType(CType(77, Byte), Integer))
        Me.Panel1.Controls.Add(Me.Label8)
        Me.Panel1.Controls.Add(Me.Label7)
        Me.Panel1.Controls.Add(Me.Label6)
        Me.Panel1.Controls.Add(Me.Label5)
        Me.Panel1.Controls.Add(Me.Label4)
        Me.Panel1.Controls.Add(Me.Label3)
        Me.Panel1.Controls.Add(Me.Label2)
        Me.Panel1.Location = New System.Drawing.Point(51, 79)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(392, 206)
        Me.Panel1.TabIndex = 14
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label8.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label8.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label8.Location = New System.Drawing.Point(117, 160)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(164, 24)
        Me.Label8.TabIndex = 8
        Me.Label8.Text = "обитаемой зоны."
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label7.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label7.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label7.Location = New System.Drawing.Point(37, 136)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(324, 24)
        Me.Label7.TabIndex = 7
        Me.Label7.Text = "положения планеты относительно"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label6.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label6.Location = New System.Drawing.Point(54, 112)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(286, 24)
        Me.Label6.TabIndex = 6
        Me.Label6.Text = "категорий масс.Он зависит от"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label5.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label5.Location = New System.Drawing.Point(56, 88)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(293, 24)
        Me.Label5.TabIndex = 5
        Me.Label5.Text = "температурных классов и семи"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label4.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label4.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label4.Location = New System.Drawing.Point(72, 64)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(263, 24)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "в виде комбинации из трех "
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label3.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label3.Location = New System.Drawing.Point(40, 40)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(320, 24)
        Me.Label3.TabIndex = 3
        Me.Label3.Text = "характеризующий планетные тела"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label2.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label2.Location = New System.Drawing.Point(57, 16)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(283, 24)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Планетарный класс-параметр,"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Label1.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label1.Location = New System.Drawing.Point(107, 41)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(279, 24)
        Me.Label1.TabIndex = 13
        Me.Label1.Text = "Таблица ""Планетарный класс"""
        Me.Label1.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'PlanetsDataSet
        '
        Me.PlanetsDataSet.DataSetName = "PlanetsDataSet"
        Me.PlanetsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'Класс_ПланетыBindingSource
        '
        Me.Класс_ПланетыBindingSource.DataMember = "Класс_Планеты"
        Me.Класс_ПланетыBindingSource.DataSource = Me.PlanetsDataSet
        '
        'Класс_ПланетыTableAdapter
        '
        Me.Класс_ПланетыTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.UpdateOrder = PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        Me.TableAdapterManager.Анализ_для_каждой_планетыTableAdapter = Nothing
        Me.TableAdapterManager.Жизнепригодность_ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.Класс_ПланетыTableAdapter = Me.Класс_ПланетыTableAdapter
        Me.TableAdapterManager.Методы_обнаружения_экзопланетTableAdapter = Nothing
        Me.TableAdapterManager.ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.ФотоTableAdapter = Nothing
        '
        'Класс_ПланетыBindingNavigator
        '
        Me.Класс_ПланетыBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.Класс_ПланетыBindingNavigator.BindingSource = Me.Класс_ПланетыBindingSource
        Me.Класс_ПланетыBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.Класс_ПланетыBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.Класс_ПланетыBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.Класс_ПланетыBindingNavigatorSaveItem})
        Me.Класс_ПланетыBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.Класс_ПланетыBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.Класс_ПланетыBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.Класс_ПланетыBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.Класс_ПланетыBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.Класс_ПланетыBindingNavigator.Name = "Класс_ПланетыBindingNavigator"
        Me.Класс_ПланетыBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.Класс_ПланетыBindingNavigator.Size = New System.Drawing.Size(489, 25)
        Me.Класс_ПланетыBindingNavigator.TabIndex = 15
        Me.Класс_ПланетыBindingNavigator.Text = "BindingNavigator1"
        '
        'BindingNavigatorAddNewItem
        '
        Me.BindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorAddNewItem.Image = CType(resources.GetObject("BindingNavigatorAddNewItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorAddNewItem.Name = "BindingNavigatorAddNewItem"
        Me.BindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorAddNewItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorAddNewItem.Text = "Добавить"
        '
        'BindingNavigatorCountItem
        '
        Me.BindingNavigatorCountItem.Name = "BindingNavigatorCountItem"
        Me.BindingNavigatorCountItem.Size = New System.Drawing.Size(43, 22)
        Me.BindingNavigatorCountItem.Text = "для {0}"
        Me.BindingNavigatorCountItem.ToolTipText = "Общее число элементов"
        '
        'BindingNavigatorDeleteItem
        '
        Me.BindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorDeleteItem.Image = CType(resources.GetObject("BindingNavigatorDeleteItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorDeleteItem.Name = "BindingNavigatorDeleteItem"
        Me.BindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorDeleteItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorDeleteItem.Text = "Удалить"
        '
        'BindingNavigatorMoveFirstItem
        '
        Me.BindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveFirstItem.Image = CType(resources.GetObject("BindingNavigatorMoveFirstItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveFirstItem.Name = "BindingNavigatorMoveFirstItem"
        Me.BindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveFirstItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveFirstItem.Text = "Переместить в начало"
        '
        'BindingNavigatorMovePreviousItem
        '
        Me.BindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMovePreviousItem.Image = CType(resources.GetObject("BindingNavigatorMovePreviousItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMovePreviousItem.Name = "BindingNavigatorMovePreviousItem"
        Me.BindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMovePreviousItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMovePreviousItem.Text = "Переместить назад"
        '
        'BindingNavigatorSeparator
        '
        Me.BindingNavigatorSeparator.Name = "BindingNavigatorSeparator"
        Me.BindingNavigatorSeparator.Size = New System.Drawing.Size(6, 25)
        '
        'BindingNavigatorPositionItem
        '
        Me.BindingNavigatorPositionItem.AccessibleName = "Положение"
        Me.BindingNavigatorPositionItem.AutoSize = False
        Me.BindingNavigatorPositionItem.Font = New System.Drawing.Font("Segoe UI", 9.0!)
        Me.BindingNavigatorPositionItem.Name = "BindingNavigatorPositionItem"
        Me.BindingNavigatorPositionItem.Size = New System.Drawing.Size(50, 23)
        Me.BindingNavigatorPositionItem.Text = "0"
        Me.BindingNavigatorPositionItem.ToolTipText = "Текущее положение"
        '
        'BindingNavigatorSeparator1
        '
        Me.BindingNavigatorSeparator1.Name = "BindingNavigatorSeparator1"
        Me.BindingNavigatorSeparator1.Size = New System.Drawing.Size(6, 25)
        '
        'BindingNavigatorMoveNextItem
        '
        Me.BindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveNextItem.Image = CType(resources.GetObject("BindingNavigatorMoveNextItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveNextItem.Name = "BindingNavigatorMoveNextItem"
        Me.BindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveNextItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveNextItem.Text = "Переместить вперед"
        '
        'BindingNavigatorMoveLastItem
        '
        Me.BindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveLastItem.Image = CType(resources.GetObject("BindingNavigatorMoveLastItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveLastItem.Name = "BindingNavigatorMoveLastItem"
        Me.BindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveLastItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveLastItem.Text = "Переместить в конец"
        '
        'BindingNavigatorSeparator2
        '
        Me.BindingNavigatorSeparator2.Name = "BindingNavigatorSeparator2"
        Me.BindingNavigatorSeparator2.Size = New System.Drawing.Size(6, 25)
        '
        'Класс_ПланетыBindingNavigatorSaveItem
        '
        Me.Класс_ПланетыBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.Класс_ПланетыBindingNavigatorSaveItem.Image = CType(resources.GetObject("Класс_ПланетыBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.Класс_ПланетыBindingNavigatorSaveItem.Name = "Класс_ПланетыBindingNavigatorSaveItem"
        Me.Класс_ПланетыBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 22)
        Me.Класс_ПланетыBindingNavigatorSaveItem.Text = "Сохранить данные"
        '
        'Класс_ПланетыTextBox
        '
        Me.Класс_ПланетыTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.Класс_ПланетыBindingSource, "Класс_Планеты", True))
        Me.Класс_ПланетыTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Класс_ПланетыTextBox.Location = New System.Drawing.Point(239, 309)
        Me.Класс_ПланетыTextBox.Name = "Класс_ПланетыTextBox"
        Me.Класс_ПланетыTextBox.Size = New System.Drawing.Size(204, 29)
        Me.Класс_ПланетыTextBox.TabIndex = 16
        '
        'RichTextBox1
        '
        Me.RichTextBox1.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.Класс_ПланетыBindingSource, "Краткие_сведения", True))
        Me.RichTextBox1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.RichTextBox1.Location = New System.Drawing.Point(239, 362)
        Me.RichTextBox1.Name = "RichTextBox1"
        Me.RichTextBox1.Size = New System.Drawing.Size(204, 166)
        Me.RichTextBox1.TabIndex = 17
        Me.RichTextBox1.Text = ""
        '
        'Form4
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.FromArgb(CType(CType(9, Byte), Integer), CType(CType(7, Byte), Integer), CType(CType(56, Byte), Integer))
        Me.ClientSize = New System.Drawing.Size(489, 540)
        Me.Controls.Add(Me.RichTextBox1)
        Me.Controls.Add(Краткие_сведенияLabel)
        Me.Controls.Add(Класс_ПланетыLabel)
        Me.Controls.Add(Me.Класс_ПланетыTextBox)
        Me.Controls.Add(Me.Класс_ПланетыBindingNavigator)
        Me.Controls.Add(Me.Panel1)
        Me.Controls.Add(Me.Label1)
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "Form4"
        Me.Text = "Таблица ""Планетраный класс"""
        Me.Panel1.ResumeLayout(False)
        Me.Panel1.PerformLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Класс_ПланетыBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Класс_ПланетыBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.Класс_ПланетыBindingNavigator.ResumeLayout(False)
        Me.Класс_ПланетыBindingNavigator.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Panel1 As Panel
    Friend WithEvents Label8 As Label
    Friend WithEvents Label7 As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label1 As Label
    Friend WithEvents PlanetsDataSet As PlanetsDataSet
    Friend WithEvents Класс_ПланетыBindingSource As BindingSource
    Friend WithEvents Класс_ПланетыTableAdapter As PlanetsDataSetTableAdapters.Класс_ПланетыTableAdapter
    Friend WithEvents TableAdapterManager As PlanetsDataSetTableAdapters.TableAdapterManager
    Friend WithEvents Класс_ПланетыBindingNavigator As BindingNavigator
    Friend WithEvents BindingNavigatorAddNewItem As ToolStripButton
    Friend WithEvents BindingNavigatorCountItem As ToolStripLabel
    Friend WithEvents BindingNavigatorDeleteItem As ToolStripButton
    Friend WithEvents BindingNavigatorMoveFirstItem As ToolStripButton
    Friend WithEvents BindingNavigatorMovePreviousItem As ToolStripButton
    Friend WithEvents BindingNavigatorSeparator As ToolStripSeparator
    Friend WithEvents BindingNavigatorPositionItem As ToolStripTextBox
    Friend WithEvents BindingNavigatorSeparator1 As ToolStripSeparator
    Friend WithEvents BindingNavigatorMoveNextItem As ToolStripButton
    Friend WithEvents BindingNavigatorMoveLastItem As ToolStripButton
    Friend WithEvents BindingNavigatorSeparator2 As ToolStripSeparator
    Friend WithEvents Класс_ПланетыBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents Класс_ПланетыTextBox As TextBox
    Friend WithEvents RichTextBox1 As RichTextBox
End Class
