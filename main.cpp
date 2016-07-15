#include <iostream>
#include "Widget.h"

using namespace std;

int main() {

    Widget *w = new Widget();

    w->name = "Le Fancy";
    w->description = "Quite a Fancy Widget";

    cout << w->name << ": " << w->description << endl;

    return 0;
}
