//
// Created by francesco
//    _______  __   _____  ___   _______         _______   ______   _____  ___   _______
//  |   __ "\|" \ (\"   \|"  \ /" _   "|       |   __ "\ /    " \ (\"   \|"  \ /" _   "|
//  (. |__) :)|  ||.\\   \    (: ( \___)       (. |__) :)/ ____  \|.\\   \    (: ( \___)
//  |:  ____/|:  ||: \.   \\  |\/ \            |:  ____/  /    ) :): \.   \\  |\/ \
//  (|  /    |.  ||.  \    \. |//  \ ___       (|  /  (: (____/ //|.  \    \. |//  \ ___
// /|__/ \   /\  |\    \    \ (:   _(  _|     /|__/ \  \        / |    \    \ (:   _(  _|
//(_______) (__\_|_)___|\____\)\_______)     (_______)  \"_____/   \___|\____\)\_______)
//

#pragma once

#include "thread/threads.hpp"
#include <semaphore.h>

struct pos_t{
    float x;
    float y;
    float z;
};
