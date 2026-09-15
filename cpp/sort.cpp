#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <windows.h> // 1. 引入 windows.h 头文件

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8); 
    const int N = 10000;
    std::vector<int> data(N);
    
    // 生成 10,000 个随机数
    srand(time(0));
    for (int i = 0; i < N; i++) {
        data[i] = rand() % 100000;
    }

    std::cout << "C++ 冒泡排序开始..." << std::endl;
    
    auto start = std::chrono::high_resolution_clock::now();
    bubbleSort(data);
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double> diff = end - start;
    std::cout << "C++ 运行时间: " << diff.count() << " 秒" << std::endl;

    return 0;
}
