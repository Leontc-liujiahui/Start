// #include <stdio.h>
// int main()
// {
//     printf("A\b");
//     return 0;
// }

//计算整数求和
// #include <stdio.h>
// int main()
// {
//     int arr[10]={0};
//     int i=0;
//     for (i=0;i<10;i++)
//     {
//         arr[i]=i;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b,sum;
//     scanf("%d %d",&a,&b);
//     sum=a+b;
//     printf("%d\n",sum);
//     return 0;
// }

//最简单的递归函数
// #include <stdio.h>
// int main()
// {
//     printf("hehe\n");
//     main();
//     return 0;
// }

//阶乘的递归
// int Fact(int n)
// {
//     if (n==0) return 1;
//     else return n*Fact(n-1);
// }
// #include <stdio.h>
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int ret=Fact(n);
//     printf("%d\n",ret);
//     return 0;
// }

//顺序打印整数每一位
// #include <stdio.h>
// void Print(int num)
// {
//     if (num>9)
//     {
//         Print(num/10);
//     }
//     printf("%d ",num%10);
// }

// int main()
// {
//     int num=0;
//     scanf("%d",&num);
//     Print(num);
//     return 0;
// }

//esp,ebp用于维护函数栈帧

//求第n个斐波那契数

// #include <stdio.h>
// int main()
// {
//     int x,y;
//     scanf("%d",&x);
//     if (x>0)
//     {
//         printf("y=%d\n",1);
//     }
//     else if (x==0)
//     {
//         printf("y=%d\n",0);
//     }
//     else printf("y=%d\n",-1);
//     return 0;
// }

//P-14.4
// #include <stdio.h>
// int main()
// {
//     printf("Hello World\n");
//     return 0;
// }

//P-14.5
// #include <stdio.h>
// int main()
// {
//     printf("*******\n");
//     printf(" *******\n");
//     printf("  *******\n");
//     printf("   *******\n");
//     return 0;
// }

//P-14.6
// #include <stdio.h>

// void Max(int x,int y,int z)
// {
//     int max=0;
//     if (x>y)
//     {
//        max=x; 
//     }
//     else max=y;
//     if (z>max)
//     {
//         max=z;
//     }
//     printf("三个数中最大的是%d\n",max);
// }

// int main()
// {
//     int a,b,c;
//     printf("请输入数字：");
//     scanf("%d %d %d",&a,&b,&c);
//     Max(a,b,c);
//     return 0;
// }

//P-80.1
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double p,r;
//     int n=0;
//     n=10;
//     r=0.07;
//     double result;
//     result=pow(1+r,n);
//     printf("%lf\n",result);
//     return 0;
// }

//函数的迭代
//计算阶乘
// #include <stdio.h>
// int Fact(int n)
// {
//     int i=0;
//     int ret=1;
//     for (i=1;i<=n;i++)
//     {
//         ret=ret*i;
//     }
//     return ret;
// }
// int main()
// {
//     int n=0;
//     printf("请输入要计算的数字:");
//     scanf("%d",&n);
//     int ret=Fact(n);
//     printf("计算结果是%d\n",ret);
//     return 0;
// }

//计算第n个斐波那契数
// #include <stdio.h>
// int Fib(int n)
// {
//     if (n<=2)
//     return 1;
//     else
//     return Fib(n-1)+Fib(n-2);
// }
// int main()
// {
//     while (1)
//     {
//     int n=0;
//     printf("请输入数字：");
//     scanf("%d",&n);
//     int ret=Fib(n);
//     printf("结果是%d\n",ret);
//     return 0;
//     }
// }

//用循环代替递归求解阶乘
// #include <stdio.h>
// int Fib(int n)
// {
//     int a=1;
//     int b=1;
//     int c=1;
//     while (n>=3)
//     {
    //酱油和醋互换
//         c=a+b;
//         a=b;
//         b=c;
//         n--;
//     }
//     return c;
// }
// int main()
// {
//     int n=0;
//     printf("请输入要计算的数：");
//     scanf("%d",&n);
//     int ret=Fib(n);
//     printf("计算的结果是%d\n",ret);
//     return 0;
// }

