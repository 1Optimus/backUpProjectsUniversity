Public Class wfCambio
    Inherits System.Web.UI.Page
    Dim objws As New wsAlmacen.IwsAlmacenClient
    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        If Not IsPostBack Then
            cargarMoneda()
            Dim dt As New DataTable
            dt.Columns.Add("Nombre moneda")
            dt.Columns.Add("Cambio")
            Me.gvTipo.DataSource = dt
            Me.gvTipo.DataBind()
            Session("tablaSesion") = dt
        End If
    End Sub

    Private Sub cargarMoneda()
        dpTipoUni.DataTextField = "NOMBRE"
        dpTipoUni.DataValueField = "val_quetzal"
        dpTipoUni.DataSource = objws.retornaMon
        dpTipoUni.DataBind()
    End Sub

    Protected Sub btnagr_Click(sender As Object, e As EventArgs) Handles btnagr.Click
        Dim tabAgre As New DataTable
        Dim monto As Double
        tabAgre = Session("tablaSesion")
        If txtcant.Text = "" Then
            Label2.Text = "No ingreso cantidad de quetzales, intente de nuevo"
        Else
            Label2.Text = ""
            monto = Convert.ToDouble(dpTipoUni.SelectedValue) * Convert.ToDouble(txtcant.Text)
            tabAgre.Rows.Add(dpTipoUni.SelectedItem.ToString, monto.ToString)
            Session("tablaSesion") = tabAgre
            Me.gvTipo.DataSource = tabAgre
            Me.gvTipo.DataBind()
        End If

    End Sub
End Class