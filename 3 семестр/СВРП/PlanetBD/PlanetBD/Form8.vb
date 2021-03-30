Public Class Form8
    Private Sub ФотоBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles ФотоBindingNavigatorSaveItem.Click
        Me.Validate()
        Me.ФотоBindingSource.EndEdit()
        Me.TableAdapterManager.UpdateAll(Me.PlanetsDataSet)

    End Sub

    Private Sub Form8_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Фото". При необходимости она может быть перемещена или удалена.
        Me.ФотоTableAdapter.Fill(Me.PlanetsDataSet.Фото)

    End Sub

    Private Sub ФотоDataGridView_CellContentClick(sender As Object, e As DataGridViewCellEventArgs) Handles ФотоDataGridView.CellContentClick

    End Sub
End Class