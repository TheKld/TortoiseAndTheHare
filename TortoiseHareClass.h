//Tortoise and The Hare

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <time.h>
using namespace std;

int r = 0;
int q = 0;

void countUpHare()
{
    r++ ;
}

void countUpTort()
{
    q++ ;
}

class TortHare {

public:

    int Laps = 0;
    
    TortHare()
    {
        cout<<"Bang!" << " They're Off!!!"<<endl;
        srand( time( 0 ) );
    }
    
    ~TortHare()
    {
        if (Tortoise < Hare)
        {
            cout<<"Hare Wins. Yuch"<<endl;
        }
        
        else if(Tortoise > Hare)
        {
            cout<<"Tortoise Wins. Yayy"<<endl;
        }
        
        else if(Tortoise == Hare)
        {
            cout<<"It's A Tie"<<endl;
        }
        
        cout << "After " << Laps << " moves" <<endl;
        
       if(Tortoise >= 70)
       {
           countUpTort();
       }
        
        if(Hare >= 70)
        {
            countUpHare();
        }
    }
    
    int getTortoise()
    {
        return Tortoise;
    }
    
    int getHare()
    {
        return Hare;
    }
    
    int getRaceEnd()
    {
        return raceEnd;
    }

    
    void moveTortoise()
    {
        int x = 1 + rand() % 10;
        
        if (x >= 1 && x <= 5)
        {
            Tortoise += 3;
        }
        else if (x <= 7 && x >= 6)
        {
            Tortoise -= 6;
        }
        else if (x <=10 && x >= 8)
        {
            Tortoise += 1;
        }
        if (Tortoise < 1 )
        {
            Tortoise = 1;
        }
    }
    
    void moveHare()
    {
        int x = 1 + rand() % 10;
        
        if (x >= 1 && x <= 2)
        {
            Hare += 0;
        }
        
        else if (x <= 4 && x >= 3)
        {
            Hare += 9;
        }
        else if (x <=5 && x >= 5)
        {
            Hare -= 12;
        }
        else if (x <= 8 && x >=6)
        {
            Hare += 1;
        }
        else if (x <= 10 && x >= 9)
        {
            Hare -= 2;
        }
        
        if (Hare < 1 )
        {
            Hare = 1;
        }
        
    }
  
    void positions(const int c, const int d)
    {
        char dash = '-';
        
        for ( int i = 0; i < 100; i++ )
        {
            map[i] = dash;
        }
        
        if ( c == d )
        {
            map[Tortoise] = "!X!";
            
            for(int k = 0; k < 70; k++)
            {
                cout << map[k];
            }
        }
        else
        {
            map[Tortoise] = 'T';
            map[Hare] = 'H';
            
            for(int k = 0; k < 70; k++)
            {
                cout << map[k];
            }
        }
        
        cout << "\n";
        
    }

private:
    
    int Tortoise = 1, Hare = 1;
    const int raceEnd = 70;
    string map[100];
};

