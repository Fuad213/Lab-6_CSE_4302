#include<bits/stdc++.h>
using namespace std;

class Matrix3D
{
private:
    double data[3][3];
public:
    Matrix3D()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                data[i][j]=0;
        }
    }
    void setMatrix(int ara[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                data[i][j]=ara[i][j];
            }
        }
    }
    void printMatrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    double det ()
    {
        double DET = 0;
        for(int i=0;i<3;i++)
        {

        }
        return DET;
    }

    Matrix3D inverse()
    {
        Matrix3D b;
        double DET = det();
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {

            }
        }
        return b;
    }

    Matrix3D operator +(Matrix3D a)
    {
        Matrix3D b;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                b.data[i][j]=data[i][j]+a.data[i][j];
            }
        }
        return b;

    }
    Matrix3D operator -(Matrix3D a)
    {
        Matrix3D b;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                b.data[i][j]=data[i][j]-a.data[i][j];
            }
        }
        return b;
    }
    Matrix3D operator *(Matrix3D a)
    {
        Matrix3D b;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    b.data[i][j]+=data[i][k]*a.data[k][i];
                }
            }
        }
        return b;
    }
};
int main()
{
    int n,i,j,k=1;
    Matrix3D a;
    Matrix3D b;
    int ara[3][3],ara1[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ara[i][j]=k++;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ara1[i][j]=k--;
        }
    }
    a.setMatrix(ara);
    b.setMatrix(ara1);
    a.printMatrix();
    cout<<endl;
    b.printMatrix();
    cout<<endl;
    Matrix3D c=a+b;
    c.printMatrix();
    cout<<endl;
    c=a-b;
    c.printMatrix();
    cout<<endl;
    c=a*b;
    c.printMatrix();
    cout<<endl;
}
