// ライブラリを読み込むためのコード
#include <NintendoSwitchControlLibrary.h>

// マイコンのセット時に1度だけ行われる処理
void setup(){
    // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
    pushButton(Button::A, 100, 5);
}

// ここに記述した内容がループされ続ける
void loop(){
    //pushButton(Button::R, 100);
    pushButton(Button::A, 100);
    //(Hat::RIGHT, 200);
    //pushHat(Hat::DOWN, 200);
    //pushHat(Hat::LEFT, 200);
    //pushHat(Hat::UP, 200);
    //pushButton(Button::X, 600);
}
