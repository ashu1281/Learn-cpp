#pragma once

class CircularQueue {
private:
    int items[10], front, rear;

public:
    CircularQueue();
public:
    bool Empty();
    bool Full();

public:
    int Push(int x);

};