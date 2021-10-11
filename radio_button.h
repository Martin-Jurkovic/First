#include <iostream>
#include <string>
#include <vector>

#ifndef RADIO_BUTTON_H
#define RADIO_BUTTON_H

class RadioButton {
 private:
   std::string button_text;
   bool selection;
 public:
   RadioButton(std::string x);
   void SetText(std::string x);
   std::string GetText();
   void SetSelected(bool select);
   bool IsSelected();
};

RadioButton::RadioButton(std::string);
void RadioButton::SetText(std::string x);

void SelectRadioButton(std::vector<RadioButton> buttons, int num);
void PrintRadioButtons(const std::vector<RadioButton> x);
#endif
// RADIO_BUTTON_H
