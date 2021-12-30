#pragma once

class Polynome
{
private:
	double A;
	double B;
	double C;


public:


	Polynome();
	Polynome(int A, int B, int C);
	Polynome(const Polynome& P);

	void Homothétie(double val);
	Polynome Somme(Polynome& p);
	void Resolution()const;
	void affichage()const;

	bool operator ==(const Polynome& p)const;
	Polynome operator =(const Polynome& p);
	Polynome operator +(const Polynome& p);


};