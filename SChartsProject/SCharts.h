#pragma once
#include <core\SWnd.h>

SNSBEGIN

class SCharts :
    public SWindow
{
    DEF_SOBJECT(SWindow, L"scharts")

public:


protected:

    //属性列表
    SOUI_ATTRS_BEGIN()
    SOUI_ATTRS_END()

    //消息映射列表
    SOUI_MSG_MAP_BEGIN()
    SOUI_MSG_MAP_END()
};

SNSEND
