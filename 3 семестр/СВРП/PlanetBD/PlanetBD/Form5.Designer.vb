<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form5
    Inherits System.Windows.Forms.Form

    'Форма переопределяет dispose для очистки списка компонентов.
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Dim НазваниеLabel As System.Windows.Forms.Label
        Dim Индекс_подобия_ЗемлеLabel As System.Windows.Forms.Label
        Dim Класс_планетыLabel As System.Windows.Forms.Label
        Dim Жизнепригодность_планетыLabel As System.Windows.Forms.Label
        Dim Расстояние_св_летLabel As System.Windows.Forms.Label
        Dim Метод_открытияLabel As System.Windows.Forms.Label
        Dim Год_открытияLabel As System.Windows.Forms.Label
        Dim ПотвержденаLabel As System.Windows.Forms.Label
        Dim Планета_IDLabel As System.Windows.Forms.Label
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form5))
        Me.Panel1 = New System.Windows.Forms.Panel()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PlanetsDataSet = New PlanetBD.PlanetsDataSet()
        Me.ПланетыBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.ПланетыTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.ПланетыTableAdapter()
        Me.TableAdapterManager = New PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager()
        Me.Жизнепригодность_ПланетыTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Жизнепригодность_ПланетыTableAdapter()
        Me.Класс_ПланетыTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Класс_ПланетыTableAdapter()
        Me.Методы_обнаружения_экзопланетTableAdapter = New PlanetBD.PlanetsDataSetTableAdapters.Методы_обнаружения_экзопланетTableAdapter()
        Me.ПланетыBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
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
        Me.ПланетыBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.НазваниеTextBox = New System.Windows.Forms.TextBox()
        Me.Индекс_подобия_ЗемлеTextBox = New System.Windows.Forms.TextBox()
        Me.ComboBox1 = New System.Windows.Forms.ComboBox()
        Me.КлассПланетыBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.ЖизнепригодностьПланетыBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.ComboBox2 = New System.Windows.Forms.ComboBox()
        Me.MaskedTextBox1 = New System.Windows.Forms.MaskedTextBox()
        Me.ComboBox3 = New System.Windows.Forms.ComboBox()
        Me.МетодыОбнаруженияЭкзопланетBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.MaskedTextBox2 = New System.Windows.Forms.MaskedTextBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Button2 = New System.Windows.Forms.Button()
        Me.Button3 = New System.Windows.Forms.Button()
        Me.Button4 = New System.Windows.Forms.Button()
        Me.Button5 = New System.Windows.Forms.Button()
        Me.Button6 = New System.Windows.Forms.Button()
        Me.Button7 = New System.Windows.Forms.Button()
        Me.Button8 = New System.Windows.Forms.Button()
        Me.Button9 = New System.Windows.Forms.Button()
        Me.ПотвержденаCheckBox = New System.Windows.Forms.CheckBox()
        Me.Планета_IDTextBox = New System.Windows.Forms.TextBox()
        Me.Button10 = New System.Windows.Forms.Button()
        НазваниеLabel = New System.Windows.Forms.Label()
        Индекс_подобия_ЗемлеLabel = New System.Windows.Forms.Label()
        Класс_планетыLabel = New System.Windows.Forms.Label()
        Жизнепригодность_планетыLabel = New System.Windows.Forms.Label()
        Расстояние_св_летLabel = New System.Windows.Forms.Label()
        Метод_открытияLabel = New System.Windows.Forms.Label()
        Год_открытияLabel = New System.Windows.Forms.Label()
        ПотвержденаLabel = New System.Windows.Forms.Label()
        Планета_IDLabel = New System.Windows.Forms.Label()
        Me.Panel1.SuspendLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ПланетыBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ПланетыBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.ПланетыBindingNavigator.SuspendLayout()
        CType(Me.КлассПланетыBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.ЖизнепригодностьПланетыBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.МетодыОбнаруженияЭкзопланетBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'НазваниеLabel
        '
        НазваниеLabel.AutoSize = True
        НазваниеLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        НазваниеLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        НазваниеLabel.Location = New System.Drawing.Point(27, 287)
        НазваниеLabel.Name = "НазваниеLabel"
        НазваниеLabel.Size = New System.Drawing.Size(102, 24)
        НазваниеLabel.TabIndex = 17
        НазваниеLabel.Text = "Название:"
        '
        'Индекс_подобия_ЗемлеLabel
        '
        Индекс_подобия_ЗемлеLabel.AutoSize = True
        Индекс_подобия_ЗемлеLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Индекс_подобия_ЗемлеLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Индекс_подобия_ЗемлеLabel.Location = New System.Drawing.Point(26, 330)
        Индекс_подобия_ЗемлеLabel.Name = "Индекс_подобия_ЗемлеLabel"
        Индекс_подобия_ЗемлеLabel.Size = New System.Drawing.Size(226, 24)
        Индекс_подобия_ЗемлеLabel.TabIndex = 18
        Индекс_подобия_ЗемлеLabel.Text = "Индекс подобия Земле:"
        '
        'Класс_планетыLabel
        '
        Класс_планетыLabel.AutoSize = True
        Класс_планетыLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Класс_планетыLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Класс_планетыLabel.Location = New System.Drawing.Point(27, 375)
        Класс_планетыLabel.Name = "Класс_планетыLabel"
        Класс_планетыLabel.Size = New System.Drawing.Size(148, 24)
        Класс_планетыLabel.TabIndex = 19
        Класс_планетыLabel.Text = "Класс планеты:"
        '
        'Жизнепригодность_планетыLabel
        '
        Жизнепригодность_планетыLabel.AutoSize = True
        Жизнепригодность_планетыLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Жизнепригодность_планетыLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Жизнепригодность_планетыLabel.Location = New System.Drawing.Point(26, 421)
        Жизнепригодность_планетыLabel.Name = "Жизнепригодность_планетыLabel"
        Жизнепригодность_планетыLabel.Size = New System.Drawing.Size(192, 24)
        Жизнепригодность_планетыLabel.TabIndex = 20
        Жизнепригодность_планетыLabel.Text = "Жизнепригодность:"
        '
        'Расстояние_св_летLabel
        '
        Расстояние_св_летLabel.AutoSize = True
        Расстояние_св_летLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Расстояние_св_летLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Расстояние_св_летLabel.Location = New System.Drawing.Point(27, 468)
        Расстояние_св_летLabel.Name = "Расстояние_св_летLabel"
        Расстояние_св_летLabel.Size = New System.Drawing.Size(183, 24)
        Расстояние_св_летLabel.TabIndex = 21
        Расстояние_св_летLabel.Text = "Расстояние св лет:"
        '
        'Метод_открытияLabel
        '
        Метод_открытияLabel.AutoSize = True
        Метод_открытияLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Метод_открытияLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Метод_открытияLabel.Location = New System.Drawing.Point(27, 519)
        Метод_открытияLabel.Name = "Метод_открытияLabel"
        Метод_открытияLabel.Size = New System.Drawing.Size(165, 24)
        Метод_открытияLabel.TabIndex = 22
        Метод_открытияLabel.Text = "Метод открытия:"
        '
        'Год_открытияLabel
        '
        Год_открытияLabel.AutoSize = True
        Год_открытияLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Год_открытияLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Год_открытияLabel.Location = New System.Drawing.Point(27, 564)
        Год_открытияLabel.Name = "Год_открытияLabel"
        Год_открытияLabel.Size = New System.Drawing.Size(139, 24)
        Год_открытияLabel.TabIndex = 23
        Год_открытияLabel.Text = "Год открытия:"
        '
        'ПотвержденаLabel
        '
        ПотвержденаLabel.AutoSize = True
        ПотвержденаLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        ПотвержденаLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        ПотвержденаLabel.Location = New System.Drawing.Point(27, 603)
        ПотвержденаLabel.Name = "ПотвержденаLabel"
        ПотвержденаLabel.Size = New System.Drawing.Size(140, 24)
        ПотвержденаLabel.TabIndex = 39
        ПотвержденаLabel.Text = "Потверждена:"
        '
        'Планета_IDLabel
        '
        Планета_IDLabel.AutoSize = True
        Планета_IDLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Планета_IDLabel.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Планета_IDLabel.Location = New System.Drawing.Point(30, 249)
        Планета_IDLabel.Name = "Планета_IDLabel"
        Планета_IDLabel.Size = New System.Drawing.Size(112, 24)
        Планета_IDLabel.TabIndex = 40
        Планета_IDLabel.Text = "Планета ID:"
        '
        'Panel1
        '
        Me.Panel1.BackColor = System.Drawing.Color.FromArgb(CType(CType(22, Byte), Integer), CType(CType(54, Byte), Integer), CType(CType(77, Byte), Integer))
        Me.Panel1.Controls.Add(Me.Label6)
        Me.Panel1.Controls.Add(Me.Label5)
        Me.Panel1.Controls.Add(Me.Label4)
        Me.Panel1.Controls.Add(Me.Label3)
        Me.Panel1.Controls.Add(Me.Label2)
        Me.Panel1.Location = New System.Drawing.Point(31, 81)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(392, 155)
        Me.Panel1.TabIndex = 16
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label6.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label6.Location = New System.Drawing.Point(37, 112)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(321, 24)
        Me.Label6.TabIndex = 6
        Me.Label6.Text = "обнаружены в конце 1980-х годов."
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label5.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label5.Location = New System.Drawing.Point(69, 88)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(251, 24)
        Me.Label5.TabIndex = 5
        Me.Label5.Text = "Первые экзопланеты были"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label4.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label4.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label4.Location = New System.Drawing.Point(16, 64)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(362, 24)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "находящаяся вне Солнечной системы. "
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label3.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label3.Location = New System.Drawing.Point(16, 40)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(364, 24)
        Me.Label3.TabIndex = 3
        Me.Label3.Text = " или внесолнечная планета, — планета,"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(247, Byte), Integer), CType(CType(106, Byte), Integer))
        Me.Label2.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label2.Location = New System.Drawing.Point(17, 16)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(363, 24)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Экзоплане́та (exō — «вне», «снаружи»),"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Label1.ImageAlign = System.Drawing.ContentAlignment.TopCenter
        Me.Label1.Location = New System.Drawing.Point(117, 44)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(223, 24)
        Me.Label1.TabIndex = 15
        Me.Label1.Text = "Таблица ""Экзопланеты"""
        Me.Label1.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'PlanetsDataSet
        '
        Me.PlanetsDataSet.DataSetName = "PlanetsDataSet"
        Me.PlanetsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'ПланетыBindingSource
        '
        Me.ПланетыBindingSource.DataMember = "Планеты"
        Me.ПланетыBindingSource.DataSource = Me.PlanetsDataSet
        '
        'ПланетыTableAdapter
        '
        Me.ПланетыTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.UpdateOrder = PlanetBD.PlanetsDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        Me.TableAdapterManager.Анализ_для_каждой_планетыTableAdapter = Nothing
        Me.TableAdapterManager.Жизнепригодность_ПланетыTableAdapter = Me.Жизнепригодность_ПланетыTableAdapter
        Me.TableAdapterManager.Класс_ПланетыTableAdapter = Me.Класс_ПланетыTableAdapter
        Me.TableAdapterManager.Методы_обнаружения_экзопланетTableAdapter = Me.Методы_обнаружения_экзопланетTableAdapter
        Me.TableAdapterManager.ПланетыTableAdapter = Me.ПланетыTableAdapter
        Me.TableAdapterManager.ФотоTableAdapter = Nothing
        '
        'Жизнепригодность_ПланетыTableAdapter
        '
        Me.Жизнепригодность_ПланетыTableAdapter.ClearBeforeFill = True
        '
        'Класс_ПланетыTableAdapter
        '
        Me.Класс_ПланетыTableAdapter.ClearBeforeFill = True
        '
        'Методы_обнаружения_экзопланетTableAdapter
        '
        Me.Методы_обнаружения_экзопланетTableAdapter.ClearBeforeFill = True
        '
        'ПланетыBindingNavigator
        '
        Me.ПланетыBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.ПланетыBindingNavigator.BindingSource = Me.ПланетыBindingSource
        Me.ПланетыBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.ПланетыBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.ПланетыBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.ПланетыBindingNavigatorSaveItem})
        Me.ПланетыBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.ПланетыBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.ПланетыBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.ПланетыBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.ПланетыBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.ПланетыBindingNavigator.Name = "ПланетыBindingNavigator"
        Me.ПланетыBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.ПланетыBindingNavigator.Size = New System.Drawing.Size(471, 25)
        Me.ПланетыBindingNavigator.TabIndex = 17
        Me.ПланетыBindingNavigator.Text = "BindingNavigator1"
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
        'ПланетыBindingNavigatorSaveItem
        '
        Me.ПланетыBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.ПланетыBindingNavigatorSaveItem.Image = CType(resources.GetObject("ПланетыBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.ПланетыBindingNavigatorSaveItem.Name = "ПланетыBindingNavigatorSaveItem"
        Me.ПланетыBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 22)
        Me.ПланетыBindingNavigatorSaveItem.Text = "Сохранить данные"
        '
        'НазваниеTextBox
        '
        Me.НазваниеTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.ПланетыBindingSource, "Название", True))
        Me.НазваниеTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.НазваниеTextBox.Location = New System.Drawing.Point(174, 282)
        Me.НазваниеTextBox.Name = "НазваниеTextBox"
        Me.НазваниеTextBox.Size = New System.Drawing.Size(248, 29)
        Me.НазваниеTextBox.TabIndex = 18
        '
        'Индекс_подобия_ЗемлеTextBox
        '
        Me.Индекс_подобия_ЗемлеTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.ПланетыBindingSource, "Индекс_подобия_Земле", True))
        Me.Индекс_подобия_ЗемлеTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Индекс_подобия_ЗемлеTextBox.Location = New System.Drawing.Point(258, 327)
        Me.Индекс_подобия_ЗемлеTextBox.Name = "Индекс_подобия_ЗемлеTextBox"
        Me.Индекс_подобия_ЗемлеTextBox.Size = New System.Drawing.Size(164, 29)
        Me.Индекс_подобия_ЗемлеTextBox.TabIndex = 19
        '
        'ComboBox1
        '
        Me.ComboBox1.DataBindings.Add(New System.Windows.Forms.Binding("SelectedValue", Me.ПланетыBindingSource, "Класс_планеты", True))
        Me.ComboBox1.DataSource = Me.КлассПланетыBindingSource
        Me.ComboBox1.DisplayMember = "Класс_Планеты"
        Me.ComboBox1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.ComboBox1.FormattingEnabled = True
        Me.ComboBox1.Location = New System.Drawing.Point(174, 367)
        Me.ComboBox1.Name = "ComboBox1"
        Me.ComboBox1.Size = New System.Drawing.Size(248, 32)
        Me.ComboBox1.TabIndex = 26
        Me.ComboBox1.ValueMember = "Класс_Планеты_ID"
        '
        'КлассПланетыBindingSource
        '
        Me.КлассПланетыBindingSource.DataMember = "Класс_Планеты"
        Me.КлассПланетыBindingSource.DataSource = Me.PlanetsDataSet
        '
        'ЖизнепригодностьПланетыBindingSource
        '
        Me.ЖизнепригодностьПланетыBindingSource.DataMember = "Жизнепригодность Планеты"
        Me.ЖизнепригодностьПланетыBindingSource.DataSource = Me.PlanetsDataSet
        '
        'ComboBox2
        '
        Me.ComboBox2.DataBindings.Add(New System.Windows.Forms.Binding("SelectedValue", Me.ПланетыBindingSource, "Жизнепригодность_планеты", True))
        Me.ComboBox2.DataSource = Me.ЖизнепригодностьПланетыBindingSource
        Me.ComboBox2.DisplayMember = "hClass"
        Me.ComboBox2.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.ComboBox2.FormattingEnabled = True
        Me.ComboBox2.Location = New System.Drawing.Point(224, 413)
        Me.ComboBox2.Name = "ComboBox2"
        Me.ComboBox2.Size = New System.Drawing.Size(198, 32)
        Me.ComboBox2.TabIndex = 27
        Me.ComboBox2.ValueMember = "hClass_ID"
        '
        'MaskedTextBox1
        '
        Me.MaskedTextBox1.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.ПланетыBindingSource, "Расстояние_св_лет", True))
        Me.MaskedTextBox1.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.MaskedTextBox1.Location = New System.Drawing.Point(224, 463)
        Me.MaskedTextBox1.Mask = "0000"
        Me.MaskedTextBox1.Name = "MaskedTextBox1"
        Me.MaskedTextBox1.Size = New System.Drawing.Size(198, 29)
        Me.MaskedTextBox1.TabIndex = 28
        '
        'ComboBox3
        '
        Me.ComboBox3.DataSource = Me.МетодыОбнаруженияЭкзопланетBindingSource
        Me.ComboBox3.DisplayMember = "Метод"
        Me.ComboBox3.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.ComboBox3.FormattingEnabled = True
        Me.ComboBox3.Location = New System.Drawing.Point(198, 511)
        Me.ComboBox3.Name = "ComboBox3"
        Me.ComboBox3.Size = New System.Drawing.Size(224, 32)
        Me.ComboBox3.TabIndex = 29
        Me.ComboBox3.ValueMember = "Метод_ID"
        '
        'МетодыОбнаруженияЭкзопланетBindingSource
        '
        Me.МетодыОбнаруженияЭкзопланетBindingSource.DataMember = "Методы обнаружения экзопланет"
        Me.МетодыОбнаруженияЭкзопланетBindingSource.DataSource = Me.PlanetsDataSet
        '
        'MaskedTextBox2
        '
        Me.MaskedTextBox2.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.ПланетыBindingSource, "Год_открытия", True))
        Me.MaskedTextBox2.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.MaskedTextBox2.Location = New System.Drawing.Point(198, 559)
        Me.MaskedTextBox2.Mask = "0000"
        Me.MaskedTextBox2.Name = "MaskedTextBox2"
        Me.MaskedTextBox2.Size = New System.Drawing.Size(224, 29)
        Me.MaskedTextBox2.TabIndex = 30
        '
        'Button1
        '
        Me.Button1.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button1.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button1.Location = New System.Drawing.Point(30, 639)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(128, 29)
        Me.Button1.TabIndex = 31
        Me.Button1.Text = "Первая"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Button2
        '
        Me.Button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button2.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button2.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button2.Location = New System.Drawing.Point(164, 639)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(121, 29)
        Me.Button2.TabIndex = 32
        Me.Button2.Text = "Предыдущая"
        Me.Button2.UseVisualStyleBackColor = True
        '
        'Button3
        '
        Me.Button3.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button3.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button3.Location = New System.Drawing.Point(291, 639)
        Me.Button3.Name = "Button3"
        Me.Button3.Size = New System.Drawing.Size(123, 29)
        Me.Button3.TabIndex = 33
        Me.Button3.Text = "Добавить"
        Me.Button3.UseVisualStyleBackColor = True
        '
        'Button4
        '
        Me.Button4.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button4.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button4.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button4.Location = New System.Drawing.Point(291, 686)
        Me.Button4.Name = "Button4"
        Me.Button4.Size = New System.Drawing.Size(123, 29)
        Me.Button4.TabIndex = 36
        Me.Button4.Text = "Удалить"
        Me.Button4.UseVisualStyleBackColor = True
        '
        'Button5
        '
        Me.Button5.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button5.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button5.Location = New System.Drawing.Point(164, 686)
        Me.Button5.Name = "Button5"
        Me.Button5.Size = New System.Drawing.Size(121, 29)
        Me.Button5.TabIndex = 35
        Me.Button5.Text = "Следующая"
        Me.Button5.UseVisualStyleBackColor = True
        '
        'Button6
        '
        Me.Button6.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button6.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button6.Location = New System.Drawing.Point(30, 686)
        Me.Button6.Name = "Button6"
        Me.Button6.Size = New System.Drawing.Size(128, 29)
        Me.Button6.TabIndex = 34
        Me.Button6.Text = "Последняя"
        Me.Button6.UseVisualStyleBackColor = True
        '
        'Button7
        '
        Me.Button7.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button7.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button7.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button7.Location = New System.Drawing.Point(291, 732)
        Me.Button7.Name = "Button7"
        Me.Button7.Size = New System.Drawing.Size(123, 29)
        Me.Button7.TabIndex = 39
        Me.Button7.Text = "Отчет"
        Me.Button7.UseVisualStyleBackColor = True
        '
        'Button8
        '
        Me.Button8.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button8.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button8.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button8.Location = New System.Drawing.Point(164, 732)
        Me.Button8.Name = "Button8"
        Me.Button8.Size = New System.Drawing.Size(121, 29)
        Me.Button8.TabIndex = 38
        Me.Button8.Text = "Сохранить"
        Me.Button8.UseVisualStyleBackColor = True
        '
        'Button9
        '
        Me.Button9.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button9.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button9.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button9.Location = New System.Drawing.Point(30, 732)
        Me.Button9.Name = "Button9"
        Me.Button9.Size = New System.Drawing.Size(128, 29)
        Me.Button9.TabIndex = 37
        Me.Button9.Text = "Таблица"
        Me.Button9.UseVisualStyleBackColor = True
        '
        'ПотвержденаCheckBox
        '
        Me.ПотвержденаCheckBox.DataBindings.Add(New System.Windows.Forms.Binding("CheckState", Me.ПланетыBindingSource, "Потверждена", True))
        Me.ПотвержденаCheckBox.Location = New System.Drawing.Point(291, 594)
        Me.ПотвержденаCheckBox.Name = "ПотвержденаCheckBox"
        Me.ПотвержденаCheckBox.Size = New System.Drawing.Size(104, 24)
        Me.ПотвержденаCheckBox.TabIndex = 40
        Me.ПотвержденаCheckBox.UseVisualStyleBackColor = True
        '
        'Планета_IDTextBox
        '
        Me.Планета_IDTextBox.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.ПланетыBindingSource, "Планета_ID", True))
        Me.Планета_IDTextBox.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Планета_IDTextBox.Location = New System.Drawing.Point(322, 246)
        Me.Планета_IDTextBox.Name = "Планета_IDTextBox"
        Me.Планета_IDTextBox.Size = New System.Drawing.Size(100, 29)
        Me.Планета_IDTextBox.TabIndex = 41
        '
        'Button10
        '
        Me.Button10.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button10.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Button10.ForeColor = System.Drawing.Color.FromArgb(CType(CType(241, Byte), Integer), CType(CType(246, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Button10.Location = New System.Drawing.Point(420, 686)
        Me.Button10.Name = "Button10"
        Me.Button10.Size = New System.Drawing.Size(44, 29)
        Me.Button10.TabIndex = 42
        Me.Button10.Text = "А"
        Me.Button10.UseVisualStyleBackColor = True
        '
        'Form5
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.AutoScroll = True
        Me.BackColor = System.Drawing.Color.FromArgb(CType(CType(9, Byte), Integer), CType(CType(7, Byte), Integer), CType(CType(56, Byte), Integer))
        Me.ClientSize = New System.Drawing.Size(488, 749)
        Me.Controls.Add(Me.Button10)
        Me.Controls.Add(Планета_IDLabel)
        Me.Controls.Add(Me.Планета_IDTextBox)
        Me.Controls.Add(ПотвержденаLabel)
        Me.Controls.Add(Me.ПотвержденаCheckBox)
        Me.Controls.Add(Me.Button7)
        Me.Controls.Add(Me.Button8)
        Me.Controls.Add(Me.Button9)
        Me.Controls.Add(Me.Button4)
        Me.Controls.Add(Me.Button5)
        Me.Controls.Add(Me.Button6)
        Me.Controls.Add(Me.Button3)
        Me.Controls.Add(Me.Button2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.MaskedTextBox2)
        Me.Controls.Add(Me.ComboBox3)
        Me.Controls.Add(Me.MaskedTextBox1)
        Me.Controls.Add(Me.ComboBox2)
        Me.Controls.Add(Me.ComboBox1)
        Me.Controls.Add(Год_открытияLabel)
        Me.Controls.Add(Метод_открытияLabel)
        Me.Controls.Add(Расстояние_св_летLabel)
        Me.Controls.Add(Жизнепригодность_планетыLabel)
        Me.Controls.Add(Класс_планетыLabel)
        Me.Controls.Add(Индекс_подобия_ЗемлеLabel)
        Me.Controls.Add(Me.Индекс_подобия_ЗемлеTextBox)
        Me.Controls.Add(НазваниеLabel)
        Me.Controls.Add(Me.НазваниеTextBox)
        Me.Controls.Add(Me.ПланетыBindingNavigator)
        Me.Controls.Add(Me.Panel1)
        Me.Controls.Add(Me.Label1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Name = "Form5"
        Me.Text = "Таблица ""Экзопланеты"""
        Me.Panel1.ResumeLayout(False)
        Me.Panel1.PerformLayout()
        CType(Me.PlanetsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ПланетыBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ПланетыBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ПланетыBindingNavigator.ResumeLayout(False)
        Me.ПланетыBindingNavigator.PerformLayout()
        CType(Me.КлассПланетыBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.ЖизнепригодностьПланетыBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.МетодыОбнаруженияЭкзопланетBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Panel1 As Panel
    Friend WithEvents Label6 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label1 As Label
    Friend WithEvents PlanetsDataSet As PlanetsDataSet
    Friend WithEvents ПланетыBindingSource As BindingSource
    Friend WithEvents ПланетыTableAdapter As PlanetsDataSetTableAdapters.ПланетыTableAdapter
    Friend WithEvents TableAdapterManager As PlanetsDataSetTableAdapters.TableAdapterManager
    Friend WithEvents ПланетыBindingNavigator As BindingNavigator
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
    Friend WithEvents ПланетыBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents НазваниеTextBox As TextBox
    Friend WithEvents Индекс_подобия_ЗемлеTextBox As TextBox
    Friend WithEvents Класс_ПланетыTableAdapter As PlanetsDataSetTableAdapters.Класс_ПланетыTableAdapter
    Friend WithEvents ComboBox1 As ComboBox
    Friend WithEvents КлассПланетыBindingSource As BindingSource
    Friend WithEvents Жизнепригодность_ПланетыTableAdapter As PlanetsDataSetTableAdapters.Жизнепригодность_ПланетыTableAdapter
    Friend WithEvents ЖизнепригодностьПланетыBindingSource As BindingSource
    Friend WithEvents ComboBox2 As ComboBox
    Friend WithEvents Методы_обнаружения_экзопланетTableAdapter As PlanetsDataSetTableAdapters.Методы_обнаружения_экзопланетTableAdapter
    Friend WithEvents MaskedTextBox1 As MaskedTextBox
    Friend WithEvents ComboBox3 As ComboBox
    Friend WithEvents МетодыОбнаруженияЭкзопланетBindingSource As BindingSource
    Friend WithEvents MaskedTextBox2 As MaskedTextBox
    Friend WithEvents Button1 As Button
    Friend WithEvents Button2 As Button
    Friend WithEvents Button3 As Button
    Friend WithEvents Button4 As Button
    Friend WithEvents Button5 As Button
    Friend WithEvents Button6 As Button
    Friend WithEvents Button7 As Button
    Friend WithEvents Button8 As Button
    Friend WithEvents Button9 As Button
    Friend WithEvents ПотвержденаCheckBox As CheckBox
    Friend WithEvents Планета_IDTextBox As TextBox
    Friend WithEvents Button10 As Button
End Class
