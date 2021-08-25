void swapValue(int a, int b);  // �Լ��� ����(prototype) ����
void swapRef(int& a, int& b);
void swapRef(int* a, int* b);

class Point
{
private:
    int x;     // �⺻ ���� ���� �����ڴ� private
    int y;     // �̷��� �ϸ� �ؿ� main �κп� x,y �� ������ �Ǿ����� -> �׷��� Point �κ��� �ٲ���

public:        // ����� ������
    //Point(int x = 0, int y = 0) : x(x), y(y) {}  // �ؿ� �İ� ���� (ª�� ǥ��)

    Point(int x = 0, int y = 0) : x(x)         // : Point p(10,20)  // �ʱ�ȭ ������ ��������� Ȯ��
    {
        this->y = y;
    }
    int X() { return x; }                     // int x �� int y�� private: �ȿ� �־����� �� X(),Y(),SetX,SetY ����
    int Y() { return y; }
    void SetX(int x) { this->x = x; }
    void SetY(int y) { this->y = y; }

    double distance(Point p)                 // Point p���� �Ÿ� ���  // 2D -> Point
    {
        int x2 = (x - p.x) * (x - p.x);
        int y2 = (y - p.y) * (y - p.y);
        return sqrt(x2 + y2);
    }
};

class Point3D : public Point                // 2D Point class ���
{
private:
    int z;  // z��

public:
    Point3D(int x = 0, int y = 0, int z = 0) : Point(x, y)  //, z(z) <- �ؿ� this �� ������ ���
    {
        this->z = z;
    }
    int Z() { return z; }
    void SetZ(int z) { this->z = z; }

    double distance(Point3D p)              // Point3D p���� �Ÿ�  // 3D -> Point3D
    {
        int x2 = (X() - p.X()) * (X() - p.X());  // ��������� ǥ��
        int y2 = (Y() - p.Y()) * (Y() - p.Y());
        int z2 = (z - p.z) * (z - p.z);
        return sqrt(x2 + y2 + z2);
    }
};