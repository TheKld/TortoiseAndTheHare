//
//  main.cpp
//  TortoiseHare
//
//  Created by Lamont D on 11/3/18.
//  Copyright © 2018 K9. All rights reserved.
//

#include "TortoiseHareClass.h"

//Tortoise and The Hare

int main()
{

////    for ( int o = 0; o < 100; o++)
////    {
        TortHare gameOne;
        cout << endl;
        while( gameOne.getTortoise() < gameOne.getRaceEnd() && gameOne.getHare() < gameOne.getRaceEnd() )
        {
            gameOne.moveTortoise();
            gameOne.moveHare();
            gameOne.positions(gameOne.getTortoise(), gameOne.getHare());
            gameOne.Laps++;
        }

        cout << "\n";
//    }

    cout << endl << "Tortoise won " << r/100 << "% of the time" << endl;
    cout << "Hare won " << q/100 << "% of the time" << endl;

//    TortHare wert[10];
//
//    for ( int o = 0; o < 10; o++)
//        {
//            while( wert[o].getTortoise() < wert[o].getRaceEnd() && wert[o].getHare() < wert[o].getRaceEnd() )
//                        {
//                            wert[o].moveTortoise();
//                            wert[o].moveHare();
//                            wert[o].positions(wert[o].getTortoise(), wert[o].getHare());
//                            wert[o].Laps++;
//                        }
//        }
//
    return 0;
}
