Public Class Form3
    Private Sub Жизнепригодность_ПланетыBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles Жизнепригодность_ПланетыBindingNavigatorSaveItem.Click
        Me.Validate()
        Me.Жизнепригодность_ПланетыBindingSource.EndEdit()
        Me.TableAdapterManager.UpdateAll(Me.PlanetsDataSet)

    End Sub

    Private Sub Form3_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Жизнепригодность_Планеты". При необходимости она может быть перемещена или удалена.
        Me.Жизнепригодность_ПланетыTableAdapter.Fill(Me.PlanetsDataSet.Жизнепригодность_Планеты)

    End Sub
End Class