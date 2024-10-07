#include <iostream>

using namespace std;

int main()
{
    int num, aux;

    do{
        cout << "Tabuada do numero: ";
        cin >> num;

        for(aux=1; aux<=10 ; aux++)
            cout<<num<<" * "<<aux<<" = " << num*aux <<endl;
        cout<<endl;
    }while(num);

    return 0;
}
