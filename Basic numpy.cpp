#include <iostream>
#include <vector>
class Array {
private:
    std::vector<int> data;  
    int rows;
    int cols;
public:
    Array(int rows, int cols) : rows(rows), cols(cols), data(rows * cols, 0) {
    void fill(const std::vector<int>& values) {
        if (values.size() != data.size()) {
            std::cerr << "Error: Mismatch in number of elements." << std::endl;
            return;
        }
        data = values;
    }
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i * cols + j] << " ";
            }
            std::cout << std::endl;
        }
    }
    Array add(const Array& other) const {
        if (rows != other.rows || cols != other.cols) {
            std::cerr << "Error: Array dimensions do not match for addition." << std::endl;
            return *this;
        }
        Array result(rows, cols);
        for (int i = 0; i < data.size(); ++i) {
            result.data[i] = this->data[i] + other.data[i];
        }
        return result;
    }
    Array multiply(const Array& other) const {
        if (rows != other.rows || cols != other.cols
