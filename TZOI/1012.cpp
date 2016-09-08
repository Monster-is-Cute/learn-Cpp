/* 
   版本：忘记了
   说明：没啥好说的 
   日期：2016.09.08
   时间：22:55 
   作者：Yuchen Wu(MonsterisCute@yahoo.com) */

#include <iostream>
using namespace std;            // 初始化

int main() {
  int m;                        // 定义用于输入的整数m
  int sum = 0;                  // 定义n个数的和，并清零
  cin >> m;

  // 计算比较前n个数的和
  for (int n = 0; sum < m; ++n)
    sum += n;

  // 和大于等于m，则n-1个数的和小于m，但是注意，上一个for循环末尾其实隐藏着一个n+1
  cout << n - 2;
  return 0;
}
