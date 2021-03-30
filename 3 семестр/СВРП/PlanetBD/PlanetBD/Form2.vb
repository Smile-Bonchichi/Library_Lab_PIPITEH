Public Class Form2
    Private Sub Методы_обнаружения_экзопланетBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles Методы_обнаружения_экзопланетBindingNavigatorSaveItem.Click
        Me.Validate()
        Me.Методы_обнаружения_экзопланетBindingSource.EndEdit()
        Me.TableAdapterManager.UpdateAll(Me.PlanetsDataSet)

    End Sub

    Private Sub Form2_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Методы_обнаружения_экзопланет". При необходимости она может быть перемещена или удалена.
        Me.Методы_обнаружения_экзопланетTableAdapter.Fill(Me.PlanetsDataSet.Методы_обнаружения_экзопланет)

    End Sub
End Class