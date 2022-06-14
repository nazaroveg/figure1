// figure01.cpp :
//nazaroveg@yandex.ru

#include <iostream>

class Figure
{
public:
	
	

	void get_sides_count()
	{
		std::cout << "Фигура: " << sides_count << std::endl;
	}

private:
	


protected:
	int sides_count = 0;
	

};



class Triangle : protected Figure
{
public:
	Triangle()
	{
	Figure::sides_count = 3;
	}
	
	
	
	void sides_count()
	{
		std::cout << "Треугольник: " << Figure::sides_count << std::endl;
	}

	

};


class Quadrangle : protected Figure
{
public:
	Quadrangle()
	{
		Figure::sides_count = 4;
	}
	
	void sides_count()
	{
		
		std::cout << "Четырёхугольник: " << Figure::sides_count << std::endl;
	}
	

};



int main()
{
	setlocale(LC_ALL, "RUS");
	Figure fi ;
	Triangle tr{};
	Quadrangle qu{};
	std::cout << "Количество сторон: " << std::endl;

	fi.get_sides_count();
	tr.sides_count();
	qu.sides_count();
	
	
	

}

