#include "Header.h"
#include <iostream>
#include <math.h>

using namespace std;

Polynome::Polynome()
{

	this->A = 0;
	this->B = 0;
	this->C = 0;
}

Polynome::Polynome(int A, int B, int C)
{


	this->A = A;
	this->B = B;
	this->C = C;

}

Polynome::Polynome(const Polynome& P)
{


	this->A = P.A;
	this->B = P.B;
	this->C = P.C;


}

void Polynome::Homothétie(double val)
{

	this->A = this->A * val;
	this->B = this->B * val;
	this->C = this->C * val;

}

Polynome Polynome::Somme(Polynome& p)
{
	Polynome t;

	t.A = this->A + p.A;
	t.B = this->B + p.B;
	t.C = this->C + p.C;

	return t;
}

void Polynome::Resolution() const
{

	int delta;

	delta = pow(this->B, 2) - 4 * this->A * this->C;

	if (delta > 0) {


		float x1 = 0;
		float x2 = 0;

		x1 = (-this->B + sqrt(delta)) / 2 * this->A;
		x2 = (-this->B - sqrt(delta)) / 2 * this->A;


		cout << " x1 = " << x1 << endl;
		cout << " x2 = " << x2 << endl;

	}


	else if (delta == 0) {


		float x = 0;

		x = (-this->B) / 2 * this->A;


		cout << " x = " << x << endl;

	}

	else {

		cout << " delta n'a pas de solution reel " << endl;
	}

}

void Polynome::affichage() const
{
	cout << this->A << " X² ";

	if (this->B >= 0) {

		cout << "+";
		cout << this->B << " X ";

	}

	else {

		cout << this->B << " X ";

	}

	if (this->C >= 0) {

		cout << "+";
		cout << this->C;

	}

	else {

		cout << this->C;

	}


	cout << endl;

}

bool Polynome::operator==(const Polynome& p) const
{
	if (this->A == p.A && this->B == p.B && this->C == p.C) {

		return true;

	}

	else return false;

}

Polynome Polynome::operator =(const Polynome& p)
{

	if (this != &p) {

		this->A = p.A;
		this->B = p.B;
		this->C = p.C;

	}

	return *this;
}

Polynome Polynome::operator+(const Polynome& p)
{
	Polynome t;

	t.A = this->A + p.A;
	t.B = this->B + p.B;
	t.C = this->C + p.C;

	return t;

}
