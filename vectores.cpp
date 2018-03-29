#include "StdAfx.h"
#include "vectores.h"
#include <iostream>

using namespace std;


vectores::vectores(void)
{
	vec[10]=0;
	n=0;
}
vectores::~vectores(void)
{

}

void vectores::cargarvector(int vec[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"vec["<<i<<"]=";
		cin>>vec[i];
	}
}
void vectores::mostrarvector(int vec[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<vec[i]<<", ";
	}
	cout<<endl;
}
void vectores::ordenarvector(int vec[], int n)
{
	int aux;
	for( int i=0;i<(n-1);i++)
	{
		for( int j=i;j<n;j++)
		{
			if( vec[i] > vec[j] )
			{
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}
		}
	}
}
