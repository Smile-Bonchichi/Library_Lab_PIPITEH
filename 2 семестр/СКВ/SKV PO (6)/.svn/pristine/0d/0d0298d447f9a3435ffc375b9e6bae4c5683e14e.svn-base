Public Class Form1

    Private Sub NewChildForm()
        Dim f As New Form2
        f.MdiParent = Me
        f.Show()
    End Sub
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'Dim f As New Form2
        'f.MdiParent = Me
        'f.Show()

        NewChildForm()
        Timer1.Enabled = True
    End Sub

    Private Sub NewToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles NewToolStripMenuItem.Click
        NewChildForm()
        'Form2.Show()
    End Sub

    Private Sub OpenFileDialog1_FileOk(sender As Object, e As System.ComponentModel.CancelEventArgs) Handles OpenFileDialog1.FileOk
        'ShowDialog()
        'OpenFileDialog1.Filter = "All Files(*.*)|*.*"
        'OpenFileDialog1.ShowDialog()
        'If OpenFileDialog1.FileName > "" Then
        'MessageBox.Show("Выбран файл с именем" + OpenFileDialog1.FileName)
        'End If

    End Sub

    Private Sub PictureBox1_Click(sender As Object, e As EventArgs) Handles PictureBox1.Click
        'ShowDialog()
        PictureBox1.Image = Image.FromFile(OpenFileDialog1.FileName)
    End Sub

    Private Sub ExistingToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ExistingToolStripMenuItem.Click
        OpenFileDialog1.Filter = "Image Files(*.BMP;*JPG;*.Gif)|*.BMP;*JPG;*.Gif"
        OpenFileDialog1.InitialDirectory = "c:\"
        OpenFileDialog1.ShowDialog()
    End Sub

    Private Sub SaveToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles SaveToolStripMenuItem.Click
        SaveFileDialog1.Filter = "All Files(*.*)|*.*"
        SaveFileDialog1.ShowDialog()
        If SaveFileDialog1.FileName > "" Then
            MessageBox.Show("Выбран файл с именем" + SaveFileDialog1.FileName)
        End If

    End Sub

    Private Sub ExitToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem.Click
        Dim result As DialogResult
        result = MessageBox.Show("Вы действительно хотите закрыть приложение?",
        "Закрытие приложения", MessageBoxButtons.YesNo, MessageBoxIcon.Asterisk)
        If result = DialogResult.Yes Then
            Application.Exit()
        End If

        Timer1.Enabled = True

    End Sub

    Private Sub ToolStripButton1_Click(sender As Object, e As EventArgs) Handles ToolStripButton1.Click

    End Sub

    Private Sub OpenToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles OpenToolStripMenuItem.Click

    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        ToolStripStatusLabel2.Text = System.DateTime.Today.ToLongDateString
        ToolStripStatusLabel3.Text = System.DateTime.Now.ToLongTimeString
    End Sub

    Private Sub ToolStripButton2_Click(sender As Object, e As EventArgs) Handles ToolStripButton2.Click
        Dim c As DialogResult
        c = MessageBox.Show("Вы действительно хотите закрыть приложение?", "Закрытие приложения", MessageBoxButtons.YesNo, MessageBoxIcon.Asterisk)
        If c = DialogResult.Yes Then
            Application.Exit()
        End If

    End Sub

    Private Sub CloseFileToolStripMenuItem_Click(sender As Object, e As EventArgs)

    End Sub
End Class
