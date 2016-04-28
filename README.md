# PracticaFIS
Programa en c++ con “base de datos” en ficheros .txt
Formato .txt
ID	NombredelProducto		Precio
Menú
Opción Listado de productos (Para ver productos y precios)
Inserta en el carrito el producto
Eliminar del carrito un producto
Consultar precio del carrito
Pagar (Método de pago)
Guardar pedido
Solicitar nuevo producto

-Clase que hay que implementar
	·Usuario (ID Carrito Favorito)
		private:
			Nombre
			ID
			Carrito
			Favoritos
		public:
			Get Atributos();
			Visualizar atributos();
	


	·Producto
		private:
			ID
			Nombre
			Precio
		public:
			get atributos();
	·Carrito
		- private: 
			Vector de productos
		-public:
			Añadir()
			Quitar()
			Ver precio()
			Ver productos()
	


	·Favorito (Similar a carrito, se guarda en .txt)
		-Añadir al carrito
		-Guarda en fichero .txt
	
	
	