// void test(int n)
// {
//     if (n<=10000)
//     {
//         test (n+1);
//     }
// }
// int main()
// {
//     test (1);
//     return 0;
// }

//青蛙跳台阶问题
// #include <stdio.h>
// int Jump(int n)
// {
//     if (n==1)
//     return 1;
//     if (n==2)
//     return 2;
//     if (n>=3)
//     return Jump(n-1)+Jump(n-2);
// }
// int main()
// {
//     while (1)
//     {
//     int n=0;
//     printf("请输入台阶数：");
//     scanf("%d",&n);
//     int ret=Jump(n);
//     printf("总共有%d种跳法\n",ret);
//     }
//     return 0;
// }

// #include <stdio.h>
// int Jump(int n)
// {
//     if (n==1)
//     return 1;
//     if (n==2)
//     return 2;
//     if (n>=3)
//     return Jump (n-1)+Jump(n-2);
// }
// int main()
// {
//     while (1)
//     {
//     int n=0;
//     printf("请输入要上的台阶数：");
//     scanf("%d",&n);
//     int ret=Jump(n);
//     printf("总共有%d种上法\n",ret);
//     }
//     return 0;
// }

//问题描述：总共有n阶楼梯，一次能上一阶或者两阶，请问一共有多少种上法
//问题分析：利用函数递归，自定义一个Jump（）函数，表示一共有多少种上法
// #include <stdio.h>
// int Jump(n)
//如果只有一级台阶，则只有一种解法
//如果有两级台阶，则有两种解法
//如果n>=3，则有Jump（n）种解法
//开始上一级，则有Jump(n-1)种解法，开始上两级，则有Jump(n-2)种解法，总计则是Jump(n-1)+Jump(n-2)种解法
//利用函数递归和if语句解决
// {
//     if (n==1)
//     return  1;
//     if (n==2)
//     return 2;
//     if (n>=3)
//     return Jump(n-1)+Jump(n-2);
// }
// int main()
// {
//     while (1)
//     {
//     int n=0;
//     printf("请输入台阶数：");
//     scanf("%d",&n);
//     int ret=Jump(n);
//     printf("一共有%d种解法\n",ret);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h> //引用pow函数的头文件
// int main()
// {
//     while (1)
//     {
//     //while 循环是为了无限使用
//     //比如你每次使用后都要重新运行一下才能重新开始
//     //但while 循环可以让你一直运行下去
//     float x,y,r,a,b;
//     double m,n;
//     //以下三组printf、scanf都是为了输入有关数据
//     printf("请输入圆心的坐标：");
//     scanf("%f %f",&a,&b);
//     printf("请输入圆的半径：");
//     scanf("%f",&r);
//     printf("请输入要检验的坐标：");
//     scanf("%f %f",&x,&y);
//     m=pow(x-a,2); //表示平方的函数
//     n=pow(y-b,2);
//     //用if分支语句表示三种情况
//     if (m+n>r*r)
//     {
//         printf("该点在圆外\n");
//     }
//     else if (m+n==r*r) //注意等于不能写成赋值
//     {
//         printf("该点在圆上\n");
//     }
//     else printf("该点在圆内\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double a,b,c,dis; //a,b分别表示点的横纵坐标，dis表示点到圆心的距离
//     scanf("%lf %lf",&a,&b); //因为是双精度浮点数，所以使用%lf
//     c=pow(a-2,2)+pow(b-2,2); //这个地方引用了pow函数，所以需要库函数math.h
//     dis=sqrt(c); //这个地方就是解析几何中学的实际条件
//     if (dis>=0&&dis<=1) //用if分支循环分别表示不同的情况
//     //但这其实有三种情况，应该用if , else if , else来表示
//     //但你给的参考答案把圆内和圆上合为了一种
//     printf("该点在圆上或者圆内\n");
//     else printf("该点在圆外\n");
//     return 0;
// }

