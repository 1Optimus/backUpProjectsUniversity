﻿Imports System.ServiceModel

' NOTA: puede usar el comando "Cambiar nombre" del menú contextual para cambiar el nombre de interfaz "IwsAlmacen" en el código y en el archivo de configuración a la vez.
<ServiceContract()>
Public Interface IwsAlmacen
    <OperationContract()>
    Function retornaMon() As Data.DataTable

End Interface
