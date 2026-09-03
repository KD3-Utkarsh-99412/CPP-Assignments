#include<iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2];
public:
    void accept()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cin>>a[i][j];
        }
    }

    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix result;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                result.a[i][j]=a[i][j]+m.a[i][j];
        }

        return result;
    }

    Matrix operator-(Matrix m)
    {
        Matrix result;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                result.a[i][j]=a[i][j]-m.a[i][j];
        }

        return result;
    }

    Matrix operator*(Matrix m)
    {
        Matrix result;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                result.a[i][j]=0;

                for(int k=0;k<2;k++)
                    result.a[i][j]+=a[i][k]*m.a[k][j];
            }
        }

        return result;
    }
};

int main()
{
    Matrix m1,m2,sum,difference,product;

    cout<<"Enter first matrix:"<<endl;
    m1.accept();

    cout<<"Enter second matrix:"<<endl;
    m2.accept();

    sum=m1+m2;
    difference=m1-m2;
    product=m1*m2;

    cout<<"\nAddition:"<<endl;
    sum.display();

    cout<<"\nSubtraction:"<<endl;
    difference.display();

    cout<<"\nMultiplication:"<<endl;
    product.display();

    return 0;
}