struct fraction
{
	int first;
	double second;
	void Init(int, double);//метод для инициализации полей
	void Read();//метод для чтения значений полей
	void Show();//метод для вывода значений полей
	double Multiply(int k);//вычисление произведения
};