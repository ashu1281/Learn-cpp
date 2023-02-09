#pragma once

enum LampState {
    OffState,
    OnState,
};

class Lamp {
private:
    LampState m_state;

public:
    Lamp();
public:
    LampState GetState() const;

public:
    void SwitchOn();

    void SwitchOff();
};










//class Lamp {//always prefer paskal case for class, enum, struct.
//private:
//    LampState m_state;
//
//public:
//    Lamp() {
//        LampState m_state = OffState;
//    }
//
//public:
//    LampState GetState() {
//        return m_state;
//    }
//
//public:
//
//    void SwitchOn() {
//        m_state = OnState;
//
//    }
//
//    void SwitchOff() {
//        m_state = OffState;
//    }
//};