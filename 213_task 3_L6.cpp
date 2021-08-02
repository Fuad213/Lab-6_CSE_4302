#include<bits/stdc++.h>
using namespace std;

class Coordinate
{
private:
  float x, y;
public:
  Coordinate(float a = 0, float b = 0) : x(a), y(b)
  {

  }

  void move_a (float val)
  {
    x += val;
  }

  void move_b(float val)
  {
    y += val;
  }

  void move (float val)
  {
    move_a(val);
    move_b(val);
  }

  float getDistance()
  {
    return sqrt(x*x+y*y);
  }

  float getDistance(Coordinate c)
  {
    float t = (x - c.x) * (x - c.x) + (y - c.y) * (y - c.y);
    return sqrt(t);
  }

  void show()
  {
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
  }

  Coordinate operator ++ ()
  {
    x++, y++;
    return Coordinate(x, y);
  }

  Coordinate operator ++ (int)
  {
    Coordinate temp(x, y);
    x++, y++;
    return temp;
  }

  Coordinate operator -- ()
  {
    x--, y--;
    return Coordinate(x, y);
  }

  Coordinate operator -- (int)
  {
    Coordinate temp(x, y);
    x--, y--;
    return temp;
  }

    bool operator ==(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a==b;
    }

    bool operator !=(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a!=b;
    }

    bool operator >=(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a>=b;
    }

    bool operator <=(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a<=b;
    }

    bool operator <(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a<b;
    }

    bool operator >(Coordinate c)
    {
        float a= getDistance();
        float b= c.getDistance();
        return a>b;
    }

  ~Coordinate()
  {

  }

};

int main()
{
    Coordinate a(13.13, 7.5), b(11.7, 5.5);
    cout << a.getDistance(b) << "\n";
    a.move(3.21);
    a.show();
    a++;
    a.show();
    ++a;
    a.show();
    cout << "checking a==b  Ans: "<<(a == b) <<endl;
    cout << "checking a>=b  Ans: "<<(a >= b) <<endl;
    cout << "checking a<=b  Ans: "<<(a <= b) <<endl;
    cout << "checking a<b  Ans: "<<(a < b) <<endl;
    cout << "checking a>b  Ans: "<<(a > b) <<endl;
    cout << "checking a!=b  Ans: "<<(a != b) <<endl;


  return 0;

}
