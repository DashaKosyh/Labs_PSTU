#include <string>
#include "Calculator.h"
#include "AskForm1.h"

using namespace System;
using namespace System::Windows::Forms;


Calculator::Calculator()
{
	
}

Calculator::~Calculator()
{

}

void Calculator::Calculate()
{
	DET = (_a11 * _a22 * _a33) + (_a12 * _a23 * _a31) + (_a13 * _a21 * _a32) - 
		(_a13 * _a22 * _a31) - (_a12 * _a21 * _a33) - (_a11 * _a23 * _a32);
	D1 = (_b1 * _a22 * _a33) + (_a12 * _a23 * _b3) + (_a13 * _b2 * _a32) - 
		(_a13 * _a22 * _b3) - (_a12 * _b2 * _a33) - (_b1 * _a23 * _a32);
	D2 = (_a11 * _b2 * _a33) + (_b1 * _a23 * _a31) + (_a13 * _a21 * _b3) - 
		(_a13 * _b2 * _a31) - (_b1 * _a21 * _a33) - (_a11 * _a23 * _b3);
	D3 = (_a11 * _a22 * _b3) + (_a12 * _b2 * _a31) + (_b1 * _a21 * _a32) - 
		(_b1 * _a22 * _a31) - (_a12 * _a21 * _b3) - (_a11 * _b2 * _a32);
	
	if (DET != 0)
	{
		x = D1 / DET;
		y = D2 / DET;
		z = D3 / DET;
		IsSolution = true;
		return;
		/*txtHistory->AppendText("X= " + Math::Round(x, Convert::ToInt16(numPrec->Value), MidpointRounding::AwayFromZero).ToString());
		txtHistory->AppendText(Environment::NewLine);
		txtHistory->AppendText("Y=" + Math::Round(y, Convert::ToInt16(numPrec->Value), MidpointRounding::AwayFromZero).ToString());
		txtHistory->AppendText(Environment::NewLine);
		txtHistory->AppendText("Z= " + Math::Round(z, Convert::ToInt16(numPrec->Value), MidpointRounding::AwayFromZero).ToString());
		txtHistory->AppendText(Environment::NewLine);*/
	}
	else
	{
		if ((D1 == 0) && (D2 == 0) && (D3 == 0))
		{
			NeedParameters = true;
			return;

			/*txtHistory->AppendText("X= " + Convert::ToString(x));
			txtHistory->AppendText(Environment::NewLine);
			txtHistory->AppendText("Y=" + Convert::ToString(y));
			txtHistory->AppendText(Environment::NewLine);
			txtHistory->AppendText("Z= " + Convert::ToString(z));
			txtHistory->AppendText(Environment::NewLine);*/
		}
		else
		{
			IsSolution = false;
			/*txtHistory->AppendText("Нет решений");*/
		}
	}
};

void Calculator::CalculateWithParameters(double N, int SelIdx)
{
	double A, B, C, D, E, F;
	switch (SelIdx)
	{
	case 2: {
		A = _a11,
		B = _a12,
		C = _b1 - _a13 * N,
		D = _a21,
		E = _a22,
		F = _b2 - _a23 * N;
		break;
	};
	case 1: {
		A = _a11,
		B = _a13,
		C = _b1 - _a12 * N,
		D = _a21,
		E = _a23,
		F = _b2 - _a22 * N;
		break;
	};
	case 0: {
		A = _a12,
		B = _a13,
		C = _b1 - _a11 * N,
		D = _a22,
		E = _a23,
		F = _b2 - _a21 * N;
		break;
	};
	}
	double det = A * E - B * D;
	double Temp1 = (C * E - B * F) / det;
	double Temp2 = (A * F - C * D) / det;

	switch (SelIdx) {
	case 2:
	{
		x = Temp1;
		y = Temp2;
		z = N;
		break;
	};
	case 1:
	{
		x = Temp1;
		y = N;
		z = Temp2;
		break;
	};
	case 0:
	{
		x = N;
		y = Temp1;
		z = Temp2;
		break;
	};
	}
	IsSolution = true;
};

void Calculator::SetA1(int A11, int A12, int A13)
{
	_a11 = A11;
	_a12 = A12;
	_a13 = A13;
};

void Calculator::SetA2(int A21, int A22, int A23)
{
	_a21 = A21;
	_a22 = A22;
	_a23 = A23;
};

void Calculator::SetA3(int A31, int A32, int A33)
{
	_a31 = A31;
	_a32 = A32;
	_a33 = A33;
};

void Calculator::SetB(int B1, int B2, int B3)
{
	_b1 = B1;
	_b2 = B2;
	_b3 = B3;
};

bool Calculator::GetNeedParameters()
{
	return NeedParameters;
}

bool Calculator::GetIsSolution()
{
	return IsSolution;
};

double Calculator::GetX()
{
	return x;
};

double Calculator::GetY()
{
	return y;
};

double Calculator::GetZ()
{
	return z;
};