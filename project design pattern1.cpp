#include <iostream>
using namespace std;

class whiteloaf
{
public:
void Methodwhiteloaf(){ cout << "white loaf" << endl; };
};



class Brownloaf
{
public:
void MethodBrownloaf(){ cout << "Brown loaf" << endl; };
};



class Baguette
{
public:
void MethodBaguette(){ cout << "Baguette " << endl; }
};





class Facade{

public:
Facade(){

pOne = new whiteloaf();
pTwo = new Brownloaf();
pThree = new Baguette();
}


void Method1(){
cout << "Thank you for choosing us " << endl;
pOne->Methodwhiteloaf();
}

void Method2() {
cout << "Thank you for choosing us" << endl;
pTwo->MethodBrownloaf();
}

void Method3() {
cout << "Thank you for choosing us" << endl;
pThree->MethodBaguette();
}

private:
whiteloaf *pOne;
Brownloaf *pTwo;
Baguette *pThree;
};

int main(){
int num ;
Facade *pFacade = new Facade();
cout << "what you want" << endl;
cout<<"write 1 for white loaf"<<endl<<"write 2 for Brown loaf"<<endl<<"write 3 for Baguette" <<endl;
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

else
{

cout << "Please enter a correct number" << endl;

}

return 0;
}



