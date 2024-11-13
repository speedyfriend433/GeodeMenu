#ifdef QOLMOD_CUSTOM_KEYS_SETTING

#pragma once

#include "../Layers/SillyBaseLayer.h"
#include "SetBindSetting.hpp"

class KeyInfoPopup : public SillyBaseLayer
{
    public:
        int key;
        SetBindValue* value;
        SetBindNode* node;

        static KeyInfoPopup* createWithKeyAndBind(int key, SetBindNode* node);

        void onRemove(CCObject* sender);

        virtual void customSetup();
};

#endif