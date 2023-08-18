
Public Class clsManejoServicios
    Public Shared Function svcBinding() As System.ServiceModel.Channels.Binding
        Dim binding As New System.ServiceModel.BasicHttpBinding   'HTTP
        'Dim binding As New System.ServiceModel.BasicHttpsBinding   'HTTPS
        binding.SendTimeout = New TimeSpan(0, 8, 0)
        binding.OpenTimeout = New TimeSpan(0, 8, 0)
        binding.MaxReceivedMessageSize = 2147483647
        binding.MaxBufferSize = 2147483647
        Return binding
    End Function
    Public Shared Function svcAddress(svcName As String) As System.ServiceModel.EndpointAddress
        Dim dir As String = "http://localhost:63210/" 'desarrollo
        'Dim dir As String = "http://ws.orga.local/" 'pruebas
        'Dim dir As String = "https://svc.prod.local.s3/" 'desarrollo

        Return New System.ServiceModel.EndpointAddress(dir & svcName)


    End Function
End Class
