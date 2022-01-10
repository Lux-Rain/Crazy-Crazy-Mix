#include <bn_core.h>
#include <scene.h>

cc::scene::Scene title;

void Update(){
    while (title.isActive)
    {
        bn::core::update();
    }
}

void TitleStart(){
    title.isActive = true;
    Update();
}