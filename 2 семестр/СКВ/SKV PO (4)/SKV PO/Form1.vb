Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        'Label1.Text = ""

        If Label1.Text = "" Then
            Label1.Text = "Го купаться в реке?"
        ElseIf (Label1.Text = "Го купаться в реке?") Then
            Label1.Text = ""
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If Label1.Text = "Го купаться в реке?" Then
            Label1.Text = "Поплыли к горе!"
            Label2.Text = "Го купаться в реке?"
        ElseIf Label1.Text = "Поплыли к горе!" Then
            Label1.Text = "Го купаться в реке?"
            Label2.Text = "Поплыли к горе!"

        End If
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Close()
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Dim Form1 As Form2
        Form1 = New Form2()
        Form1.Show()
    End Sub
End Class