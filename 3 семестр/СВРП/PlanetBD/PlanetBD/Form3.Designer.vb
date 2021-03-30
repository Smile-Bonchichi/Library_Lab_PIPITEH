<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form3
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form3))
        Dim HClassLabel As System.Windows.Forms.Label
        Dim Краткие_данныеLabel As System.Windows.Forms.Label
        Me.Panel1 = New System.Windows.Forms.Panel()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.PlanetsDataSet = New PlanetBD.PlanetsDataSet()
        Me.Жизнепригодность_ПланетыBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.Жизнепригодность_ПланетыTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Жизнепригодность_ПланетыTableAdapter()
        Me.TableAdapterManager = New PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager()
        Me.Жизнепригодность_ПланетыBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
        Me.BindingNavigatorMoveFirstItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMovePreviousItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorPositionItem = New System.Windows.Forms.ToolStripTextBox()
        Me.BindingNavigatorCountItem = New System.Windows.Forms.ToolStripLabel()
        Me.BindingNavigatorSeparator1 = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorMoveNextItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveLastItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator2 = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorAddNewItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorDeleteItem = New System.Windows.Forms.ToolStripButton()
        Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.HClassTextBox = New System.Windows.Forms.TextBox()
        Me.Краткие_данныеTextBox = New System.Windows.Forms.TextBox()
        HClassLabel = New System.Windows.Forms.Label()
        Краткие_данныеLabel = New System.Windows.Forms.Label()
        Me.Panel1.SuspendLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Жизнепригодность_ПланетыBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Жизнепригодность_ПланетыBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.Жизнепригодность_ПланетыBindingNavigator.SuspendLayout()
        Me.SuspendLayout()
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
        Me.Panel1.Location = New System.Drawing.Point(53, 80)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(392, 206)
        Me.Panel1.TabIndex = 12
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label7.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label7.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label7.Location = New System.Drawing.Point(37, 136)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(304, 24)
        Me.Label7.TabIndex = 7
        Me.Label7.Text = "предпологается, что на планете"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label6.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label6.Location = New System.Drawing.Point(37, 112)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(309, 24)
        Me.Label6.TabIndex = 6
        Me.Label6.Text = "продуцентов (растительности),и"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label5.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label5.Location = New System.Drawing.Point(48, 88)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(279, 24)
        Me.Label5.TabIndex = 5
        Me.Label5.Text = "для существования наземных"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label4.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label4.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label4.Location = New System.Drawing.Point(48, 64)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(287, 24)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "пригодность климата планеты"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label3.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label3.Location = New System.Drawing.Point(40, 40)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(300, 24)
        Me.Label3.TabIndex = 3
        Me.Label3.Text = "определяющий водно-тепловую"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label2.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label2.Location = New System.Drawing.Point(10, 16)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(379, 24)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Уровень жизнепригодности — параметр"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Label1.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label1.Location = New System.Drawing.Point(67, 44)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(362, 24)
        Me.Label1.TabIndex = 11
        Me.Label1.Text = "Таблица ""Жизнепригодность планеты"""
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label8.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label8.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label8.Location = New System.Drawing.Point(89, 160)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(187, 24)
        Me.Label8.TabIndex = 8
        Me.Label8.Text = "присутствует вода."
        '
        'PlanetsDataSet
        '
        Me.PlanetsDataSet.DataSetName = "PlanetsDataSet"
        Me.PlanetsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'Жизнепригодность_ПланетыBindingSource
        '
        Me.Жизнепригодность_ПланетыBindingSource.DataMember = "Жизнепригодность Планеты"
        Me.Жизнепригодность_ПланетыBindingSource.DataSource = Me.PlanetsDataSet
        '
        'Жизнепригодность_ПланетыTableAdapter
        '
        Me.Жизнепригодность_ПланетыTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.UpdateOrder = PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        Me.TableAdapterManager.Жизнепригодность_ПланетыTableAdapter = Me.Жизнепригодность_ПланетыTableAdapter
        Me.TableAdapterManager.Класс_ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.Методы_обнаружения_экзопланетTableAdapter = Nothing
        Me.TableAdapterManager.ПланетыTableAdapter = Nothing
        '
        'Жизнепригодность_ПланетыBindingNavigator
        '
        Me.Жизнепригодность_ПланетыBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.Жизнепригодность_ПланетыBindingNavigator.BindingSource = Me.Жизнепригодность_ПланетыBindingSource
        Me.Жизнепригодность_ПланетыBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.Жизнепригодность_ПланетыBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.Жизнепригодность_ПланетыBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem})
        Me.Жизнепригодность_ПланетыBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.Жизнепригодность_ПланетыBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.Жизнепригодность_ПланетыBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.Жизнепригодность_ПланетыBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.Жизнепригодность_ПланетыBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.Жизнепригодность_ПланетыBindingNavigator.Name = "Жизнепригодность_ПланетыBindingNavigator"
        Me.Жизнепригодность_ПланетыBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.Жизнепригодность_ПланетыBindingNavigator.Size = New System.Drawing.Size(496, 25)
        Me.Жизнепригодность_ПланетыBindingNavigator.TabIndex = 13
        Me.Жизнепригодность_ПланетыBindingNavigator.Text = "BindingNavigator1"
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
        'BindingNavigatorCountItem
        '
        Me.BindingNavigatorCountItem.Name = "BindingNavigatorCountItem"
        Me.BindingNavigatorCountItem.Size = New System.Drawing.Size(43, 22)
        Me.BindingNavigatorCountItem.Text = "для {0}"
        Me.BindingNavigatorCountItem.ToolTipText = "Общее число элементов"
        '
        'BindingNavigatorSeparator1
        '
        Me.BindingNavigatorSeparator1.Name = "BindingNavigatorSeparator"
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
        Me.BindingNavigatorSeparator2.Name = "BindingNavigatorSeparator"
        Me.BindingNavigatorSeparator2.Size = New System.Drawing.Size(6, 25)
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
        'BindingNavigatorDeleteItem
        '
        Me.BindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorDeleteItem.Image = CType(resources.GetObject("BindingNavigatorDeleteItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorDeleteItem.Name = "BindingNavigatorDeleteItem"
        Me.BindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorDeleteItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorDeleteItem.Text = "Удалить"
        '
        'Жизнепригодность_ПланетыBindingNavigatorSaveItem
        '
        Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem.Image = CType(resources.GetObject("Жизнепригодность_ПланетыBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem.Name = "Жизнепригодность_ПланетыBindingNavigatorSaveItem"
        Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 22)
        Me.Жизнепригодность_ПланетыBindingNavigatorSaveItem.Text = "Сохранить данные"
        '
        'HClassLabel
        '
        HClassLabel.AutoSize = True
        HClassLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        HClassLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        HClassLabel.Location = New System.Drawing.Point(49, 344)
        HClassLabel.Name = "HClassLabel"
        HClassLabel.Size = New System.Drawing.Size(76, 24)
        HClassLabel.TabIndex = 13
        HClassLabel.Text = "h Class:"
        '
        'HClassTextBox
        '
        Me.HClassTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.Жизнепригодность_ПланетыBindingSource, "hClass", True))
        Me.HClassTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.HClassTextBox.Location = New System.Drawing.Point(217, 339)
        Me.HClassTextBox.Name = "HClassTextBox"
        Me.HClassTextBox.Size = New System.Drawing.Size(228, 29)
        Me.HClassTextBox.TabIndex = 14
        '
        'Краткие_данныеLabel
        '
        Краткие_данныеLabel.AutoSize = True
        Краткие_данныеLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Краткие_данныеLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Краткие_данныеLabel.Location = New System.Drawing.Point(49, 391)
        Краткие_данныеLabel.Name = "Краткие_данныеLabel"
        Краткие_данныеLabel.Size = New System.Drawing.Size(162, 24)
        Краткие_данныеLabel.TabIndex = 14
        Краткие_данныеLabel.Text = "Краткие данные:"
        '
        'Краткие_данныеTextBox
        '
        Me.Краткие_данныеTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.Жизнепригодность_ПланетыBindingSource, "Краткие_данные", True))
        Me.Краткие_данныеTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Краткие_данныеTextBox.Location = New System.Drawing.Point(217, 395)
        Me.Краткие_данныеTextBox.Multiline = True
        Me.Краткие_данныеTextBox.Name = "Краткие_данныеTextBox"
        Me.Краткие_данныеTextBox.Size = New System.Drawing.Size(228, 118)
        Me.Краткие_данныеTextBox.TabIndex = 15
        '
        'Form3
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.FromArgb(CType(CType(9, Byte), Integer), CType(CType(7, Byte), Integer), CType(CType(56, Byte), Integer))
        Me.ClientSize = New System.Drawing.Size(496, 530)
        Me.Controls.Add(Краткие_данныеLabel)
        Me.Controls.Add(Me.Краткие_данныеTextBox)
        Me.Controls.Add(HClassLabel)
        Me.Controls.Add(Me.HClassTextBox)
        Me.Controls.Add(Me.Жизнепригодность_ПланетыBindingNavigator)
        Me.Controls.Add(Me.Panel1)
        Me.Controls.Add(Me.Label1)
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "Form3"
        Me.Text = "Таблица ""Жизнепригодность планеты"""
        Me.Panel1.ResumeLayout(False)
        Me.Panel1.PerformLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Жизнепригодность_ПланетыBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Жизнепригодность_ПланетыBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.Жизнепригодность_ПланетыBindingNavigator.ResumeLayout(False)
        Me.Жизнепригодность_ПланетыBindingNavigator.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Panel1 As Panel
    Friend WithEvents Label7 As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label1 As Label
    Friend WithEvents Label8 As Label
    Friend WithEvents PlanetsDataSet As PlanetsDataSet
    Friend WithEvents Жизнепригодность_ПланетыBindingSource As BindingSource
    Friend WithEvents Жизнепригодность_ПланетыTableAdapter As PlanetsDataSetTableAdapters.Жизнепригодность_ПланетыTableAdapter
    Friend WithEvents TableAdapterManager As PlanetsDataSetTableAdapters.TableAdapterManager
    Friend WithEvents Жизнепригодность_ПланетыBindingNavigator As BindingNavigator
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
    Friend WithEvents Жизнепригодность_ПланетыBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents HClassTextBox As TextBox
    Friend WithEvents Краткие_данныеTextBox As TextBox
End Class
