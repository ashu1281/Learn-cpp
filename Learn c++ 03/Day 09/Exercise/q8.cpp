//Identifyand implement missing symbols in the following testing code.

#include <iostream>
#include <assert.h>
#include <ctime>
#include <cstdlib>



struct Matrix {
    size_t rows;
    size_t cols;
    int** data;
};

void MakeMatrix(size_t rows, size_t cols, Matrix* obj){
    obj->rows = rows;
    obj->cols = cols;
    obj->data = new int* [rows];
    for (size_t i = 0; i < rows; i++) {
        obj->data = new int* [cols];
    }

}


void FillMatrix(Matrix& obj) {
    srand(static_cast<unsigned int>(time(nullptr)));
    for (size_t i = 0; i < obj.rows; ++i) {
        for (size_t j = 0; j < obj.cols; ++j) {
            obj.data[i][j] = rand() % 10;
        }
    }
}

bool MultiplyMatrices(const Matrix& a, const Matrix& b, Matrix* result) {
    if (a.cols != b.rows) {
        return false;
    }
    MakeMatrix(a.rows, b.cols, result);
    for (size_t i = 0; i < a.rows; ++i) {
        for (size_t j = 0; j < b.cols; ++j) {
            int sum = 0;
            for (size_t k = 0; k < a.cols; ++k) {
                sum += a.data[i][k] * b.data[k][j];
            }
            result->data[i][j] = sum;
        }
    }
    return true;
}

void PrintMatrix(const Matrix& mat) {
    for (size_t i = 0; i < mat.rows; ++i) {
        for (size_t j = 0; j < mat.cols; ++j) {
            std::cout << mat.data[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void FreeMatrix(Matrix& mat) {
    for (size_t i = 0; i < mat.rows; ++i) {
        delete[] mat.data[i];
    }
    delete[] mat.data;
    mat.data = nullptr;
    mat.rows = 0;
    mat.cols = 0;
}


int main() {
    Matrix u{ 0, 0, nullptr }, v{ 0, 0, nullptr };
    Matrix w{ 0, 0 , nullptr };
    MakeMatrix(/*rows*/2, /*cols*/2, &u);
    FillMatrix(u);
    MakeMatrix(2, 1, &v);
    FillMatrix(v);
    bool succeeded = MultiplyMatrices(u, v, &w);
    if (succeeded) {
        PrintMatrix(u);
        PrintMatrix(v);
        for (size_t i = 0; i < w.rows; ++i) {
            for (size_t j = 0; j < w.cols; ++j) {
                std::cout << w.data[i][j] << " " << std::flush;
            }
            std::cout << std::endl;
        }
    }
    FreeMatrix(u);
    FreeMatrix(v);
    FreeMatrix(w);
    _CrtDumpMemoryLeaks(); // should report no leakages
}
// MakeMatrix prepares matrix object ready with relevant dynamic allocations
// FillMatrix populates matrix with random values between 0 to 9
// MultiplyMatrices multiplies two matrices and stores result in third matrix
// PrintMatrix prints matrix in grid form
// FreeMatrix releases all memory allocations which was allocated in MakeMatrix
