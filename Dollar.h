#pragma once    // 二重読み込みを防止

class Dollar {
public:
    int amount;                              // 型を用意（int）
    Dollar(int amount) : amount(amount) {}   // コンストラクタ
    Dollar times(int multiplier) {
        return Dollar(amount * multiplier);
    }
};

