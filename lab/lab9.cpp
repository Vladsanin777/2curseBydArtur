#include <iostream>
#include <cmath>
using namespace std;

double f(double x) { return sin(1/(x*x))/x; }

int main() {
    double a=1, b=2.5, eps=0.01, I1=0, I2=0, h;
    int n=1;
    
    h=(b-a)/n;
    for(int i=0;i<n;i++) I1+=f(a+(i+0.5)*h);
    I1*=h;
    
    do {
        n*=2;
        h=(b-a)/n;
        I2=0;
        for(int i=0;i<n;i++) I2+=f(a+(i+0.5)*h);
        I2*=h;
        if(fabs(I2-I1)<eps) break;
        I1=I2;
    } while(true);
    
    cout<<"Интеграл = "<<I2<<"\nРазбиений = "<<n<<endl;
    return 0;
}
