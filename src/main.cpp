#include "bn_core.h"
#include "title.cpp"

int main()
{
    bn::core::init();
    while(true)
    {
        TitleStart();
        bn::core::update();
    }
}
