#include <cstddef>
#include <cstdlib>

class Sensor {
    int* data_;
public:
    Sensor(int n) {
        data_ = (int*)malloc(n * sizeof(int));
    }
    int read() {
        int* ptr = NULL;
        return *(int*)0x2000;
    }
};
