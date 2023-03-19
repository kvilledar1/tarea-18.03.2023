
/*#include <iostream>
#include <iostream>
using namespace std;
int main ()
{
    int n,i;
    long double factorial; //representa numeros grandes
    cout <<"introduce un numero:";
    cin >>n;
    factorial=1;
    for(i=1;i<=n;i++)
        factorial =factorial *i;
    cout <<endl<<"factorial de "<<n
         <<"->"<<factorial <<endl;
    system("pause");


}*/

/*
 #include <iostream>
using namespace std;
int main (){
    int n,x= 0,y =1, z =1;
    cout << "ingrese el numero de la  cantidad hasta donde quiere llegar con la secuencia de fibonacci:"; //para diez digitos 45
    cin >> n;
    cout << "   1,";
    for (int i = 1; i <n; i++){
        z= x+y;                   //z=1+1
        cout << z << ", ";          //z= 2
        x= y;                     //x=1
        y= z;                     // y=2
    }

    return 0;


}*/

/*
#include <iostream>

using namespace std;

int main() {
    int num;
    bool es_primo = true;

    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num <= 1) {
        es_primo = false;
    } else if (num == 2) {
        es_primo = true;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                es_primo = false;
                break;
            }
        }
    }

    if (es_primo) {
        cout << num << " es un numero primo" << endl;
    } else {
        cout << num << " no es un numero primo" << endl;
    }

    return 0;
}
*/


/*
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numero;

    cout << "ingresen  un numero:"; cin >> numero;
    if (numero == 0){
        cout << "oye: el numero es cero";

    } else if (numero %2== 0) {
        cout << "el numero es par";
    }else{
        cout << "el numero es impar";

    }
    return 0;
}*/




/*
#include <iostream>
using namespace std;
int main()
{
    int multiplicacion, numero, a=1;
    cout<<"Ingresa el numero de la tabla : ";
    cin>>numero;
    cout<<"La tabla del "<<numero<<" es :"<<endl;
    do{
        multiplicacion = numero * a;
        cout<< numero <<" x "<< a <<" = "<< multiplicacion <<endl;
        a++;
    }
    while(a<=10);
}*/
