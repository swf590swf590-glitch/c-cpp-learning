# 编程学习记录

武汉科技大学 智能车辆工程 2026 级。本仓库收容 C / C++ 与 Python 两条学习线，全部代码经编译/运行验证后才收录，用于展示学习成果。

- C / C++ 线：服务于赤骥车队无人组等方向
- Python 线：服务于赤骥车队无人组 + 第十八届蓝桥杯 Python 大学 B 组（纯算法）

## C / C++ 进度

- [x] 第 0 课 · 指针前复习：数组遍历、传值调用
- [x] 第 1 课 · 指针基础：指针交换、判空后清零
- [x] 第 2 课 · 数组与指针、字符串：指针遍历数组、手写 strlen
- [x] 第 3 课 · 结构体：传感器结构体数组找最近者 + 指针清零
- [x] 第 4 课 · 动态内存：malloc 建数组、判空、free 后置 NULL
- [x] 综合小测 1 · 第 0—4 课混合：动态申请结构体数组找最近者 + 指针清零

## Python 进度

- [x] 第 1 课 · 输入输出 + 循环找最值：传感器找最近者（input/split/int + 擂主法，并列取 id 小者）
- [ ] 第 2 课 · 排序与计数
- [ ] 第 3 课 · 栈与队列 / BFS 雏形
- [ ] 第 4 课 · 枚举与数论填空打法
- [ ] 第 5 课 · 网格 BFS：无人车栅格地图最短路径

## 目录

| 目录 | 内容 |
| --- | --- |
| `lesson-00-review/` | C：第 0 课 |
| `lesson-01-pointers/` | C：第 1 课 |
| `lesson-02-arrays-and-strings/` | C：第 2 课 |
| `lesson-03-structs/` | C：第 3 课 |
| `lesson-04-dynamic-memory/` | C：第 4 课 |
| `review-test-01/` | C：综合小测 1 |
| `python/lesson-01-io-and-enumeration/` | Python：第 1 课 `nearest_sensor.py` 读入 n 个传感器、找距离最近者 |

## 运行

```bash
gcc -std=c11 -Wall -Wextra <文件>.c -o prog && ./prog
python3 <文件>.py < input.txt
```
