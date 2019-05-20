#ifndef _WINDOWMGR_H_
#define _WINDOWMGR_H_
#include <vector>
#include "Screen.h"
class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};
#endif