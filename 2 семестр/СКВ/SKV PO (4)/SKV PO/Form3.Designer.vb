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
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.CheckedListBox1 = New System.Windows.Forms.CheckedListBox()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.CheckedListBox2 = New System.Windows.Forms.CheckedListBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Button2 = New System.Windows.Forms.Button()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.TextBox2 = New System.Windows.Forms.TextBox()
        Me.Button3 = New System.Windows.Forms.Button()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Button4 = New System.Windows.Forms.Button()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.CheckedListBox1)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 92)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(119, 150)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Выберите группу"
        '
        'CheckedListBox1
        '
        Me.CheckedListBox1.FormattingEnabled = True
        Me.CheckedListBox1.Items.AddRange(New Object() {"ПИ-1-19", "ПИ-2-19", "ПИ-3-19", "ПИ-4-19", "ПИ-5-19", "ПИ-6-19", "ПИ-7-19", "ПИ-8-19"})
        Me.CheckedListBox1.Location = New System.Drawing.Point(7, 20)
        Me.CheckedListBox1.Name = "CheckedListBox1"
        Me.CheckedListBox1.Size = New System.Drawing.Size(106, 124)
        Me.CheckedListBox1.TabIndex = 0
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.CheckedListBox2)
        Me.GroupBox2.Location = New System.Drawing.Point(218, 92)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(119, 150)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Выберите предмет"
        '
        'CheckedListBox2
        '
        Me.CheckedListBox2.FormattingEnabled = True
        Me.CheckedListBox2.Items.AddRange(New Object() {"Физ-ра", "СКВ ПО", "ЛиТА", "Англ.яз", "ОФС ПО", "ФОП ПО", "Русс.яз", "Кырг.яз"})
        Me.CheckedListBox2.Location = New System.Drawing.Point(7, 20)
        Me.CheckedListBox2.Name = "CheckedListBox2"
        Me.CheckedListBox2.Size = New System.Drawing.Size(106, 124)
        Me.CheckedListBox2.TabIndex = 0
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(204, Byte))
        Me.Label1.Location = New System.Drawing.Point(132, 33)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(82, 20)
        Me.Label1.TabIndex = 2
        Me.Label1.Text = "Форма 3"
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(49, 269)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(75, 23)
        Me.Button1.TabIndex = 3
        Me.Button1.Text = "Exit"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Button2
        '
        Me.Button2.Location = New System.Drawing.Point(225, 269)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(112, 23)
        Me.Button2.TabIndex = 4
        Me.Button2.Text = "Следующая форма"
        Me.Button2.UseVisualStyleBackColor = True
        '
        'TextBox1
        '
        Me.TextBox1.Location = New System.Drawing.Point(19, 66)
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(100, 20)
        Me.TextBox1.TabIndex = 5
        '
        'TextBox2
        '
        Me.TextBox2.Location = New System.Drawing.Point(225, 66)
        Me.TextBox2.Name = "TextBox2"
        Me.TextBox2.Size = New System.Drawing.Size(100, 20)
        Me.TextBox2.TabIndex = 6
        '
        'Button3
        '
        Me.Button3.Location = New System.Drawing.Point(138, 137)
        Me.Button3.Name = "Button3"
        Me.Button3.Size = New System.Drawing.Size(75, 23)
        Me.Button3.TabIndex = 7
        Me.Button3.Text = "Button3"
        Me.Button3.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(138, 176)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(0, 13)
        Me.Label2.TabIndex = 8
        '
        'Button4
        '
        Me.Button4.Location = New System.Drawing.Point(138, 213)
        Me.Button4.Name = "Button4"
        Me.Button4.Size = New System.Drawing.Size(75, 23)
        Me.Button4.TabIndex = 9
        Me.Button4.Text = "Button4"
        Me.Button4.UseVisualStyleBackColor = True
        '
        'Form3
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(349, 304)
        Me.Controls.Add(Me.Button4)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Button3)
        Me.Controls.Add(Me.TextBox2)
        Me.Controls.Add(Me.TextBox1)
        Me.Controls.Add(Me.Button2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "Form3"
        Me.Text = "Группа и предмет"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox2.ResumeLayout(False)
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents CheckedListBox1 As CheckedListBox
    Friend WithEvents GroupBox2 As GroupBox
    Friend WithEvents CheckedListBox2 As CheckedListBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Button1 As Button
    Friend WithEvents Button2 As Button
    Friend WithEvents TextBox1 As TextBox
    Friend WithEvents TextBox2 As TextBox
    Friend WithEvents Button3 As Button
    Friend WithEvents Label2 As Label
    Friend WithEvents Button4 As Button
End Class
