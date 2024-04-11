#include <iostream>
#include "fractie.h"
using namespace std;

//fractie::fractie() = default;

fractie::fractie(int x,int y) {
	a = x;
	b = y;
}

fractie::fractie(const fractie &f) {
	a = f.a;
	b = f.b;
}

fractie & fractie::operator=(const fractie &f) {
	a = f.a;
	b = f.b;
	return *this;
}

fractie::~fractie() {
}

double fractie::getValoare() {
	return double(a/b);
}

fractie fractie::getInv() {
	return fractie(b, a);
}

void fractie::setData(int x, int y) {
	a = x;
	b = y;
}

float fractie::getA() {
	return a;
}

float fractie::getB() {
	return b;
}

void fractie::afisare() const {
	cout << a << "/" <<b;
}

const fractie operator + (const fractie &f1, const fractie &f2) {
	return fractie((f1.a*f2.b) + (f2.a*f1.b), f1.b*f2.b);
}

const fractie operator - (const fractie &f1, const fractie &f2) {
	return fractie((f1.a*f2.b) - (f2.a*f1.b), f1.b*f2.b);
}

const fractie operator - (const fractie &f) {
	return fractie(-f.a, f.b);
}

const fractie operator * (const fractie &f1, const fractie &f2) {
	return fractie(f1.a*f2.a, f1.b*f2.b);
}

const fractie operator / (const fractie &f1, const fractie &f2) {
	return fractie(f1.a*f2.b, f1.b*f2.a);
}


fractie & fractie::operator += (const fractie &f) {
	*this = *this + f;
	return *this;
}

fractie & fractie::operator -= (const fractie &f) {
	*this = *this - f;
	return *this;
}

fractie & fractie::operator *= (const fractie &f) {
	*this = *this * f;
	return *this;
}

fractie & fractie::operator /= (const fractie &f) {
	*this = *this / f;
	return *this;
}

bool operator == (const fractie &f1, const fractie &f2) {
	if ((double)f1.a/f1.b == (double)f2.a/f2.b)
		return true;
	return false;
}

bool operator != (const fractie &f1, const fractie &f2) {
	if (f1 == f2)
		return false;
	return true;
}

bool operator > (const fractie &f1, const fractie &f2) {
	if ((double)f1.a/f1.b > (double)f2.a/f2.b)
		return true;
	return false;
}

bool operator < (const fractie &f1, const fractie &f2) {
	if ((double)f1.a/f1.b < (double)f2.a/f2.b)
		return true;
	return false;
}

bool operator >= (const fractie &f1, const fractie &f2) {
	if ((double)f1.a/f1.b >= (double)f2.a/f2.b)
		return true;
	return false;
}

bool operator <= (const fractie &f1, const fractie &f2) {
	if ((double)f1.a/f1.b <= (double)f2.a/f2.b)
		return true;
	return false;
}

