Public Class Form2

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim i As Integer
        For i = 1 To 4
            PictureBox1.Image = System.Drawing.Image.FromFile("C:\Users\zg180\source\repos\SKV PO\SKV PO (7)\face0" & i & ".ico")
            MsgBox("Щелкните здесь, чтобы посмотреть следующую рожицу.")
        Next

    End Sub
End Class