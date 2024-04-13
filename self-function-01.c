//#include <stdio.h>
/**
 * 程序主入口函数
 * @param argc 参数个数
 * @param argv 参数值数组
 * @return 返回程序执行状态，0代表正常结束
 */
int main(int argc,int *argv[])
{
  // 初始化变量j为1
  int j = 1;
  // 循环遍历10次，每次将j递增1
  for(int i=0;i<10;i++){
    j += 1;
  }
  // 循环结束后，程序正常退出
  return 0;
}
