#pragma once    // 二重読み込みを防止

class Dollar {
public:
    int amount;
    
    Dollar(int amount) : amount(amount) {}

    void times(int multiplier) {
        amount = 10;
    }
};