//计算阶乘
// #include <stdio.h>
// int Fact(int n)
// {
//     int i=1;
//     int back=1;
//     for (i=1;i<=n;i++)
//     {
//         back*=i;
//     }
//     return back;
// }
// int main()
// {
//     while (2)
//     {
//     int n=0;
//     printf("请输入要计算的阶乘数：");
//     scanf("%d",&n);
//     int ret=Fact(n);
//     printf("计算的结果是%d\n",ret);
//     }
//     return 0;
// }

//P-35.4
//酱油和醋互换定义一个中间的存储 mid
//mid=a 将a赋给mid
//a=b 等于将醋换给酱油
//b=mid 等于将酱油换成醋

//计算累加
// #include <stdio.h>
// int Cum(int n)
// {
//     int i=1;
//     int back=0;
//     for (i=1;i<=n;i++)
//     {
//         back+=i;
//     }
//     return back;
// }
// int main()
// {
//     while (1)
//     {
//     int n=0;
//     printf("请输入要累加的数字：");
//     scanf("%d",&n);
//     int ret=Cum(n); //cumulative 累加函数
//     printf("累加的结果是%d\n",ret);
//     }
//     return 0;
// }

//P-35.4.5
// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//     int n=0;
//     printf("请输入数字：");
//     scanf("%d",&n);
//     if (n%3==0&&n%5==0)
//     {
//         printf("该数能被3和5整除\n");
//     }
//     else printf("该数不能同时被3和5整除\n");
//     }
//     return 0;
// }

//利用循环结构计算学生三门课的总成绩
// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//     float Ch,math,Eng,total;
//     printf("请输入学生三科的成绩");
//     scanf("%f %f %f",&Ch,&math,&Eng);
//     total=Ch+math+Eng;
//     printf("该学生的总成绩是%.1f\n",total);
//     }
//     return 0;
//}

// #include <stdio.h>
// int max(int x,int y,int z)
// {
//     int max;
//     if (x>y)
//     {
//         max=x;
//     }
//     else max=y;
//     if (z>max)
//     {
//         max=z;
//     }
//     return max;
// }
// int main ()
// {
//     int a,b,c,ret;
//     printf("请输入三个整数：");
//     scanf("%d %d %d",&a,&b,&c);
//     ret=max(a,b,c);
//     printf("最大的数是%d\n",ret);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c1,c2,c3,c4,c5;
//     c1='C';
//     c2='h';
//     c3='i';
//     c4='n';
//     c5='a';
//     c1=c1+4;
//     c2=c2+4;
//     c3=c3+4;
//     c4=c4+4;
//     c5=c5+4;
//     putchar (c1);
//     putchar (c2);
//     putchar (c3);
//     putchar (c4);
//     putchar (c5);
//     putchar ('\n');
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("%p\n",&a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a=10;
//     int * pa=&a;
//     printf("%p\n",pa);
//     return 0;
// }

// #include <stdio.h>
// int  main()
// {
//     int i=10;
//     int *p;
//     p=&i;
//     printf("%p\n",&i);
//     printf("%p\n",&*p);
//     return 0;
// }
//*p与i是相同的两个变量，两者并没有开辟两处空间，而是存储于同一空间

//牛客网作业
//题目要求：给定两个整数a,b（0<a,b<10000），计算a/b的整数商和余数
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("请输入两个整数的值：");
//     scanf("%d %d",&a,&b);
//     printf("两数的商为%d\n",a/b);
//     printf("两数的余数是%d\n",a%b);
//     return 0;
// }

//题目要求：你是天才吗，如果智商大于等于140，则输出Genius
// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//     int iq;
//     printf("请输入你的智商值：");
//     scanf("%d",&iq);
//     if (iq>=140)
//     printf("Genius\n");
//     }
//     return 0;
// }

//题目要求：某人想知道从键盘输入的两个数的大小关系
// #include <stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("请输入两个数的值：");
//     while (scanf("%d %d",&num1,&num2)!=EOF)
//     {
//         if (num1>num2)
//         printf("%d>%d\n",num1,num2);
//         else if (num1<num2)
//         printf("%d<%d\n",num1,num2);
//         else printf("%d=%d\n",num1,num2);
//     }
//     return 0;
// }

//题目要求：判断一个数能否被5整除
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("请输入一个数：");
//     scanf("%d",&num);
//     if (num%5==0) printf("Yes\n");
//     else printf("No\n");
// }

//题目要求：打印图案
//解法1
// #include <stdio.h>
// int main()
// {
//     int n;
//     while (1)
//     {
//         printf("请输入数字：");
//         scanf("%d",&n);
//         int i=0;
//         for (i=0;i<n;i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//题目要求：将三个整数按从大到小的顺序输出
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("请输入三个整数：");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a<b)
//     {
//         int tmp=a;
//         a=b;
//         b=tmp;
//         //即酱油换醋模型
//     }
//     if (a<c)
//     {
//         int tmp=a;
//         a=c;
//         c=tmp;
//     }
//     if (b<c)
//     {
//         int tmp=b;
//         b=c;
//         c=tmp;
//     }
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i=10;
//     while (i--);
//     printf("%d",i);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x,y,n=0;
//     for (x=1;x<=4;x++)
//     {
//         for (y=1;y<=5;y++,n++)
//         {
//             if (n%5==0&&n>0) printf("\n");
//             printf("%d ",x*y);
//         }
//     }
//     printf("\n");
//     return 0;
// }

