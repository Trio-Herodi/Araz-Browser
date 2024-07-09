#include <gtk/gtk.h>

// Called when the application is activated
static void activate(GtkApplication* app, gpointer user_data) {
    GtkWidget *window;

    // Create a new window
    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Hello, GTK!");
    gtk_window_set_default_size(GTK_WINDOW(window), 1200, 800);

    // Show the window
    gtk_widget_show_all(window);
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    // Create a new GTK application
    app = gtk_application_new("org.example.gtkdemo", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    // Run the application
    status = g_application_run(G_APPLICATION(app), argc, argv);

    // Cleanup
    g_object_unref(app);

    return status;
}
