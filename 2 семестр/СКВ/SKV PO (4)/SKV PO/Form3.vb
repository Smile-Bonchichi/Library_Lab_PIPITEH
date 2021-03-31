Public Class Form3
    Private Sub CheckedListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CheckedListBox1.SelectedIndexChanged
        TextBox1.Text = CheckedListBox1.SelectedItem
    End Sub

    Private Sub CheckedListBox2_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CheckedListBox2.SelectedIndexChanged
        TextBox2.Text = CheckedListBox2.SelectedItem
    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Close()
    End Sub
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim Form3 As Form4
        Form3 = New Form4()
        Form3.Show()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        If CheckedListBox1.SelectedIndex = -1 And CheckedListBox2.SelectedIndex = -1 Then
            Label2.Text = "Выберите группу и предмет!"
        ElseIf CheckedListBox1.SelectedIndex = -1 Or CheckedListBox2.SelectedIndex = -1 Then
            If CheckedListBox1.SelectedIndex Then
                Label2.Text = "Выберите предмет"
            ElseIf CheckedListBox2.SelectedIndex Then
                Label2.Text = "Выберите группу"
            End If
        Else
            Label2.Text = "Выбрали"
        End If
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        CheckedListBox1.SelectedIndex = -1
        CheckedListBox1.SelectedItem = False
        CheckedListBox2.SelectedIndex = -1
        CheckedListBox2.SelectedItem = False
        Label2.Text = ""
    End Sub
End Class