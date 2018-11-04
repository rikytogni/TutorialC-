#pragma once

class CBox
{
    public:

    /*Constructor*/
    explicit CBox(double lv = 1.0, double hv = 1.0, double wv = 1.0);
    
    /*Calculate the volume*/
    double volume() const;
    
    private:
    double m_Length;
    double m_Height;
    double m_Width;
};