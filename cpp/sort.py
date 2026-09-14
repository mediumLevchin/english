import time
import random

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                # 交换元素
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

if __name__ == "__main__":
    # 生成 10,000 个随机数
    data = [random.randint(1, 100000) for _ in range(10000)]
    
    print("Python 冒泡排序开始...")
    start_time = time.time()
    bubble_sort(data)
    end_time = time.time()
    
    print(f"Python 运行时间: {end_time - start_time:.4f} 秒")
