#include <iostream>
using namespace std;

class whiteloaf
{
public:
void Methodwhiteloaf(){
int q;
cout << "write quantity" << endl;
cin>>q;
cout<<q<<" "<<"white loaf" << endl; };
};



class Brownloaf
{
public:
void MethodBrownloaf(){
int q;
cout << "write quantity" << endl;
cin>>q;
cout<<q<<" "<<"Brown loaf" << endl; };
};



class Baguette
{
public:
void MethodBaguette(){
int q;
cout << "write quantity" << endl;
cin>>q;
cout<<q<<" "<<"Baguette" << endl; };
};


class whiteloafandBrownloaf
{

public:

void MethodwhiteloafandBrownloaf(){
int q1;
int q2;
cout<< "write quantity of white loaf" << endl;
cin>>q1;
cout << "write quantity of Brown loaf" << endl;
cin>>q2;
cout << q1<<" "<<"white loaf and"<<" "<< q2<<" "<<"Brown loaf" << endl; };
};


class whiteloafandBaguette
{
public:
void MethodwhiteloafandBaguette(){

int q1;
int q2;
cout<< "write quantity of white loaf" << endl;
cin>>q1;
cout << "write quantity of Baguette" << endl;
cin>>q2;
cout << q1<<" "<<"white loaf and"<<" "<< q2<<" "<<"Baguette" << endl; };
};


class BrownloafandBaguette
{
public:
void MethodBrownloafandBaguette(){
int q1;
int q2;
cout<< "write quantity of Brown loaf" << endl;
cin>>q1;
cout << "write quantity of Baguette" << endl;
cin>>q2;
cout << q1<<" "<<"Brown loaf and"<<" "<< q2<<" "<<"Baguette" << endl; };
};


class whiteloafandBrownloafandBaguette
{
public:
void MethodwhiteloafandBrownloafandBaguette(){
int q1;
int q2;
int q3;
cout<< "write quantity of white loaf" << endl;
cin>>q1;
cout << "write quantity of Brown loaf" << endl;
cin>>q2;
cout << "write quantity of Baguette" << endl;
cin>>q3;
cout << q1<<" "<<"white loaf ,"<<" "<< q2<<" "<<"Brown loaf and " << q3<<" "<<"Baguette"<< endl; };
};


class Facade{

public:
Facade(){

pOne = new whiteloaf();
pTwo = new Brownloaf();
pThree = new Baguette();
pfour = new whiteloafandBrownloaf();
pfive = new whiteloafandBaguette();
psix = new BrownloafandBaguette();
pseven = new whiteloafandBrownloafandBaguette();
}


void Method1(){
pOne->Methodwhiteloaf();

cout << "Thank you for choosing us " << endl;
}

void Method2() {
pTwo->MethodBrownloaf();

cout << "Thank you for choosing us" << endl;
}

void Method3() {
pThree->MethodBaguette();

cout << "Thank you for choosing us" << endl;
}

void Method4() {
pfour->MethodwhiteloafandBrownloaf();

cout << "Thank you for choosing us" << endl;
}

void Method5() {
pfive->MethodwhiteloafandBaguette();

cout << "Thank you for choosing us" << endl;
}

void Method6() {
psix->MethodBrownloafandBaguette();

cout << "Thank you for choosing us" << endl;
}

void Method7() {
pseven->MethodwhiteloafandBrownloafandBaguette();

cout << "Thank you for choosing us" << endl;
}

private:
whiteloaf *pOne;
Brownloaf *pTwo;
Baguette *pThree;
whiteloafandBrownloaf *pfour;
whiteloafandBaguette *pfive;
BrownloafandBaguette *psix;
whiteloafandBrownloafandBaguette *pseven;
};

int main(){
int num ;

Facade *pFacade = new Facade();
cout << "what you want" << endl;
cout<<"write 1 for white loaf"<<endl<<"write 2 for Brown loaf"<<endl<<"write 3 for Baguette"
<<endl<<"write 4 for white loaf and Brown loaf"<<endl<<"write 5 for white loaf and Baguette"<<endl<<"write 6 for Brown loaf and Baguette"
<<endl<<"write 7 for white loaf and Brown loaf and Baguette"<<endl;
cin >> num;
if (num==1)
{
    pFacade->Method1();
}
else if(num==2)
{
    pFacade->Method2();

}

else if(num==3)
{
    pFacade->Method3();
}

else if(num==4)
{
    pFacade->Method4();
}

else if(num==5)
{
    pFacade->Method5();
}

else if(num==6)
{
    pFacade->Method6();
}

else if(num==7)
{
    pFacade->Method7();
}

else
{

cout << "Please enter a correct number" << endl;

}

return 0;
}



