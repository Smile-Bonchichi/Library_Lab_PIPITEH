<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form8
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form8))
        Dim ФотоLabel As System.Windows.Forms.Label
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PlanetsDataSet = New PlanetBD.PlanetsDataSet()
        Me.ФотоBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.ФотоTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.ФотоTableAdapter()
        Me.TableAdapterManager = New PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager()
        Me.ФотоBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
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
        Me.ФотоBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.ФотоPictureBox = New System.Windows.Forms.PictureBox()
        Me.ФотоDataGridView = New System.Windows.Forms.DataGridView()
        Me.DataGridViewTextBoxColumn1 = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.DataGridViewTextBoxColumn2 = New System.Windows.Forms.DataGridViewTextBoxColumn()
        Me.DataGridViewImageColumn1 = New System.Windows.Forms.DataGridViewImageColumn()
        ФотоLabel = New System.Windows.Forms.Label()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ФотоBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ФотоBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.ФотоBindingNavigator.SuspendLayout()
        CType(Me.ФотоPictureBox, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ФотоDataGridView, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Label1.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label1.Location = New System.Drawing.Point(243, 21)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(58, 24)
        Me.Label1.TabIndex = 15
        Me.Label1.Text = "Фото"
        Me.Label1.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'PlanetsDataSet
        '
        Me.PlanetsDataSet.DataSetName = "PlanetsDataSet"
        Me.PlanetsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'ФотоBindingSource
        '
        Me.ФотоBindingSource.DataMember = "Фото"
        Me.ФотоBindingSource.DataSource = Me.PlanetsDataSet
        '
        'ФотоTableAdapter
        '
        Me.ФотоTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.UpdateOrder = PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        Me.TableAdapterManager.Анализ_для_каждой_планетыTableAdapter = Nothing
        Me.TableAdapterManager.Жизнепригодность_ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.Класс_ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.Методы_обнаружения_экзопланетTableAdapter = Nothing
        Me.TableAdapterManager.ПланетыTableAdapter = Nothing
        Me.TableAdapterManager.ФотоTableAdapter = Me.ФотоTableAdapter
        '
        'ФотоBindingNavigator
        '
        Me.ФотоBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.ФотоBindingNavigator.BindingSource = Me.ФотоBindingSource
        Me.ФотоBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.ФотоBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.ФотоBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.ФотоBindingNavigatorSaveItem})
        Me.ФотоBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.ФотоBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.ФотоBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.ФотоBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.ФотоBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.ФотоBindingNavigator.Name = "ФотоBindingNavigator"
        Me.ФотоBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.ФотоBindingNavigator.Size = New System.Drawing.Size(715, 25)
        Me.ФотоBindingNavigator.TabIndex = 16
        Me.ФотоBindingNavigator.Text = "BindingNavigator1"
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
        Me.BindingNavigatorPositionItem.Name = "BindingNavigatorPositionItem"
        Me.BindingNavigatorPositionItem.Size = New System.Drawing.Size(50, 23)
        Me.BindingNavigatorPositionItem.Text = "0"
        Me.BindingNavigatorPositionItem.ToolTipText = "Текущее положение"
        '
        'BindingNavigatorCountItem
        '
        Me.BindingNavigatorCountItem.Name = "BindingNavigatorCountItem"
        Me.BindingNavigatorCountItem.Size = New System.Drawing.Size(43, 15)
        Me.BindingNavigatorCountItem.Text = "для {0}"
        Me.BindingNavigatorCountItem.ToolTipText = "Общее число элементов"
        '
        'BindingNavigatorSeparator1
        '
        Me.BindingNavigatorSeparator1.Name = "BindingNavigatorSeparator"
        Me.BindingNavigatorSeparator1.Size = New System.Drawing.Size(6, 6)
        '
        'BindingNavigatorMoveNextItem
        '
        Me.BindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveNextItem.Image = CType(resources.GetObject("BindingNavigatorMoveNextItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveNextItem.Name = "BindingNavigatorMoveNextItem"
        Me.BindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveNextItem.Size = New System.Drawing.Size(23, 20)
        Me.BindingNavigatorMoveNextItem.Text = "Переместить вперед"
        '
        'BindingNavigatorMoveLastItem
        '
        Me.BindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveLastItem.Image = CType(resources.GetObject("BindingNavigatorMoveLastItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveLastItem.Name = "BindingNavigatorMoveLastItem"
        Me.BindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveLastItem.Size = New System.Drawing.Size(23, 20)
        Me.BindingNavigatorMoveLastItem.Text = "Переместить в конец"
        '
        'BindingNavigatorSeparator2
        '
        Me.BindingNavigatorSeparator2.Name = "BindingNavigatorSeparator"
        Me.BindingNavigatorSeparator2.Size = New System.Drawing.Size(6, 6)
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
        Me.BindingNavigatorDeleteItem.Size = New System.Drawing.Size(23, 20)
        Me.BindingNavigatorDeleteItem.Text = "Удалить"
        '
        'ФотоBindingNavigatorSaveItem
        '
        Me.ФотоBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ФотоBindingNavigatorSaveItem.Image = CType(resources.GetObject("ФотоBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.ФотоBindingNavigatorSaveItem.Name = "ФотоBindingNavigatorSaveItem"
        Me.ФотоBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 23)
        Me.ФотоBindingNavigatorSaveItem.Text = "Сохранить данные"
        '
        'ФотоLabel
        '
        ФотоLabel.AutoSize = True
        ФотоLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        ФотоLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        ФотоLabel.Location = New System.Drawing.Point(334, 79)
        ФотоLabel.Name = "ФотоLabel"
        ФотоLabel.Size = New System.Drawing.Size(63, 24)
        ФотоLabel.TabIndex = 16
        ФотоLabel.Text = "Фото:"
        '
        'ФотоPictureBox
        '
        Me.ФотоPictureBox.DataBindings.Add(New System.Windows.Forms.Binding("Image", Me.ФотоBindingSource, "Фото", True))
        Me.ФотоPictureBox.Location = New System.Drawing.Point(403, 79)
        Me.ФотоPictureBox.Name = "ФотоPictureBox"
        Me.ФотоPictureBox.Size = New System.Drawing.Size(300, 289)
        Me.ФотоPictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom
        Me.ФотоPictureBox.TabIndex = 17
        Me.ФотоPictureBox.TabStop = False
        '
        'ФотоDataGridView
        '
        Me.ФотоDataGridView.AutoGenerateColumns = False
        Me.ФотоDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize
        Me.ФотоDataGridView.Columns.AddRange(New System.Windows.Forms.DataGridViewColumn() {Me.DataGridViewTextBoxColumn1, Me.DataGridViewTextBoxColumn2, Me.DataGridViewImageColumn1})
        Me.ФотоDataGridView.DataSource = Me.ФотоBindingSource
        Me.ФотоDataGridView.Location = New System.Drawing.Point(12, 79)
        Me.ФотоDataGridView.Name = "ФотоDataGridView"
        Me.ФотоDataGridView.Size = New System.Drawing.Size(316, 289)
        Me.ФотоDataGridView.TabIndex = 17
        '
        'DataGridViewTextBoxColumn1
        '
        Me.DataGridViewTextBoxColumn1.DataPropertyName = "ID"
        Me.DataGridViewTextBoxColumn1.HeaderText = "ID"
        Me.DataGridViewTextBoxColumn1.Name = "DataGridViewTextBoxColumn1"
        Me.DataGridViewTextBoxColumn1.ReadOnly = True
        '
        'DataGridViewTextBoxColumn2
        '
        Me.DataGridViewTextBoxColumn2.DataPropertyName = "Название"
        Me.DataGridViewTextBoxColumn2.HeaderText = "Название"
        Me.DataGridViewTextBoxColumn2.Name = "DataGridViewTextBoxColumn2"
        '
        'DataGridViewImageColumn1
        '
        Me.DataGridViewImageColumn1.DataPropertyName = "Фото"
        Me.DataGridViewImageColumn1.HeaderText = "Фото"
        Me.DataGridViewImageColumn1.Name = "DataGridViewImageColumn1"
        '
        'Form8
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.FromArgb(CType(CType(9, Byte), Integer), CType(CType(7, Byte), Integer), CType(CType(56, Byte), Integer))
        Me.ClientSize = New System.Drawing.Size(715, 403)
        Me.Controls.Add(Me.ФотоDataGridView)
        Me.Controls.Add(ФотоLabel)
        Me.Controls.Add(Me.ФотоPictureBox)
        Me.Controls.Add(Me.ФотоBindingNavigator)
        Me.Controls.Add(Me.Label1)
        Me.Name = "Form8"
        Me.Text = "Фото "
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ФотоBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ФотоBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ФотоBindingNavigator.ResumeLayout(False)
        Me.ФотоBindingNavigator.PerformLayout()
        CType(Me.ФотоPictureBox, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ФотоDataGridView, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents PlanetsDataSet As PlanetsDataSet
    Friend WithEvents ФотоBindingSource As BindingSource
    Friend WithEvents ФотоTableAdapter As PlanetsDataSetTableAdapters.ФотоTableAdapter
    Friend WithEvents TableAdapterManager As PlanetsDataSetTableAdapters.TableAdapterManager
    Friend WithEvents ФотоBindingNavigator As BindingNavigator
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
    Friend WithEvents ФотоBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents ФотоPictureBox As PictureBox
    Friend WithEvents ФотоDataGridView As DataGridView
    Friend WithEvents DataGridViewTextBoxColumn1 As DataGridViewTextBoxColumn
    Friend WithEvents DataGridViewTextBoxColumn2 As DataGridViewTextBoxColumn
    Friend WithEvents DataGridViewImageColumn1 As DataGridViewImageColumn
End Class
