#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> wektor;

    for (Human& human : people) {
    human.birthday();

    if (human.isMonster() == true) {
        wektor.emplace_back('n');
    }
    else {
        wektor.emplace_back('y');
    }
    
}

std::reverse(wektor.begin(), wektor.end());
    // Twoja implementacja tutaj
return wektor;
}
