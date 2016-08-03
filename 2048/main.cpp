#include <iostream>
#include "Appdelegate.h"
int main()
{
	Appdelegate * app = Appdelegate::getInsatace();
	return app->run();
}