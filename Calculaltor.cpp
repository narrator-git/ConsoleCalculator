#include "Calculaltor.h"
#include <iostream>
Calculator::Calculator() {
	a = 0;
	b = 0;
	c = ' ';
};

void Calculator::getExp() {
	std::cin >> a >> c >> b;
}

double Calculator::calculate() {
	switch (c) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
}