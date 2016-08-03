#ifndef _APP_DELEGATE_H_
#define _APP_DELEGATE_H_

#include <iostream>

class Appdelegate
{
private:
	static Appdelegate * s_pInstance;
public:
	static Appdelegate * getInsatace();
	Appdelegate();
	~Appdelegate();
	int run();

};

#endif