' NOTA: puede usar el comando "Cambiar nombre" del menú contextual para cambiar el nombre de clase "wsAlmacen" en el código, en svc y en el archivo de configuración a la vez.
' NOTA: para iniciar el Cliente de prueba WCF para probar este servicio, seleccione wsAlmacen.svc o wsAlmacen.svc.vb en el Explorador de soluciones e inicie la depuración.
Public Class wsAlmacen
    Implements IwsAlmacen

    Dim obj As New LogiaDelNegocio.clsMoneda

    Public Function retornaMon() As DataTable Implements IwsAlmacen.retornaMon
        Return obj.selectMo
    End Function
End Class
