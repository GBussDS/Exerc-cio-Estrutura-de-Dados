#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool CalculoAnoBissexto(int iAno) 
{
    bool bAnoBissexto;
    
    if (iAno%4==0 && iAno%100!=0)
    {
        cout << "O ano é bissexto." << endl;
        bAnoBissexto = true;
    }
    else if (iAno%4==0 && iAno%100==0)
    {
        cout << "O ano é bissexto" << endl;
        bAnoBissexto = true;
    }
    else
    {
        cout << "O ano não é bissexto" << endl;
        bAnoBissexto = false;
    }
    
    return bAnoBissexto;
}

int main() {
    int iAnoQualquer;
    
    cout << "Digite um ano:" << endl;
    cin >> iAnoQualquer;
    
    CalculoAnoBissexto(iAnoQualquer);
    
    return 0;
}
