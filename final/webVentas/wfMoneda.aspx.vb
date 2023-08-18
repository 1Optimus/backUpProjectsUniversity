Public Class wfMoneda
    Inherits System.Web.UI.Page
    Dim objws As New wsAlmacen.IwsAlmacenClient(lnFrontDLL.clsManejoServicios.svcBinding, lnFrontDLL.clsManejoServicios.svcAddress("wsAlmacen.svc"))
    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        If Not IsPostBack Then
            cargargrid()
        End If
    End Sub
    Private Sub cargargrid()
        gvTipo.DataSource = objws.retornaMon()
        gvTipo.DataBind()
    End Sub
End Class