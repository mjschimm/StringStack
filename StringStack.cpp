#include <string>
#include "TrueStack.h"
#include "StringStack.h"
#include <iostream>

using namespace std;

void StringStack::push_string(string str)
{
	push(str);
}

string StringStack::pop_string()
{
	return pop();
}

bool StringStack::isEmpty()
{
	return isEmpty();
}


