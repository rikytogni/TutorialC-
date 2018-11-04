#include"Box.h"
#include<iostream>
using std::cout;
using std::endl;

CBox::CBox(double lv, double hv, double wv) :
         m_Length{lv}, m_Height{hv},m_Width{wv}
        {
            cout << "Constructor called !" << endl;
        }
double CBox::volume() const
{
    return m_Height*m_Length*m_Width;
}