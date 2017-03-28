#include <gtk/gtk.h>

 #include "MainWindow.h"

int main(int argc, char *argv[])
{
    auto application =
        Gtk::Application::create("com.sharedpointer.simple-gtkmm-app");

    auto refBuilder = Gtk::Builder::create();

    MainWindow* window = nullptr;

    refBuilder->add_from_file("main.glade");

    refBuilder->get_widget_derived("main", window);

    application->run(*window, argc, argv);

    delete window;

    return 0;
}
