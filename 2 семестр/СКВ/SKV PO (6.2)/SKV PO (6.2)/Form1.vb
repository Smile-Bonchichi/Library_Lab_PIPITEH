Public Class Form1

    Private Function square(ByVal a As Integer) As Integer
        square = a ^ 2
    End Function

    Private Function perimetr(ByVal p As Integer) As Integer
        perimetr = 4 * p
    End Function

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click

        If IsNumeric(TextBox1.Text) Then

            If TextBox1.Text = 0 Then
                TextBox2.Text = "Введите корректное значение"

            ElseIf TextBox1.Text < 0 Then

                TextBox1.Text = Math.Abs(CInt(TextBox1.Text))
                TextBox2.Text = square(CInt(TextBox1.Text))
                Label2.Text = "Площадь = "

            Else
                TextBox2.Text = square(CInt(TextBox1.Text))
                Label2.Text = "Площадь = "
            End If

        Else
            TextBox2.Text = "Error"
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Clear()
        TextBox2.Clear()
        Label2.Text = ""
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click

        If IsNumeric(TextBox1.Text) Then

            If TextBox1.Text = 0 Then
                TextBox2.Text = "Введите корректное значение"

            ElseIf TextBox1.Text < 0 Then

                TextBox1.Text = Math.Abs(CInt(TextBox1.Text))
                TextBox2.Text = perimetr(CInt(TextBox1.Text))
                Label2.Text = "Периметр = "

            Else
                TextBox2.Text = perimetr(CInt(TextBox1.Text))
                Label2.Text = "Периметр = "
            End If

        Else
                TextBox2.Text = "Error"
        End If

    End Sub
End Class
