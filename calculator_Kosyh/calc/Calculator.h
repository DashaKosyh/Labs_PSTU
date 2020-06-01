#pragma once


ref class Calculator
{
private:
	double DET, D1, D2, D3;
	double _a11, _a12, _a13, _a21, _a22, _a23, _a31, _a32, _a33;
	double _b1, _b2, _b3;
	double	x, y, z;
	bool IsSolution = false;
	bool NeedParameters = false;
public:
	Calculator();
	~Calculator();
	void Calculate();
	void CalculateWithParameters(double N, int SelIdx);
	void SetA1(int A11, int A12, int A13);
	void SetA2(int A21, int A22, int A23);
	void SetA3(int A31, int A32, int A33);
	void SetB(int B1, int B2, int B3);
	bool GetNeedParameters();
	bool GetIsSolution();
	double GetX();
	double GetY();
	double GetZ();
};


