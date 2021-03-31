Public Class Form3
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Visible = False
        Timer1.Enabled = False
        PictureBox2.Visible = True
        Timer2.Enabled = True
        Timer2.Interval = 400
    End Sub

    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        PictureBox2.Visible = False
        Timer2.Enabled = False
        PictureBox1.Visible = True
        Timer1.Enabled = True
        Timer1.Interval = 400
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Form4.Show()
    End Sub
End Class