int main()
#include<trygonometria.h>
#include<cmath>
#include<iostream>
#include<LaborkaConfig.h>

int main(int argc, char* argv[])
{ /*...*/
#ifdef BUILD_TESTS
	std::cout << "TESTS \n";
	if (argc >= 2) {
		double dg = strtod(argv[1], NULL);
		double rs = degreemath::cos(dg);
		std::cout << rs << "\n";}
#endif

#ifdef USE_TRIGONOMETRY_DEGREE
	std::cout << "USE_TRIGONOMETRY_DEGREE set as TRUE \n";
	double sin = degreemath::sin(90);
	std::cout << "Sin(90) = " << sin << "\n";
	double cos = degreemath::cos(90);
	std::cout << "Cos(90) = " << cos << "\n";
	double tan = degreemath::tan(180);
	std::cout << "Tan(180) = " << tan << "\n";
	double ctg = degreemath::ctg(90);
	std::cout << "Ctg(90) = " << ctg << "\n";

#else
	std::cout << "USE_TRIGONOMETRY_DEGREE set as FALSE \n";
	double sinT = sin(90);
	std::cout << "Sin(90) = " << sinT << "\n";
	double cosT = cos(90);
	std::cout << "Cos(90) = " << cosT << "\n";
	double tanT = tan(180);
	std::cout << "Tan(180) = " << tanT << "\n";
	double ctgT = 1 / tan(90);
	std::cout << "Ctg(90) = " << ctgT << "\n";
#endif

	return 0;
}