//P-137.5
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int i,n=0;
//     double a,single,total=0;
//     //single=a*pow(10,n-1);
//     //pow函数是用double类型
//     printf("请输入要计算的数据:");
//     scanf("%lf %d",&a,&n);
//     for (i=0;i<n;i++)
//     {
//         single+=a*pow(10,i);
//         total+=single;
//     }
//     printf("计算的结果是%lf\n",total);
//     return 0;
// }

//P-137.7
// #include <stdio.h>
// int main()
// {
//     double total,sum1,sum2,sum3;
//     for (int i=1;i<=100;i++)
//     {
//         sum1+=i;
//         if (i<=50)
//         {
//             sum2+=i*i;
//         }
//         if (i<=10)
//         {
//             sum3+=1.0/i;
//         }
//     }
//     total=sum1+sum2+sum3;
//     printf("计算的结果是%lf\n",total);
//     return 0;
// }

//P-137.8
// #include <stdio.h>
// int main()
// {
//     //水仙花数是一个三位数，产生100-999；
//     int i=0;
//     for (i=100;i<=999;i++)
//     {
//         int a,b,c;
//         a=i%10;
//         b=(i/10)%10;
//         c=i/100;
//         int total;
//         total=a*a*a+b*b*b+c*c*c;
//         if (i==total) printf("%d ",i);
//     }
//     printf("\n");
//     return 0;
// }

//P-137.9
// #include <stdio.h>
// int main()
// {
//     for (int data=2;data<=1000;data++)
//     {
//         int factor_sum=0;
//         for (int factor=1;factor<=data/2;factor++)
//         {
//             if (data%factor==0)
//             {
//                 factor_sum+=factor;
//             }
//         }
//         if (factor_sum==data)
//         {
//             printf("%d its factors are ",data);
//             for (int factor=1;factor<=data/2;factor++)
//             {
//                 if (data%factor==0)
//                 {
//                     printf("%d ",factor);
//                 }
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     //从键盘上读取两个数，完成一定的计算
//     int n,i=0;
//     //由于存在平方数，所以a的数据类型需要使用double 
//     double a,single,total;
//     printf("请输入要计算的数据：");
//     scanf("%lf %d",&a,&n);
//     for  (i=0;i<n;i++)
//     {
//         single+=a*pow(10,i);
//         total+=single;
//     }
//     printf("计算的结果是%lf\n",total);
//     return 0;
// }

//本题产生了三个循环，所以开始需要使用for循环产生三个区间的数
//其中涉及到了小数，所以使用浮点数进行转换
// #include <stdio.h>
// int main()
// {
//     double i,sum1,sum2,sum3=0;
//     for (i=1;i<=100;i++)
//     {
//         sum1+=i;  //第一个部分的求和
//         if (i<=50)
//         {
//             sum2+=i*i;  //第二个部分的求和
//         }
//         if (i<=10)
//         {
//             sum3+=1.0/i;  //第三个部分的求和
//         }
//     }
//     double total=0;
//     total=sum1+sum2+sum3;
//     printf("计算的结果是%lf\n",total);
//     return 0;
// }

