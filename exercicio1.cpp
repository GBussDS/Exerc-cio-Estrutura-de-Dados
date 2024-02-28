#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float calculo_imc(float fMassa, float fAltura) 
{
    float fIndice = fMassa / (fAltura*fAltura);
    
    if (fIndice < 17)
    {
        cout << "Muito abaixo do peso" << endl;
    }
    else if (fIndice >= 17 && fIndice < 18.5)
    {
        cout << "Abaixo do peso" << endl;
    }
    else if (fIndice >= 18.5 && fIndice < 25)
    {
        cout << "Peso normal" << endl;
    }
    else if (fIndice >= 25 && fIndice < 30)
    {
        cout << "Acima do peso" << endl;
    }
    else if (fIndice >= 30 && fIndice < 35)
    {
        cout << "Obesidade" << endl;
    }
    else if (fIndice >= 35 && fIndice < 40)
    {
        cout << "Obesidade severa" << endl;
    }
    else
    {
        cout << "Obesidade mórbida" << endl;
    }
    
    cout << "Seu IMC é:" << endl;
    return fIndice;
}

int main() {
    float fMassa, fAltura;
    
    cout << "Qual a sua massa?" << endl;
    cin >> fMassa;
    
    cout << "Qual a sua altura(metros)?" << endl;
    cin>> fAltura;
    
    cout << calculo_imc(fMassa, fAltura) << endl;
    
    return 0;
}
