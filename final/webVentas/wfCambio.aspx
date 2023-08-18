<%@ Page Title="" Language="vb" AutoEventWireup="false" MasterPageFile="~/mpPrincipal.Master" CodeBehind="wfCambio.aspx.vb" Inherits="webVentas.wfCambio" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
     <div class="pr1">         
         <asp:Label ID="Label1" runat="server" Text="Cantidad de quetzales a consultar" ></asp:Label>&nbsp;&nbsp;&nbsp;
         <asp:TextBox ID="txtcant" runat="server" onkeypress="return fun_AllowOnlyAmountAndDot(this.id);"></asp:TextBox>&nbsp;&nbsp;&nbsp;
         <asp:DropDownList ID="dpTipoUni" runat="server" ></asp:DropDownList>&nbsp;&nbsp;&nbsp;  
         <asp:Button ID="btnagr" runat="server" Text="Agregar Moneda" />
    </div>
    <div class="pr1">
        <asp:GridView ID="gvTipo" runat="server">            
            </asp:GridView>
        <asp:Label ID="Label2" runat="server" Text=""></asp:Label>
    </div>
    <script>
        function fun_AllowOnlyAmountAndDot(txt) {
            if (event.keyCode > 47 && event.keyCode < 58 || event.keyCode == 46) {
                var txtbx = document.getElementById(txt);
                var amount = document.getElementById(txt).value;
                var present = 0;
                var count = 0;           
                do {
                    present = amount.indexOf(".", present);
                    if (present != -1) {
                        count++;
                        present++;
                    }
                }
                while (present != -1);
                if (present == -1 && amount.length == 0 && event.keyCode == 46) {
                    event.keyCode = 0;
                    return false;
                }

                if (count >= 1 && event.keyCode == 46) {

                    event.keyCode = 0;
                    return false;
                }
                if (count == 1) {
                    var lastdigits = amount.substring(amount.indexOf(".") + 1, amount.length);
                    if (lastdigits.length >= 2) {
                        event.keyCode = 0;
                        return false;
                    }
                }
                return true;
            }
            else {
                event.keyCode = 0;
                return false;
            }

        }
    </script>
</asp:Content>