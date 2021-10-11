#include <iostream>
#include <string>
#include <vector>

class RadioButton {
 private:
   std::string button_text;
   bool selection;
 public:
   RadioButton(std::string x);

   void SetText(std::string x) {
     this->button_text = x;
   }

   std::string GetText() {
     return this->button_text;
   }

   void SetSelected(bool select) {
     if(select) {
       this->selection = true;
     } else {
       this->selection = false;
     }
   }

   bool IsSelected() {
     return this->selection;
   }
};

RadioButton::RadioButton(std::string x) {
     SetSelected(false);
     SetText(x);
}
void RadioButton::SetText(std::string x) {
     this->button_text = x;
}
// Helper Functions
void SelectRadioButton(std::vector<RadioButton> buttons, int num) {
  for(int i = 0; i < buttons.size(); i++) {
    buttons[i].SetSelected(false);
  }
  buttons[num].SetSelected(true);
}

void PrintRadioButtons(const std::vector<RadioButton> x) {
  std::vector<RadioButton> buttons = x;
  for(int i = 0; i < buttons.size(); i++) {
    if(buttons[i].IsSelected()) {
      std::cout << "(*) ";
    } else {
      std::cout << "( ) ";
    }
    std::cout << buttons[i].GetText() << std::endl;
  }

  bool select = false;
  int index;
  for(int i = 0; buttons.size(); i++) {
    if(buttons[i].IsSelected()) {
      select = true;
      index = i;
    }
  }
  if(select) {
    std::cout << "The button at index " << index << " is selected" << std::endl;
  } else {
    std::cout << "No button selected" << std::endl;
  }
}

