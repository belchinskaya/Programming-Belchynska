#include "data.h"
#include <cstddef>
#include <string>



#pragma once
/**
 * Список інструментів
 */
class List {
    int count;
    Instrument **instrument;

public:
    List() : count(0) {

    }

    List(const List &copy) : count(copy.count) {
        //instrument = new Instrument [count];
        //for (int i = 0; i < count; ++i) {
        //   instrument[i] = new Instrument(*copy.instrument[i]);
        //}
    }


    virtual void readFromFile(string& fileName, Instrument& instrument);

    void readFromFile(string& fileName, Violin& violin);

    virtual Instrument &getInstrument(size_t index);

    virtual void addInstrument(Instrument &instrument1);

    virtual void removeInstrument(size_t pos);


    virtual void showInstrument(Violin& violin) ;


    virtual ~List() {
        //for (int i = 0; i < count; ++i) {
        //    delete instrument[i];
        //}
        //delete[] instrument;
    }

    Instrument& operator[](size_t i) const {

        if (i < count)  {  //throw std::exception(“index out of range”)
            return *instrument[i];
        }
    }



};