//
// Copyright (c) 2018 potato-framework by Loïc Boutter (https://github.com/Lo-X/potato-framework)
//
// Everyone is permitted to copy and distribute verbatim or modified
// copies of this license document, and changing it is allowed as long
// as the name is changed.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
//
//  0. You just DO WHAT THE FUCK YOU WANT TO.
//

#ifndef CATEGORY_H
#define CATEGORY_H

namespace Category {
enum Type
{
    None           = 0,
    SoundEffect    = 1 << 0,
    ParticleSystem = 1 << 1
    //Player  = 1 << 2,
    // ...
    //MixedCategory        = Category1 | Category2,

};
}

#endif // CATEGORY_H
