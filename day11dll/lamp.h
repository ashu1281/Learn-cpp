#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)

#else
#define EXPIMP _declspec(dllimport)
#endif

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
    LampState GetState();

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