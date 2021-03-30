Public Class Form4
    Private Sub Класс_ПланетыBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles Класс_ПланетыBindingNavigatorSaveItem.Click
        Me.Validate()
        Me.Класс_ПланетыBindingSource.EndEdit()
        Me.TableAdapterManager.UpdateAll(Me.PlanetsDataSet)

    End Sub

    Private Sub Form4_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Класс_Планеты". При необходимости она может быть перемещена или удалена.
        Me.Класс_ПланетыTableAdapter.Fill(Me.PlanetsDataSet.Класс_Планеты)

    End Sub

    Private Sub Label5_Click(sender As Object, e As EventArgs) Handles Label5.Click

    End Sub
End Class