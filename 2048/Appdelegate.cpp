#include "Appdelegate.h"
using namespace std;
Appdelegate * Appdelegate::s_pInstance = nullptr;
Appdelegate * Appdelegate::getInsatace()
{
	if (s_pInstance == nullptr)
	{
		s_pInstance = new Appdelegate();
	}
	return s_pInstance;
}
Appdelegate::Appdelegate()
{}
Appdelegate::~Appdelegate()
{

}

int Appdelegate::run()
{
	cout << "run" << endl;
	system("pause");
	return 0;
}