//输出100-999之间的水仙花数
// #include <stdio.h>
// int main()
// {
//     //产生100-999之间的三位数
//     int i=0;
//     for (i=100;i<=999;i++)
//     {
//         int a,b,c;
//         a=i%10;
//         b=(i/10)%10;
//         c=i/100;
//         if (i==a*a*a+b*b*b+c*c*c)
//         {
//             printf("该水仙花数为%d\n",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }




//三角形的判断
// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//     int a,b,c;
//     printf("请输入三条边的数据：");
//     scanf("%d %d %d",&a,&b,&c);
//     if ((a+b>c)&&(a+c>b)&&(b+c>a))
//     {
//         if (a==b&&b==c)
//         {
//             printf("Equilateral triangle\n");
//         }
//         else if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
//         {

//             printf("Isosceles triangle\n");
//         }
//         else printf("Ordinary triangle\n");
//     }
//     else printf("Not triangle\n");
//     }
//     return 0;
// }

//利用数组遍历求10个整数的最大值
// #include <stdio.h>
// int main()
// {
//     int i=0;
//     int arr[10]={0};
//     int max=0;
//     for (i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     max=arr[0];
//     for (i=1;i<10;i++)
//     {
//         if (max<arr[i])
//         max=arr[i];
//     }
//     printf("十个数中最大的是%d\n",max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i=0;
//     int  mark=0;
//     double sum=0;
//     for (i=1;i<=100;i++)
//     {
//         if (i%2==1)
//         {
//             mark=1;
//         }
//         else mark=-1;
//         sum+=1.0/(mark*i);
//     }
//     printf("以上结果的和是%lf\n",sum);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int year=0;
//     for (year=1000;year<=2000;year++)
//     {
//         if (year%4==0)
//         {
//             if (year!=0)
//             {
//                 printf("%d ",year);
//             }
//             if (year%400==0)
//             {
//                 printf("%d ",year);
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int count,i=0;
//     for (i=1;i<=100;i++)
//     {
//         //如果出现99，该怎么处理
//         if (i%10==9)
//         {
//             count++;
//         }
//         if (i/10==9)
//         {
//             count++;
//         }
//     }
//     printf("总共出现%d次\n",count);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b=0;
//     for (a=1,b=1;a<=100;a++)
//     {
//         if (b>=20)
//         break;
//         if (b%3==1)
//         {
//             b=b+3;
//             continue;
//         }
//         b=b-5;
//     }
//     printf("%d\n",a);
//     return 0;
// }

// #include <stdlib.h>
// #include <stdio.h>
// #include <time.h>
// void Game() 
// {
// 	int num = rand() % 100 + 1;//生成随机数
// 	int x = 0;
// 	while (1) {
// 		printf("请输入你猜的数字：");
// 		scanf("%d", &x);
// 		if (x == num) {
// 			printf("恭喜你，猜对了！\n");
// 			break;
// 		}
// 		else if (x < num) {
// 			printf("猜小了。\n");
// 		}
// 		else {
// 			printf("猜大了。\n");
// 		}
// 	}
// }
// void Menu()
// {
// 	printf("--------------------------------\n");
// 	printf("-----------   1. Play   --------\n");
// 	printf("-----------   0. Exit   --------\n");
// 	printf("--------------------------------\n");
// }

// int main() {
// 	int i = 0;
// 	srand((int)time(NULL));//随机数发生器初始化
// 	do {
// 		Menu();//调用菜单打印函数
// 		printf("请输入你的选择:");
// 		scanf("%d", &i);
// 		switch (i) {
// 		case 1:
// 			Game();//调用游戏函数
// 			break;
// 		case 0:
// 			printf("游戏结束!");
// 			break;
// 		default:
// 			printf("你的输入有误，请重新输入！\n");
// 			break;
// 		}
// 	} while (i);
// 	printf("再见！\n");
 
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i=100;
//     int j=0;
//     for (i=100;i<=200;i++)
//     {
//         for (j=2;j<i;j++)
//         {
//             if (i%j==0)
//             break;
//         }
//         if (i==j)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

