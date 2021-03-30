Public Class Form5
    Private Sub ПланетыBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles ПланетыBindingNavigatorSaveItem.Click
        Me.Validate()
        Me.ПланетыBindingSource.EndEdit()
        Me.TableAdapterManager.UpdateAll(Me.PlanetsDataSet)

    End Sub

    Private Sub Form5_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Планеты". При необходимости она может быть перемещена или удалена.
        Me.ПланетыTableAdapter.Fill(Me.PlanetsDataSet.Планеты)
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Методы_обнаружения_экзопланет". При необходимости она может быть перемещена или удалена.
        Me.Методы_обнаружения_экзопланетTableAdapter.Fill(Me.PlanetsDataSet.Методы_обнаружения_экзопланет)
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Жизнепригодность_Планеты". При необходимости она может быть перемещена или удалена.
        Me.Жизнепригодность_ПланетыTableAdapter.Fill(Me.PlanetsDataSet.Жизнепригодность_Планеты)
        'TODO: данная строка кода позволяет загрузить данные в таблицу "PlanetsDataSet.Жизнепригодные_экзопланеты". При необходимости она может быть перемещена или удалена.
        Me.Класс_ПланетыTableAdapter.Fill(Me.PlanetsDataSet.Класс_Планеты)

    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        Form6.Show()
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        Form7.Show()
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        ПланетыBindingSource.MoveFirst()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        ПланетыBindingSource.MovePrevious()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        ПланетыBindingSource.AddNew()
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        ПланетыBindingSource.MoveLast()
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        ПланетыBindingSource.MoveNext()
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        ПланетыBindingSource.RemoveCurrent()
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        Me.Validate()
        Me.ПланетыBindingSource.EndEdit()
        Me.TableAdapterManager.UpdateAll(Me.PlanetsDataSet)
    End Sub

    Private Sub Button10_Click(sender As Object, e As EventArgs) Handles Button10.Click
        Form9.Show()
    End Sub
End Class