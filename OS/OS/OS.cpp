﻿#include "UIcontrollerHEAD.h"
#include "inputcontroller.h"
int main()
{
    string name;
    setlocale(0, "rus");
    UIcontroller uicontroller;
    uicontroller.Print(name);
    vector<string> s{ "1","1", "1", "1", "1" }; 
    uicontroller.PrintMas(s);
    InputController g;
    cout << g.SaveInput("str", "Name");
    vector<string> list{ "stas" , "oleg" , "vlad" };
    int f = inputcontroller.ChooseInput(list);

     



}

