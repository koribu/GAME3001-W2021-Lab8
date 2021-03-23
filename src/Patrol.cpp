#include "Patrol.h"

#include <iostream>

using namespace std;

Patrol::Patrol()
= default;

Patrol::~Patrol()
= default;

void Patrol::Execute()
{
	cout << "do Patrol action" << endl;
}
