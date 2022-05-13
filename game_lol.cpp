#include <iostream>

using namespace std;

class Player{
  
private:
    int age;
    int ID;

    
    int X;
    int Y;

public:
    string Name;
    string Nickname;
    

    Player(string nm, string nckname)
    {
        Name = nm;
        Nickname = nckname;
    }


    void setPosition(int x, int y)
    {
        X = x;
        Y = y;
    }

    int GetPositionX()
    {
        return X;
    }
    int GetPositionY()
    {
        return Y;
    }

// This function show the current position
    void showPosition()
    {
        for(int i=0;i<X;i++)
        {
            for(int j=0;j<X;j++)
            {
                cout << " :) ";
            }
            cout << "\n :( \n";
        }
    }
};


int main()
{
    Player player1 = Player("Cid", "Cidip");
    Player player2 = Player("Juli", "SlipLix");

   player1.setPosition(10, 20);
   player2.setPosition(5, 5);

   player1.showPosition();
   return 0;
}

