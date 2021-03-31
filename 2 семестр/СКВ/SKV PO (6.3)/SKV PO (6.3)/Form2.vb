Public Class Form2
    Private Sub Form2_Load(sender As Object, e As EventArgs) Handles MyBase.Load

        Label5.Visible = False
        TextBox5.Visible = False
        TextBox6.Visible = False
        TextBox7.Visible = False
        TextBox8.Visible = False

        Button1.Visible = False
        Button2.Visible = False
        Button3.Visible = False
        Button4.Visible = False

        Label6.Visible = False
        TextBox9.Visible = False
        TextBox10.Visible = False
        TextBox11.Visible = False
        TextBox12.Visible = False

    End Sub

    Private Sub Exchange(ByVal Chislo As Double, ByVal Course As Double, ByRef TotalSom As Double)
        TotalSom = Chislo * Course

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Label6.Visible = True
        TextBox9.Visible = True

        If IsNumeric(TextBox1.Text) And IsNumeric(TextBox5.Text) Then

            If TextBox1.Text <= 0 And TextBox5.Text <= 0 Or TextBox1.Text <= 0 Or TextBox5.Text <= 0 Then
                TextBox9.Text = "Ошибка"
            Else

                Dim dollar, course, totalSom As Double
                dollar = CDbl(TextBox1.Text)
                course = CDbl(TextBox5.Text)
                Exchange(dollar, course, totalSom)
                TextBox9.Text = CStr(totalSom)

            End If

        Else
                TextBox9.Text = "Error"
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click

        Label6.Visible = True
        TextBox10.Visible = True

        If IsNumeric(TextBox2.Text) And IsNumeric(TextBox6.Text) Then

            If TextBox2.Text <= 0 And TextBox6.Text <= 0 Or TextBox2.Text <= 0 Or TextBox6.Text <= 0 Then
                TextBox10.Text = "Ошибка"
            Else

                Dim euro, course, totalSom As Double
                euro = CDbl(TextBox2.Text)
                course = CDbl(TextBox6.Text)
                Exchange(euro, course, totalSom)
                TextBox10.Text = CStr(totalSom)
            End If

        Else
            TextBox10.Text = "Error"
        End If

    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click

        Label6.Visible = True
        TextBox11.Visible = True

        If IsNumeric(TextBox3.Text) And IsNumeric(TextBox7.Text) Then

            If TextBox3.Text <= 0 And TextBox7.Text <= 0 Or TextBox3.Text <= 0 Or TextBox7.Text <= 0 Then
                TextBox11.Text = "Ошибка"
            Else

                Dim Tenge, course, totalSom As Double
                Tenge = CDbl(TextBox3.Text)
                course = CDbl(TextBox7.Text)
                Exchange(Tenge, course, totalSom)
                TextBox11.Text = CStr(totalSom)

            End If

        Else
            TextBox11.Text = "Error"
        End If

    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click

        Label6.Visible = True
        TextBox12.Visible = True

        If IsNumeric(TextBox4.Text) And IsNumeric(TextBox8.Text) Then

            If TextBox4.Text <= 0 And TextBox8.Text <= 0 Or TextBox4.Text <= 0 Or TextBox8.Text <= 0 Then
                TextBox12.Text = "Ошибка"
            Else

                Dim USum, course, totalsom As Double
                USum = CDbl(TextBox4.Text)
                course = CDbl(TextBox8.Text)
                Exchange(USum, course, totalsom)
                TextBox12.Text = CStr(totalsom)

            End If

        Else
            TextBox12.Text = "Error"
        End If

    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        TextBox1.Text = ""
        TextBox2.Text = ""
        TextBox3.Text = ""
        TextBox4.Text = ""
        TextBox5.Text = ""
        TextBox6.Text = ""
        TextBox7.Text = ""
        TextBox8.Text = ""
        TextBox9.Text = ""
        TextBox10.Text = ""
        TextBox11.Text = ""
        TextBox12.Text = ""

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged
        Label5.Visible = True
        TextBox5.Visible = True

        Label2.Visible = False
        Label3.Visible = False
        Label4.Visible = False
        TextBox2.Visible = False
        TextBox3.Visible = False
        TextBox4.Visible = False

    End Sub

    Private Sub TextBox5_TextChanged(sender As Object, e As EventArgs) Handles TextBox5.TextChanged
        Button1.Visible = True

    End Sub

    Private Sub TextBox2_TextChanged(sender As Object, e As EventArgs) Handles TextBox2.TextChanged
        Label5.Visible = True
        TextBox6.Visible = True

        Label1.Visible = False
        Label3.Visible = False
        Label4.Visible = False
        TextBox1.Visible = False
        TextBox3.Visible = False
        TextBox4.Visible = False
    End Sub

    Private Sub TextBox6_TextChanged(sender As Object, e As EventArgs) Handles TextBox6.TextChanged
        Button2.Visible = True

    End Sub

    Private Sub TextBox3_TextChanged(sender As Object, e As EventArgs) Handles TextBox3.TextChanged
        Label5.Visible = True
        TextBox7.Visible = True

        Label1.Visible = False
        Label2.Visible = False
        Label4.Visible = False
        TextBox1.Visible = False
        TextBox2.Visible = False
        TextBox4.Visible = False
    End Sub

    Private Sub TextBox7_TextChanged(sender As Object, e As EventArgs) Handles TextBox7.TextChanged
        Button3.Visible = True

    End Sub

    Private Sub TextBox4_TextChanged(sender As Object, e As EventArgs) Handles TextBox4.TextChanged
        Label5.Visible = True
        TextBox8.Visible = True

        Label1.Visible = False
        Label2.Visible = False
        Label3.Visible = False
        TextBox1.Visible = False
        TextBox2.Visible = False
        TextBox3.Visible = False
    End Sub

    Private Sub TextBox8_TextChanged(sender As Object, e As EventArgs) Handles TextBox8.TextChanged
        Button4.Visible = True

    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        Label1.Visible = True
        Label2.Visible = True
        Label3.Visible = True
        Label4.Visible = True
        Label5.Visible = True
        Label6.Visible = True

        TextBox1.Visible = True
        TextBox2.Visible = True
        TextBox3.Visible = True
        TextBox4.Visible = True
        TextBox5.Visible = True
        TextBox6.Visible = True
        TextBox7.Visible = True
        TextBox8.Visible = True
        TextBox9.Visible = True
        TextBox10.Visible = True
        TextBox11.Visible = True
        TextBox12.Visible = True

        Button1.Visible = True
        Button2.Visible = True
        Button3.Visible = True
        Button4.Visible = True

    End Sub
End Class