//求最大公约数
// #include <stdio.h>
// int main()
// {
//     int m = 0;
//     int n = 0;
//     int tmp = 0;
//     printf("请输入两个整数: ");
//     scanf("%d %d", &m, &n);

//     while (tmp = m % n)
//     {
//         m = n;
//         n = tmp;
//     }
//     printf("最大公约数为:%d\n", n);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[]="hello bit";
//     printf("%d %d\n",sizeof(str),strlen(str));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10];
//     int i=0;
//     for (i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int sum=0;
//     for (i=0;i<10;i++)
//     {
//         sum+=arr[i];
//     }
//     double total=sum/10;
//     printf("这些整数的平均值是%lf\n",total);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
 
//     int a = 0;
//     while (scanf("%d", &a) == 1) {
//         int left = 1;
//         int right = a;
//         for (int i = 1; i <= a; i++) {
 
//             for (int j = 1; j <= a; j++) {
//                 if (j == left || j == right)
//                     printf("*");
//                 else printf(" ");
//             }
//             printf("\n");
//             left++;
//             right--;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
//  int a;
// int main()
// {
//     while(scanf("%d",&a)!=EOF)
//     {
//     int i,j;//行，列
//     for(i=1;i<=a;i++)
//     {
//         for(j=1;j<=a;j++)
//         {
//             if(i==1||j==1||i==a||j==a)//第一行，第一列，最后一行，最后一列
//             {
//                 printf("* ");
//             }
//             else 
//             {
//                printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     }
// return 0；
// }
 
// #include <stdio.h>
// int main()
// {
// 	int n, m;//n行m列
// 	scanf("%d %d", &n, &m);
// 	int i = 0;
// 	int j = 0;
// 	int arr[10][10] = {0};
// 	for (i = 0; i < n; i++)
// 	{
// 		for (j = 0; j <m; j++) {
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	for (i = 0; i < m; i++)
// 	{
// 		for (j = 0; j < n; j++) {
// 			printf("%d ", arr[j][i]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[10] = {0};
//     int i= 0 ;
//     for(i=0; i<10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(i=9; i>=0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int arr1[10] = {0};
// 	int arr2[10] = {0};
// 	int i = 0;
// 	printf("请输入10个数字:");
// 	for(i=0; i<10; i++)
// 	{
// 		scanf("%d", &arr1[i]);
// 	}
// 	printf("请输入10个数字:");
// 	for(i=0; i<10; i++)
// 	{
// 		scanf("%d", &arr2[i]);
// 	}
// 	//交换
// 	for(i=0; i<10; i++)
// 	{
// 		int tmp = arr1[i];
// 		arr1[i] = arr2[i];
// 		arr2[i] = tmp;
//     }	
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int m = 0;//数组a的元素个数
// 	int n = 0;//数组b的元素个数
// 	int i = 0;
// 	int j = 0;
// 	scanf("%d%d", &m, &n);
// 	int a[1000];//定义数组a
// 	int b[1000];//定义数组a

// 	//输入第一个数组
// 	for (i = 0; i < m; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}

// 	//输入第二个数组
// 	for (j = 0; j < n; j++)
// 	{
// 		scanf("%d", &b[j]);
// 	}
// 	i = 0;//再次初始化
// 	j = 0;
// 	while (i < m && j < n)
// 	{
// 		if (a[i]<b[j])
// 		{
// 			printf("%d ", a[i]);
// 			i++;
// 		}
// 		else
// 		{
// 			printf("%d ", b[j]);
// 			j++;
// 		}
// 	}
// 	if (i==m)//此时数组a的值都已经打印出来了
// 	{
// 		for(;  j< n; j++)//数组b剩下的元素想直接打印出来就行了
// 		{
// 			printf("%d ", b[j]);
// 		}
// 	}
// 	if (j == n)//此时数组b的值都已经打印出来了
// 	{
// 		for (; i < m; i++)//数组a剩下的元素想直接打印出来就行了
// 		{
// 			printf("%d ", a[i]);
// 		}
// 	}
// 	return 0;
// }

