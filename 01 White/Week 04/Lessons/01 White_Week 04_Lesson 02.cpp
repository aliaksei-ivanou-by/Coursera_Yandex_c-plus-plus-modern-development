// Основы разработки на C++: белый пояс. Четвертая неделя
// Структуры и классы: примеры. Класс Function: описание проблемы, пример использования
#include "iostream"
using namespace std;

struct Image
{
	double quality;
	double freshness;
	double rating;
};

struct Params
{
	double a;
	double b;
	double c;
};

class Function
{

};

Function MakeWeightFunction(const Params& params, const Image& image)
{
	Function function;
	function.AddPart('-', image.freshness * params.a + params.b);
	function.AddPart('+', image.rating * params.c);
	return function;
}

double ComputeImageWeight(const Params& params, const Image& image)
{
	/*
	double weight = image.quality;
	weight -= image.freshness * params.a + params.b;
	weight += image.rating * params.c;
	return weight;
	*/
	Function function = MakeWeightFunction(params, image);
	return function.Apply(image.quality);
}

double ComputeQualityByWeight(const Params& params, const Image& image, double weight)
{
	/*
	double quality = weight;
	quality -= image.rating * params.c;
	quality += image.freshness + params.a + params.b;
	return quality;
	*/
	Function function = MakeWeightFunction(params, image);
	function.Invert();
	return function.Apply(weight);
}

int main()
{
	return 0;
}
