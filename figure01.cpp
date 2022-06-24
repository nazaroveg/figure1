// figure01.cpp :
//nazaroveg@yandex.ru

#include <iostream>
#include <string>

class Figure
{
public:
	Figure(){}
	
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
	std::string name = { "Фигура" };
};



class Triangle : public Figure
{
public:	
	Triangle()
	{
	sides_count = 3;
	name = "Треугольник";	 
	}
};


class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
	sides_count = 4;
	name = "Четырёхугольник";
	}
	
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

