/* NetHack may be freely redistributed.  See license for details. */

#ifndef _nhwindow_h_
#define _nhwindow_h_

#include "menuitem.h"
#include <list>
#include <string>

class window;

class nhwindow
{
  public:
    typedef std::list<menuitem>::iterator item_iterator;

    nhwindow(int type);
    ~nhwindow();
    void add_menuitem(std::string str, bool preselected, void *identifier,
                      char accelerator, char group_accelerator, int glyph);
    void reset();

    int id;
    int type;
    int ending_type;
    std::string caption;
    window *impl;
    std::list<menuitem> items;
    bool has_objects;
};

nhwindow *vulture_get_nhwindow(int winid);

#endif
