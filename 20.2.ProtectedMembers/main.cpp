#include <iostream>
#include "player.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    Player p1("Football","Adam","Smith");
    std::cout << "Player : " << p1 << std::endl;
    //p1.first_name = "Harry"; // protected members are not accessible from outside, accessible from derived classes
                               // so there will be compiler error here.
    
    return 0;
}