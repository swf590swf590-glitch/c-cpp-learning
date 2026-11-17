# C / C++ 学习记录

武汉科技大学 智能车辆工程 2026 级。为赤骥车队无人组及其他方向系统学习 C 与 C++，本仓库存放每课的练习代码——全部经编译运行验证后才收录。

## 进度

- [x] 第 0 课 · 指针前复习：数组遍历、传值调用
- [x] 第 1 课 · 指针基础：指针交换、判空后清零
- [x] 第 2 课 · 数组与指针、字符串：指针遍历数组、手写 strlen
- [ ] 第 3 课 · 结构体：传感器结构体数组（进行中）
- [ ] 第 4 课 · 动态内存：malloc / free
- [ ] 第 5 课 · C++ 起步：引用、vector、类与 STL

## 目录

| 目录 | 内容 |
| --- | --- |
| `lesson-00-review/` | `array_average_max.c` 数组求平均值与最大值；`swap_by_value.c` 传值版 swap（交换的只是副本） |
| `lesson-01-pointers/` | `swap_ptr_and_set_zero.c` 指针版 swap + `set_zero` 判空清零（含 `set_zero(NULL)` 不崩验证） |
| `lesson-02-arrays-and-strings/` | `pointer_array_sum_max.c` 只用指针遍历求和与最大值；`my_strlen.c` 不调用库函数手写 strlen |

## 编译运行

```bash
gcc -std=c11 -Wall -Wextra <文件>.c -o prog && ./prog
```
