Public Class Form1
    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged
        
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click


        If TextBox1.Text.Length >= 4 And TextBox1.Text.Length <= 5 Then

            If IsNumeric(TextBox1.Text) Then

                If TextBox1.Text < 0.0 Or TextBox1.Text >= 24.0 Then
                    TextBox2.Text = "Неправильный формат времени"
                Else

                    Dim t As Double
                    t = TextBox1.Text

                    Dim m As Double
                    Dim c As Integer

                    c = Int(t)
                    m = t - c

                    Dim k As Double
                    k = t + 0.4
                    TextBox1.Text = Format(k, "#,##0.00")

                    If TextBox1.Text > 23.6 Then
                        Dim n As Double
                        n = 0.0 + m - 0.6
                        TextBox1.Text = Format(n, "#,##0.00")
                    End If


                    If TextBox1.Text >= 8.0 And TextBox1.Text < 12.0 Then
                        TextBox2.Text = "Доброе утро!"

                    ElseIf TextBox1.Text >= 12.0 And TextBox1.Text < 17.0 Then
                        TextBox2.Text = "Добрый день!"

                    ElseIf TextBox1.Text >= 17.0 And TextBox1.Text < 23.0 Then
                        TextBox2.Text = "Добрый вечер!"

                    Else
                        TextBox2.Text = "Доброй ночи!"
                    End If

                End If

            Else
                TextBox2.Text = "Error"
            End If

        Else
            TextBox2.Text = "Ошибка! Неподходящий формат времени."
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Clear()
        TextBox2.Clear()
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
