Public Class Form9
    Private Sub Form9_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Анализ_для_каждой_планеты". При необходимости она может быть перемещена или удалена.
        Me.Анализ_для_каждой_планетыTableAdapter.Fill(Me.PlanetsDataSet.Анализ_для_каждой_планеты)

        Me.ReportViewer1.RefreshReport()
    End Sub
End Class