Public Class Form2

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        If IsNumeric(TextBox1.Text) Then

            If TextBox1.Text > 100 Or TextBox1.Text < -50 Then
                TextBox2.Text = "В вашем регионе такой температуры не наблюдается!"
            Else

                If TextBox1.Text < 50 And TextBox1.Text > -25 Then
                    TextBox2.Text = "Можешь идти в школу. Желаю успехов!"
                ElseIf TextBox1.Text < -25 Or TextBox1.Text > 50 Then
                    TextBox2.Text = "Занятия в школе отменяются!"
                End If

            End If

        Else
            MsgBox("Error")
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Clear()
        TextBox2.Clear()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Close()
    End Sub
End Class