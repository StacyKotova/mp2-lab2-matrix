// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
#include <cstdlib>
//---------------------------------------------------------------------------

void main()
{
  int i, j;
  int n, k;

  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������"
    << endl;
  cout << "������� ������ ������ "
	  << endl;
  cin >> n;
  TMatrix<int> a(n), b(n), c(n);
  cout << "��� ��������� ������� : 1 - ������� 2 - �������� 3 - �� ��������� �������"
	  << endl;
  cin >> k;
  if ((k != 1) && (k != 2) && (k != 3)) {
	  cout << "�� �� ������� ��� ��������� �������"
		  << endl;
  }
  else {
	  if (k == 1) {
		  cout << "������� ������� �"
			  << endl;
		  for (i = 0; i < n; i++)
			  for (j = i; j < n; j++)
			  {
				  cin >> a[i][j];
			  }
		  cout << "������� ������� b"
			  << endl;
		  for (i = 0; i < n; i++)
			  for (j = i; j < n; j++)
			  {
				  cin >> b[i][j];
			  }
	  }
	  if (k == 2) {
		  for (i = 0; i < n; i++)
			  for (j = i; j < n; j++)
			  {
				  a[i][j] = rand() % 1000;
				  b[i][j] = rand() % 1000;
			  }
	  }
	  if (k == 3) {
		  for (i = 0; i < n; i++)
			  for (j = i; j < n; j++)
			  {
				  a[i][j] = i * 10 + j;
				  b[i][j] = (i * 10 + j) * 100;
			  }
	  }

	  cout << "����� �������� ��������� 1 - �������� 2 - ��������� 3 - ������������ 4 - �������� "
		  << endl;
	  cin >> k;
	  if ((k != 1) && (k != 2) && (k != 3) && (k != 4)) {
		  cout << "Matrix a = " << endl << a << endl;
		  cout << "Matrix b = " << endl << b << endl;
	  }
	  else {
		  if (k == 1) {
			  c = a + b;
			  cout << "Matrix a = " << endl << a << endl;
			  cout << "Matrix b = " << endl << b << endl;
			  cout << "Matrix c = " << endl << c << endl;
		  }
		  if (k == 2) {
			  c = a - b;
			  cout << "Matrix a = " << endl << a << endl;
			  cout << "Matrix b = " << endl << b << endl;
			  cout << "Matrix c = " << endl << c << endl;
		  }
		  if (k == 3) {
			  c = a;
			  cout << "Matrix a = " << endl << a << endl;
			  cout << "Matrix c = " << endl << c << endl;
		  }
		  if (k == 4) {
			  if (a == b) {
				  cout << "������� �����" << endl;
				  cout << "Matrix a = " << endl << a << endl;
				  cout << "Matrix b = " << endl << b << endl;
			  }
			  else {
				  cout << "������� �� �����" << endl;
				  cout << "Matrix a = " << endl << a << endl;
				  cout << "Matrix b = " << endl << b << endl;
			  }
		  }
	  }
  }
}
//---------------------------------------------------------------------------
