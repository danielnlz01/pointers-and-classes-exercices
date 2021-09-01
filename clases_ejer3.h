class Shape
{
protected:
	float ancho, alto;
public:
	void set_datos (float a, float b)
	{
		ancho = a;
		alto = b;
	}
};

class Rectangulo: public Shape
{
public:
	float area ()
	{
		return (ancho * alto);
	}
};

class Triangulo: public Shape
{
public:
	float area ()
	{
		return (ancho * alto / 2);
	}
};