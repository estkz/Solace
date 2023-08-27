#pragma once

// We create this namespace with all the functions used for setting up the imgui window
// The declared functions and variables down below can be accessed using the scope resolution operator '::'
// Example of usage: gui::
namespace gui
{
    // The width and height of the menu (in pixels)
    constexpr int WIDTH = 560;
    constexpr int HEIGHT = 400;

    // A boolean variable that determines whether the menu is set to open (true) or closed (false)
    bool isOpened = true;
}
