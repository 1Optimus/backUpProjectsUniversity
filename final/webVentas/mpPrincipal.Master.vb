Public Class mpPrincipal
    Inherits System.Web.UI.MasterPage

    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load



    End Sub
    Private Function validaSession() As Boolean
        If IsNothing(Session("idEstudiante")) Then
            Return False
        Else
            Return True
        End If

    End Function

End Class