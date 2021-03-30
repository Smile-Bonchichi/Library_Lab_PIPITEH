Public Class Form6
    Private Sub Form6_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Планеты". При необходимости она может быть перемещена или удалена.
        Me.ПланетыTableAdapter.Fill(Me.PlanetsDataSet.Планеты)

    End Sub

    Private Sub ПланетыDataGridView_CellContentClick(sender As Object, e As DataGridViewCellEventArgs) Handles ПланетыDataGridView.CellContentClick

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim Col As System.Windows.Forms.DataGridViewColumn
        Select Case ListBox1.SelectedIndex
            Case 0
                Col = DataGridViewTextBoxColumn2
            Case 1
                Col = DataGridViewTextBoxColumn3
            Case 2
                Col = DataGridViewTextBoxColumn4
            Case 3
                Col = DataGridViewTextBoxColumn5
            Case 4
                Col = DataGridViewTextBoxColumn6
            Case 5
                Col = DataGridViewTextBoxColumn7
            Case 6
                Col = DataGridViewTextBoxColumn8
        End Select

        If RadioButton1.Checked Then
            ПланетыDataGridView.Sort(Col, System.ComponentModel.ListSortDirection.Ascending)
        Else
            ПланетыDataGridView.Sort(Col, System.ComponentModel.ListSortDirection.Descending)
        End If
    End Sub

    Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

    End Sub

    Private Sub GroupBox1_Enter(sender As Object, e As EventArgs) Handles GroupBox1.Enter

    End Sub

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged
        Button2.Enabled = True
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        ПланетыBindingSource.Filter = "Название='" & ComboBox1.Text & "'"
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        ПланетыBindingSource.Filter = ""
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        For i = 0 To ПланетыDataGridView.ColumnCount - 1
            For j = 0 To ПланетыDataGridView.RowCount - 1
                ПланетыDataGridView.Item(i, j).Style.BackColor = Color.White
                ПланетыDataGridView.Item(i, j).Style.ForeColor = Color.Black
            Next j
        Next i
        For i = 0 To ПланетыDataGridView.ColumnCount - 1
            For j = 0 To ПланетыDataGridView.RowCount - 1
                If ПланетыDataGridView.Item(i, j).Value = TextBox1.Text Then
                    ПланетыDataGridView.Item(i, j).Style.BackColor = Color.AliceBlue
                    ПланетыDataGridView.Item(i, j).Style.ForeColor = Color.Blue
                End If
            Next j
        Next i
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Me.Close()
    End Sub
End Class