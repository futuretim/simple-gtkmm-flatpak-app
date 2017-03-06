#include <gtkmm.h>

class MainWindow : public Gtk::Window 
{
    
protected:
    Glib::RefPtr<Gtk::Builder> builder;

public:
    MainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);

};