//定义指针变量
// #include <stdio.h>
// int main()
// {
// 	int a=10;
// 	int *pa=&a;
// 	printf("%p\n",pa);
// 	return 0;
// }
// *pa为解引用操作符

//指针类型的意义
// #include <stdio.h>
// int main()
// {
// 	int a=0x11223344;
// 	int *pa=&a;
// 	*pa=0;
// 	printf("%d\n",a);
// 	return 0;
// }

//冒泡排序法
// #include <stdio.h>
// int main()
// {
// 	int i,j,k=0;
// 	int arr[10]={0};
// 	printf("请输入十个数字：");
// 	for (i=0;i<10;i++)
// 	{
// 		scanf("%d",&arr[i]);
// 	}
// 	for (j=0;j<10;j++)
// 	{
// 		for (k=0;k<10-j;k++)
// 		{
// 			if (arr[k]>arr[k+1])
// 			{
// 				int tmp=0;
// 				tmp=arr[k];
// 				arr[k]=arr[k+1];
// 				arr[k+1]=tmp;
// 			}
// 		}
// 	}
// 	printf("最终的排序结果是:");
// 	for (k=0;k<10;k++)
// 	{
// 		printf("%d ",arr[k]);
// 	}
// 	printf("\n");
// 	return 0;
// }

//指针类型的意义
// #include <stdio.h>
// int main()
// {
// 	int a=0x11223344;
// 	int *pa=&a;
// 	*pa=0;
// 	printf("%d\n",a);
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int n=0x11223344;
// 	char *pc=&n;
// 	*pc=0;
// 	printf("%d\n",n);
// }
//指针变量类型决定了能访问多少字节的权限
//指针变量类型也决定了对指针变量进行加减操作时，指针向前或者向后走的距离
//泛型指针可以接受任意类型的地址，但无法进行解引用操作以及进行加减操作

//指针变量的操作：通过逐步递减实现整个变量的改变
// #include <stdio.h>
// int main()
// {
// 	int arr[10]={0};
// 	int *pa=&arr[0];
// 	int i=0;
// 	for (i=0;i<10;i++)
// 	{
// 		*pa=1;
// 		pa=pa+1;
// 	}
// 	for (i=0;i<10;i++)
// 	{
// 	  printf("%d ",arr[i]);
// 	}
// 	printf("\n");
// }

// #include <stdio.h>
// int main()
// {
//     int a=10;
//     int *pa=&a;
//     char *pc=&a;
//     *pc;
//     return 0;
// }

//const修饰的指针
//通过const修饰指针变量，可以限制指针变量不被修改
// #include <stdio.h>
// int main()
// {
//     const int a=10;
//     a=20;
//     return 0;
// }
//报错：无修改指针变量的权限
//经过const修改以后，a变为了常变量

// #include <stdio.h>
// int main()
// {
//     const int a=10;
//     int *pa=&a;
//     *pa=0;
//     printf("%d\n",a);
//     return 0;
// }
//危险代码，会使语句失效
// #include <stdio.h>
// int main()
// {
//     const int a=10;
//     const int *pa=&a;
//     *pa=0;
//     printf("%d\n",a);
//     return 0;
// }
//const 修饰指针时可以放在*左边或者右边
// #include <stdio.h>
// int main()
// {
//     const int a=10;
//     const int *pa=&a;
//     *pa=0;
//     printf("%d ",a);
//     return 0;
// }

//指针变量之间的关系
//a是一个变量，用于存储整型数据
//而P也是一个变量，用于存储a的地址，但它自己也有自己的地址
//*P是指向P指向的空间，
//const int *p是限制*P，则不能通过修改P，来修改P指向空间的内容,不会限制P的修改
//*P=0//err
//p=&b//ok
//相反 int* const P是限制P，不能修改P；但是*P可以修改

