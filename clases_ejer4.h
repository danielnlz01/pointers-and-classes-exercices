class mama{
public:
	void display ()
	{
		cout << "mamá: Mensaje de mamá\n";
	}
};

class hija : public mama{
public:
	void display ()
	{
		cout << "hija: Mensaje de hija\n\n";
	}
};