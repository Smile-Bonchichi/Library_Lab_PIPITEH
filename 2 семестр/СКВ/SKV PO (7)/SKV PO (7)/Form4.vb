﻿Public Class Form4
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Visible = False
        Timer1.Enabled = False
        PictureBox2.Visible = True
        Timer2.Enabled = True
        Timer2.Interval = 100
    End Sub

    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        PictureBox2.Visible = False
        Timer2.Enabled = False
        PictureBox3.Visible = True
        Timer3.Enabled = True
        Timer3.Interval = 100
    End Sub

    Private Sub Timer3_Tick(sender As Object, e As EventArgs) Handles Timer3.Tick
        PictureBox3.Visible = False
        Timer3.Enabled = False
        PictureBox4.Visible = True
        Timer4.Enabled = True
        Timer4.Interval = 100
    End Sub

    Private Sub Timer4_Tick(sender As Object, e As EventArgs) Handles Timer4.Tick
        PictureBox4.Visible = False
        Timer4.Enabled = False
        PictureBox5.Visible = True
        Timer5.Enabled = True
        Timer5.Interval = 100
    End Sub

    Private Sub Timer5_Tick(sender As Object, e As EventArgs) Handles Timer5.Tick
        PictureBox5.Visible = False
        Timer5.Enabled = False
        PictureBox6.Visible = True
        Timer6.Enabled = True
        Timer6.Interval = 100
    End Sub

    Private Sub Timer6_Tick(sender As Object, e As EventArgs) Handles Timer6.Tick
        PictureBox6.Visible = False
        Timer6.Enabled = False
        PictureBox1.Visible = True
        Timer1.Enabled = True
        Timer1.Interval = 100
    End Sub
End Class