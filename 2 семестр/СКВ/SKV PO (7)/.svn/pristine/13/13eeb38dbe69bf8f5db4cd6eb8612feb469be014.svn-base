Public Class Form5

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Text = ""
        TextBox2.Text = ""
        TextBox3.Text = ""
        TextBox4.Text = ""

        ComboBox1.SelectedIndex = -1

        ListBox1.SelectedIndex = -1

        CheckBox1.Checked = False

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Dim l, w, f, mw, mr, m, c As Integer

        If IsNumeric(TextBox1.Text) Then
            If IsNumeric(TextBox2.Text) Then
                If IsNumeric(TextBox3.Text) Then

                    If TextBox1.Text > 0 And TextBox2.Text > 0 And TextBox3.Text > 0 Then


                        l = TextBox1.Text
                        w = TextBox2.Text
                        f = 10


                        If ComboBox1.SelectedIndex < 0 Then
                            TextBox4.Text = "Выберите материал стен"
                        Else

                            If ComboBox1.SelectedIndex = 0 Then
                                mw = 10
                            End If
                            If ComboBox1.SelectedIndex = 1 Then
                                mw = 20
                            End If
                            If ComboBox1.SelectedIndex = 2 Then
                                mw = 30
                            End If


                            If ListBox1.SelectedIndex < 0 Then
                                TextBox4.Text = "Выберите материал крыши"
                            Else

                                If ListBox1.SelectedIndex = 0 Then
                                    mr = 10
                                End If
                                If ListBox1.SelectedIndex = 1 Then
                                    mr = 20
                                End If
                                If ListBox1.SelectedIndex = 2 Then
                                    mr = 30
                                End If


                                If CheckBox1.Checked = True Then
                                    m = 50
                                End If


                                c = 4 * l * w * f * mr + mw + m
                                TextBox4.Text = c
                                Label10.Text = ""


                            End If

                        End If


                    Else
                        MsgBox("Введите корректные значения")
                        TextBox4.Clear()
                    End If

                Else
                    MsgBox("Введите количество этажей")
                End If
            Else
                    MsgBox("Введите ширину")
                TextBox4.Clear()
            End If
        Else
            MsgBox("Введите длину")
            TextBox4.Clear()
        End If


    End Sub

    Private Sub TextBox3_TextChanged(sender As Object, e As EventArgs) Handles TextBox3.TextChanged
        If IsNumeric(TextBox3.Text) = False Then
            'Label9.Text = "repeat input"
            TextBox3.Text = ""
        End If
    End Sub

End Class