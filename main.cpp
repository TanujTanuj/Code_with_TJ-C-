#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    char ope;

    cout<<"Enter a value";
    cin>>a;

    cout<<"Enter b value";
    cin>>b;

    cout<<"Enter operation ( * / + - % )";
    cin>>ope;

    if(ope == '+'){

        c = a+b;
        cout<< c;


    }
    if(ope == '*'){

        c = a*b;
        cout<< c;

}
    if(ope == '/'){

        c = a/b;
        cout<< c;
    }

    if(ope == '%'){

        c = a%b;
        cout<< c;
    }

    return 0;

}




