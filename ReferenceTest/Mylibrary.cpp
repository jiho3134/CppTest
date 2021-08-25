#include "..\MyHeader.h"
#include <iostream>

void swapValue(int a, int b)
{
    int c = a;
    a = b; b = c;
}

void swapRef(int& a, int& b)     // ���۷���(Reference)�� �������� �����̴�.  // �ʱ�ȭ ���� ���� �Ұ�
{                                // �����͸� ������� ���� ��
    int c = a;
    a = b; b = c;
}

void swapRef(int* a, int* b)     // �����͸� ��� ��
{
    int c = *a;                  // *a == a[0] (* == [])
    *a = *b; *b = c;
}

double Point::distance(Point p)                // Point p���� �Ÿ� ���  // 2D -> Point
{
    int x2 = (x - p.x) * (x - p.x);
    int y2 = (y - p.y) * (y - p.y);
    return sqrt(x2 + y2);
}

double Point3D::distance(Point3D p)           // Point3D p���� �Ÿ�  // 3D -> Point3D
{
    int x2 = (X() - p.X()) * (X() - p.X());   // ��������� ǥ��
    int y2 = (Y() - p.Y()) * (Y() - p.Y());
    int z2 = (z - p.z) * (z - p.z);
    return sqrt(x2 + y2 + z2);
}