#ifndef _SCREEN_H_
#define _SCREEN_H_
#include <string>
class Screen {
    friend class Window_mgr;
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd);
    Screen(pos ht, pos wd, char c);
    char get() const;
    char get(pos ht, pos wd) const;
    Screen &move (pos r, pos c);
    void some_member() const;
    Screen &set (char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string contents;    
    mutable size_t access_ctr;
    void do_display(std::ostream &os) const;
};
#endif