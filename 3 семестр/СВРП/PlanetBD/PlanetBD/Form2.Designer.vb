<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form2
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
        Dim МетодLabel As System.Windows.Forms.Label
        Dim Краткие_сведенияLabel As System.Windows.Forms.Label
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form2))
        Me.Panel1 = New System.Windows.Forms.Panel()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PlanetsDataSet = New PlanetBD.PlanetsDataSet()
        Me.Методы_обнаружения_экзопланетBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.Методы_обнаружения_экзопланетTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Методы_обнаружения_экзопланетTableAdapter()
        Me.TableAdapterManager = New PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager()
        Me.Методы_обнаружения_экзопланетBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
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
        Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.МетодTextBox = New System.Windows.Forms.TextBox()
        Me.RichTextBox1 = New System.Windows.Forms.RichTextBox()
        МетодLabel = New System.Windows.Forms.Label()
        Краткие_сведенияLabel = New System.Windows.Forms.Label()
        Me.Panel1.SuspendLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Методы_обнаружения_экзопланетBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Методы_обнаружения_экзопланетBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.Методы_обнаружения_экзопланетBindingNavigator.SuspendLayout()
        Me.SuspendLayout()
        '
        'МетодLabel
        '
        МетодLabel.AutoSize = True
        МетодLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        МетодLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        МетодLabel.Location = New System.Drawing.Point(41, 290)
        МетодLabel.Name = "МетодLabel"
        МетодLabel.Size = New System.Drawing.Size(75, 24)
        МетодLabel.TabIndex = 11
        МетодLabel.Text = "Метод:"
        '
        'Краткие_сведенияLabel
        '
        Краткие_сведенияLabel.AutoSize = True
        Краткие_сведенияLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Краткие_сведенияLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Краткие_сведенияLabel.Location = New System.Drawing.Point(41, 337)
        Краткие_сведенияLabel.Name = "Краткие_сведенияLabel"
        Краткие_сведенияLabel.Size = New System.Drawing.Size(181, 24)
        Краткие_сведенияLabel.TabIndex = 12
        Краткие_сведенияLabel.Text = "Краткие сведения:"
        '
        'Panel1
        '
        Me.Panel1.BackColor = System.Drawing.Color.FromArgb(CType(CType(22, Byte), Integer), CType(CType(54, Byte), Integer), CType(CType(77, Byte), Integer))
        Me.Panel1.Controls.Add(Me.Label7)
        Me.Panel1.Controls.Add(Me.Label6)
        Me.Panel1.Controls.Add(Me.Label5)
        Me.Panel1.Controls.Add(Me.Label4)
        Me.Panel1.Controls.Add(Me.Label3)
        Me.Panel1.Controls.Add(Me.Label2)
        Me.Panel1.Location = New System.Drawing.Point(44, 76)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(392, 181)
        Me.Panel1.TabIndex = 10
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label7.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label7.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label7.Location = New System.Drawing.Point(63, 136)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(251, 24)
        Me.Label7.TabIndex = 7
        Me.Label7.Text = "распространенные из них."
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label6.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label6.Location = New System.Drawing.Point(48, 112)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(279, 24)
        Me.Label6.TabIndex = 6
        Me.Label6.Text = "поиска экзопланет,вот самые"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label5.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label5.Location = New System.Drawing.Point(36, 88)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(309, 24)
        Me.Label5.TabIndex = 5
        Me.Label5.Text = "Есть достаточно много методов"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label4.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label4.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label4.Location = New System.Drawing.Point(35, 64)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(305, 24)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "наиболее важных в астрономии."
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label3.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label3.Location = New System.Drawing.Point(14, 40)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(352, 24)
        Me.Label3.TabIndex = 3
        Me.Label3.Text = "на данный момент является одной из"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label2.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label2.Location = New System.Drawing.Point(24, 16)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(342, 24)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Задача исследования экзопланет на"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Label1.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label1.Location = New System.Drawing.Point(40, 39)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(410, 24)
        Me.Label1.TabIndex = 9
        Me.Label1.Text = "Таблица ""Методы обнаружения экзопланет"""
        '
        'PlanetsDataSet
        '
        Me.PlanetsDataSet.DataSetName = "PlanetsDataSet"
        Me.PlanetsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'Методы_обнаружения_экзопланетBindingSource
        '
        Me.Методы_обнаружения_экзопланетBindingSource.DataMember = "Методы обнаружения экзопланет"
        Me.Методы_обнаружения_экзопланетBindingSource.DataSource = Me.PlanetsDataSet
        '
        'Методы_обнаружения_экзопланетTableAdapter
        '
        Me.Методы_обнаружения_экзопланетTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.UpdateOrder = PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        Me.TableAdapterManager.Жизнепригодность_ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.Класс_ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.Методы_обнаружения_экзопланетTableAdapter = Me.Методы_обнаружения_экзопланетTableAdapter
        Me.TableAdapterManager.ПланетыTableAdapter = Nothing
        '
        'Методы_обнаружения_экзопланетBindingNavigator
        '
        Me.Методы_обнаружения_экзопланетBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.BindingSource = Me.Методы_обнаружения_экзопланетBindingSource
        Me.Методы_обнаружения_экзопланетBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem})
        Me.Методы_обнаружения_экзопланетBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.Методы_обнаружения_экзопланетBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.Name = "Методы_обнаружения_экзопланетBindingNavigator"
        Me.Методы_обнаружения_экзопланетBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.Методы_обнаружения_экзопланетBindingNavigator.Size = New System.Drawing.Size(476, 25)
        Me.Методы_обнаружения_экзопланетBindingNavigator.TabIndex = 11
        Me.Методы_обнаружения_экзопланетBindingNavigator.Text = "BindingNavigator1"
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
        'Методы_обнаружения_экзопланетBindingNavigatorSaveItem
        '
        Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem.Image = CType(resources.GetObject("Методы_обнаружения_экзопланетBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem.Name = "Методы_обнаружения_экзопланетBindingNavigatorSaveItem"
        Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 22)
        Me.Методы_обнаружения_экзопланетBindingNavigatorSaveItem.Text = "Сохранить данные"
        '
        'МетодTextBox
        '
        Me.МетодTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.Методы_обнаружения_экзопланетBindingSource, "Метод", True))
        Me.МетодTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.МетодTextBox.Location = New System.Drawing.Point(122, 285)
        Me.МетодTextBox.Name = "МетодTextBox"
        Me.МетодTextBox.Size = New System.Drawing.Size(314, 29)
        Me.МетодTextBox.TabIndex = 12
        '
        'RichTextBox1
        '
        Me.RichTextBox1.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.Методы_обнаружения_экзопланетBindingSource, "Краткие_сведения", True))
        Me.RichTextBox1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.RichTextBox1.Location = New System.Drawing.Point(238, 337)
        Me.RichTextBox1.Name = "RichTextBox1"
        Me.RichTextBox1.Size = New System.Drawing.Size(198, 157)
        Me.RichTextBox1.TabIndex = 13
        Me.RichTextBox1.Text = ""
        '
        'Form2
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.FromArgb(CType(CType(9, Byte), Integer), CType(CType(7, Byte), Integer), CType(CType(56, Byte), Integer))
        Me.ClientSize = New System.Drawing.Size(476, 506)
        Me.Controls.Add(Me.RichTextBox1)
        Me.Controls.Add(Краткие_сведенияLabel)
        Me.Controls.Add(МетодLabel)
        Me.Controls.Add(Me.МетодTextBox)
        Me.Controls.Add(Me.Методы_обнаружения_экзопланетBindingNavigator)
        Me.Controls.Add(Me.Panel1)
        Me.Controls.Add(Me.Label1)
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "Form2"
        Me.Text = "Таблица ""Методы обнаружения экзопланет"""
        Me.Panel1.ResumeLayout(False)
        Me.Panel1.PerformLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Методы_обнаружения_экзопланетBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Методы_обнаружения_экзопланетBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.Методы_обнаружения_экзопланетBindingNavigator.ResumeLayout(False)
        Me.Методы_обнаружения_экзопланетBindingNavigator.PerformLayout()
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
    Friend WithEvents PlanetsDataSet As PlanetsDataSet
    Friend WithEvents Методы_обнаружения_экзопланетBindingSource As BindingSource
    Friend WithEvents Методы_обнаружения_экзопланетTableAdapter As PlanetsDataSetTableAdapters.Методы_обнаружения_экзопланетTableAdapter
    Friend WithEvents TableAdapterManager As PlanetsDataSetTableAdapters.TableAdapterManager
    Friend WithEvents Методы_обнаружения_экзопланетBindingNavigator As BindingNavigator
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
    Friend WithEvents Методы_обнаружения_экзопланетBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents МетодTextBox As TextBox
    Friend WithEvents RichTextBox1 As RichTextBox
End Class
