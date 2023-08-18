<%@ Page Title="" Language="vb" AutoEventWireup="false" MasterPageFile="~/mpPrincipal.Master" CodeBehind="wfMantAlmacen.aspx.vb" Inherits="webVentas.wfMantAlmacen" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <div style="display:grid">
        <p>
            <b>Agregar tipo Producto</b>
        </p>
        <div>
            <asp:TextBox ID="nomProducto" runat="server"></asp:TextBox>
            <br />
            <asp:Button  ID="Guardar" runat="server" Text="Guardar" />
            <br />
            <asp:Label ID="lblCod" runat="server"></asp:Label>
        </div>
        
        
                <asp:GridView ID ="gwTipoProducto" runat="server" >
                    <Columns>
                        <asp:CommandField ButtonType="Button" SelectText="Seleccione" ShowSelectButton="True" />
                    </Columns>

                </asp:GridView>
                
        
    </div>
</asp:Content>