//指针运算
//运用指针访问数组
// #include <stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int *p=&arr[0];
//     for (int i=0;i<sz;i++)
//     {
//         printf("%d ",*p);
//         p++;
//     }
//     printf("\n");
//     return 0;
// }
//p++=p+1 等同于整型变量的运算
//p+i等同于p加上i*sizeof（type）

//指针-指针(即地址减去地址)
// #include <stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n",&arr[9]-&arr[0]);
//     指针减去指针绝对值是两者之间的元素个数
//     return 0;
// }

// #include <stdio.h>
// int my_strlen(char *s)
// {
//     char *start=s;
//     while (*s!='\0')
//     {
//         s++;
//     }
//     return s-start;
// }
// int main()
// {
//     int len=my_strlen("abcefghi");
//     printf("%d\n",len);
//     return 0;
// }

//野指针是指向随机空间的指针
//不初始化的指针即是野指针
//数组访问越界也即是野指针
//局部变量的栈空间被销毁，也即是野指针

//int *ptr;
//*ptr=200;
//这样即是非法访问内存

//assert断言
//用于判断条件是否为真
// #include <stdio.h>
//#define NDE BUG
// #include <assert.h>
// int main()
// {
//     int a=10;
//     int *pa=&a;
//     pa=NULL;
//     assert(pa!=NULL);
//     return 0;
// }

//指针的使用以及传址调用
// #include <stdio.h>
// int my_strlen(char *s)
// {
//     char *start=s;
//     while (*s!='\0')
//     {
//         s++;
//     }
//     return s-start;
// }
// int main()
// {
//     char arr[]="abcdef";
//     int len=my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }

//传值调用
//传值调用的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参的内容
//传址调用能够让主调函数之间建立联系
// #include <stdio.h>
// void Swap(int *pa,int *pb)
// {
//     int z=0;
//     z=*pa;
//     *pa=*pb;
//     *pb=z;
// }
// int main()
// {
//     int a,b=10;
//     printf("请输入两个数字：");
//     scanf("%d %d",&a,&b);
//     Swap(&a,&b);
//     printf("交换后的效果是a=%d,b=%d\n",a,b);
//     return 0;
// }

//数组名作为形参时，会传入第一个元素的首地址
//但存在两个例外
//sizeof(数组名)时，数组名表示的是整个数组，这时由于sizeof这个调用函数导致的
//&数组名表示的是取出整个数组的地址

//使用指针访问数组
//数组的本质就是指针
//P[i]=*(P+i)
//arr[i]=*(arr+i)

//一维数组传参的本质
//一维数组传参即可以写成数组的形式，也可以写成指针的形式

//冒泡排序
//练习：写一个函数，给整型数组进行排序
// #include <stdio.h>
// void BubbleSort(int arr[],int sz)
// {
//     int i=0;
//     for (i=0;i<sz-1;i++)
//     {
//         int j=0;
//         for (j=0;j<sz-1-i;j++)
//         {
//             //如果发生前面大于后面的情况，则需要交换
//             if (arr[j]>arr[j+1])
//             {
//                 int tmp=0;
//                 tmp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=tmp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[10]={0};
//     printf("请输入数组的数据：");
//     for (int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     //将其排为升序
//     //将相邻的两个元素进行比较，大的排在后面
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     BubbleSort(arr,sz);
//     for (int i=0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//指针数组：存储指针的数组

//指针数组模拟实现二维数组
// #include <stdio.h>
// int main()
// {
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={2,3,4,5,6};
//     int arr3[]={3,4,5,6,7};
//     int* arr[]={arr1,arr2,arr3};
//     int i=0;
//     for (i=0;i<3;i++)
//     {
//         int j=0;
//         for (j=0;j<5;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

//字符指针变量
//char* p="abcdef"--将首字符a的地址传给字符指针变量
//可以把字符串想象成一个字符数组，但这个数组是不能被修改的
//当常量出现在表达式中时，他的第一个值是地址

//数组指针和指针数组的区别：
//数组指针本质是一个指针，指向数组，而指针数组本质是一个数组，用于存放指针变量
//数组指针的初始化

//二维数组传参的本质
//二维数组传的是第一个一维数组的地址，所以可以使用数组指针代替，int (*arr)[5]


