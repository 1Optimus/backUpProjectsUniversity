Imports MySql.Data.MySqlClient
Imports System.Data


Public Class clsConnMysql
    Dim _usuario As String
    Dim _pass As String
    Dim _source As String

    Public Sub New()
        _usuario = "root"
        _pass = ""
        _source = "localhost"
    End Sub

    Public Sub New(ByVal usuario As String, ByVal pass As String, ByVal source As String)
        _usuario = usuario
        _pass = pass
        _source = source
    End Sub

    Private Function strConnn() As String
        Dim objConnCons As New MySqlConnectionStringBuilder
        objConnCons.UserID = _usuario
        objConnCons.Password = _pass
        objConnCons.Server = _source
        objConnCons.Database = "final"
        objConnCons.Pooling = True
        objConnCons.MaximumPoolSize = 5

        Return objConnCons.ConnectionString

    End Function

    Public Function consulta_A_DT(ByVal sql As String, ByRef dt As DataTable) As String
        Dim msgError As String = ""
        Dim objConexionMysql As New MySqlConnection(strConnn())
        Dim objDataAdapter As New MySqlDataAdapter(sql, objConexionMysql)

        Dim ds As New DataSet
        Dim dts As New DataTable
        Try
            objDataAdapter.Fill(ds, "tabla")
            dts = ds.Tables("tabla")
            dt = dts
        Catch ex As Exception
            msgError = ex.InnerException.Message
        Finally
            objConexionMysql.Close()
            objDataAdapter.Dispose()

        End Try

        Return msgError
    End Function

    Public Function ejecutarQuery(ByVal sql As String) As String
        Dim msqError As String = ""
        Dim objConexionMysql As New MySqlConnection(strConnn())
        Dim objCommand As New MySqlCommand

        Try
            objConexionMysql.Open()
            objCommand.Connection = objConexionMysql
            objCommand.CommandText = sql.ToUpper
            objCommand.ExecuteNonQuery()
        Catch ex As Exception
            msqError = ex.ToString
        Finally
            objConexionMysql.Close()
        End Try

        Return msqError

    End Function

    Public Function ejecutaSP(ByVal sql As String) As String
        Dim msqError As String = ""
        Dim objConexionMysql As New MySqlConnection(strConnn())
        Dim objCommand As New MySqlCommand

        Try
            objConexionMysql.Open()
            objCommand.Connection = objConexionMysql
            objCommand.CommandText = sql.ToUpper
            objCommand.CommandType = CommandType.StoredProcedure
            objCommand.ExecuteNonQuery()
        Catch ex As Exception
            msqError = ex.ToString
        Finally
            objConexionMysql.Close()
        End Try

        Return msqError

    End Function





End Class
