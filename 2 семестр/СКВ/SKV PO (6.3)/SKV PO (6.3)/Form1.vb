Public Class Form1

	Private Sub DollarsAndCents(ByVal totalCents As Integer, ByRef Dollars As Integer, ByRef CentsLeft As Integer)
		Dollars = totalCents \ 100
		CentsLeft = totalCents Mod 100
	End Sub

	Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

		If IsNumeric(TextBox1.Text) Then

			If TextBox1.Text < 0 Then
				TextBox2.Text = "Введите корректное значение"
				TextBox3.Text = "Введите корректное значение"

			ElseIf TextBox1.Text = 0 Then
				TextBox2.Text = "Введите Cents"
				TextBox3.Text = "Введите Cents"

			ElseIf TextBox1.Text > 0 And TextBox1.Text < 1 Then
				MsgBox("Введено маленькое значение")
				MsgBox("Введено маленькое значение")

			Else

				Dim originalCents, wholeDollars, centsLeft As Integer
				originalCents = CInt(TextBox1.Text)
				DollarsAndCents(originalCents, wholeDollars, centsLeft)
				TextBox2.Text = CStr(wholeDollars)
				TextBox3.Text = CStr(centsLeft)
			End If

		Else
			TextBox2.Text = "Error"
			TextBox3.Text = "Error"
		End If

	End Sub

	Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
		TextBox1.Text = ""
		TextBox2.Text = ""
		TextBox3.Text = ""

	End Sub

	Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
		Form2.Show()
	End Sub
End Class
