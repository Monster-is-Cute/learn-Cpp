/*
版本：很多版
说明：①这次不用常规的IO stream，改用c语言中的stdio，相比较输出更加方便 ②感谢不知道是谁提供了如上思路
日期：2016-09-09
时间：00:57
作者：Yuchen Wu(monsteriscute@yahoo.com)
*/

#include <cstdio>                     // printf 和 scanf需要
using namespace std;
#include <cmath>                             // sqrt开方需要
int main() {
  float a, b, c, d;                                  // d代表∆
  scanf("%f%f%f", &a, &b, &c);            // %f代表输入的数据类型为float，&必须要有
  d = b * b - 4 * a * c;
  
  // 处理根的情况
  if (d < 0)
    printf("WU JIE");
  else if (d == 0)
    printf("x1=x2=%12.4f", -b / 2 / a); // 12.4代表12字符的宽度，4位小数
  else {
    c = (-b - sqrt(d)) / 2 / a;
    b = (-b + sqrt(d)) / 2 / a;
    
    // 一大一小
    if (c > b)
      printf("x1=%12.4f,x2=%12.4f", b, c);
    else
      printf("x1=%12.4f,x2=%12.4f", c, b);
  }
  return 0;
}