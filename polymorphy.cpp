#include <iostream>
using namespace std;

class seseorang
{
public :
    //virtual void pesan() = 0;
    virutal void pesan()
    {
        cout << "Pesan dari seseorang" << endl;
    }
};

class lia : public seseorang
{
public:
    void pesan()
    {
        cout << "Pesan dari Joko" << endl;
    }
};

class lia : public seseorang
{
public:
   void pesan()
   {
       cout << "Pesan dari Lia" << endl;
   }
};

int main()
{
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan()
    obyek = &b;
}