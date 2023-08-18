Imports System.Text
Imports DBDLL
Public Class clsMoneda
    Dim objConexion As New clsConnMysql()

#Region "Querys"
    Private Function sqlMo() As String
        Dim sql As New StringBuilder
        sql.Append("SELECT `id`, `Nombre`, `val_quetzal` FROM `moneda`")
        Return sql.ToString
    End Function

#End Region
#Region "Publicos"
    Public Function selectMo() As Data.DataTable
        Dim dt As New DataTable
        objConexion.consulta_A_DT(sqlMo(), dt)
        Return dt
    End Function

#End Region

End Class


