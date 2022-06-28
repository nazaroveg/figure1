// figure01.cpp :
//nazaroveg@yandex.ru

#include <iostream>
#include <string>

class Figure
{
public:
	Figure(int _sides_count = 0, std::string _name = "Фигура") : sides_count(_sides_count), name(_name) {}
	
	int get_sides_count() const
	{
		return sides_count;
	}
	std::string get_name() const
	{
		return name;
	}
	
private:
	
protected:
	int sides_count = 0;
	std::string name = {  };
};



class Triangle : public Figure
{
public:	
	Triangle() : Figure(3, "Треугольник") { }
	
};


class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure (4, "Четырёхугольник" ) { }

};



int main()
{
	setlocale(LC_ALL, "RUS");
	Figure fi ;
	Triangle tr{};
	Quadrangle qu{};
	std::cout << "Количество сторон: " << std::endl;

	std::cout << fi.get_name() << ": " << fi.get_sides_count() << "\n";
	std::cout << tr.get_name() << ": " << tr.get_sides_count() << "\n";
	std::cout << qu.get_name() << ": " << qu.get_sides_count() << "\n";
	
}

