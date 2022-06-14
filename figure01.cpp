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
	Triangle(int side)
	{
		
	}
	
	
	
	void sides_count(int n)
	{
		std::cout << "Треугольник: " << n << std::endl;
	}

	

};


class Quadrangle : protected Figure
{
public:
	Quadrangle(int side)
	{

	}
	
	void sides_count(int n)
	{
		
		std::cout << "Четырёхугольник: " << n << std::endl;
	}
	

};



int main()
{
	setlocale(LC_ALL, "RUS");
	Figure fi ;
	Triangle tr{0};
	Quadrangle qu{0};
	std::cout << "Количество сторон: " << std::endl;

	fi.get_sides_count();
	tr.sides_count(3);
	qu.sides_count(4);
	
	
	

}

