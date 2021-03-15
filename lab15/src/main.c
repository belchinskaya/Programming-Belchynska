#include "lib.h"

int main() {





//FILE * file = fopen("/home/kate/Programming-Belchynska/lab15/InstrumentsOut.txt", "r");
    struct Instrument ** instruments = malloc(INSTRUMENT_COUNT * sizeof(struct Instrument* ));
    for (int i = 0; i < 200; i++) {
        *(instruments + i) = malloc(sizeof(struct Instrument));
    }
//    struct Bow ** bows = malloc(6 * sizeof(struct Bow ));
//    for (int i = 0; i < 200; i++) {
//        *(bows + i) = malloc(sizeof(struct Bow));
//    }
    enum Material* material = malloc(sizeof(enum Material));
    struct Bow* bow1 = malloc(sizeof(struct Bow));

    readFromFile(instruments, material);
    sortByYear(instruments);
    //deleteStructElement(instruments, bow1, material);
    //printInstrument(instruments, bows);
    printTheOldestInstrument(instruments, material);

    writeInFile(instruments, material);
    writeToBinaryFile(instruments, material);
    readFromBinary( instruments, material);



    free(material);
    free(instruments);
    free(bow1);
    return 0;
}
