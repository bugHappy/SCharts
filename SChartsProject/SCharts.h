#pragma once
#include <core\SWnd.h>

SNSBEGIN

class SCharts :
    public SWindow
{
    DEF_SOBJECT(SWindow, L"scharts")

public:


protected:

    //�����б�
    SOUI_ATTRS_BEGIN()
    SOUI_ATTRS_END()

    //��Ϣӳ���б�
    SOUI_MSG_MAP_BEGIN()
    SOUI_MSG_MAP_END()
};

SNSEND
