#ifndef MEMORY_H_
#define MEMORY_H_

#include <deque>
#include <map>
#include <QVector>
#include <QString>
#include "segment.h"
#include "process.h"

using std::map;
using std::deque;

class Memory
{
private:
    unsigned long size;
    deque<Segment *> *segments;
    QVector<Process *> *processes;
    map<Segment *, Process *> *segmentToProcess;

public:
    Memory(unsigned long size);
    deque<Segment *> *getSegments();
    QVector<Process *> *getProcesses();
    unsigned long getSize();
    map<Segment *, Process *> *getSegmentToProcess();
    QString getProcessName(Segment *segment);
};

#endif // MEMORY_H_
