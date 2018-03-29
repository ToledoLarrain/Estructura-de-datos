#pragma once
class vectores
{
private:
	int vec[10], n;
public:
	vectores(void);//constructor
	~vectores(void);//destructor

	void cargarvector(int vec[], int n); //metodos prototipos
	void mostrarvector(int vec[], int n);
	void ordenarvector(int vec[], int n);
};

