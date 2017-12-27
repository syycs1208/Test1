stdlib.h

  ● itoa()：将整型值转换为字符串。

  ● ltoa()：将长整型值转换为字符串。

  ● ultoa()：将无符号长整型值转换为字符串。

  ● gcvt()：将浮点型数转换为字符串，取四舍五入。

  ● ecvt()：将双精度浮点型值转换为字符串，转换结果中不包含十进制小数点。
  ● fcvt()：指定位数为转换精度，其余同ecvt()。
  ● atof()：将字符串转换为双精度浮点型值。

  ● atoi()：将字符串转换为整型值。

  ● atol()：将字符串转换为长整型值。

  ● strtod()：将字符串转换为双精度浮点型值，并报告不能被转换的所有剩余数字。

  ● strtol()：将字符串转换为长整值，并报告不能被转换的所有剩余数字。

  ● strtoul()：将字符串转换为无符号长整型值，并报告不能被转换的所有剩余数字。
  
  
  1    #include <iostream>

2    using namespace std;

3   

4    void int2str(int n, char *str)

5    {

6        char buf[10] = "";

7        int i = 0;

8        int len = 0;

9        int temp = n < 0 ? -n: n;  // temp为n的绝对值

10  

11       if (str == NULL)

12       {

13           return;

14       }

15       while(temp)

16       {

17           buf[i++] = (temp % 10) + '0';  //把temp的每一位上的数存入buf

18           temp = temp / 10;

19       }

20  

21       len = n < 0 ? ++i: i;  //如果n是负数，则多需要一位来存储负号

22       str[i] = 0;            //末尾是结束符0

23       while(1)

24       {

25           i--;

26           if (buf[len-i-1] ==0)

27           {

28               break;

29           }

30           str[i] = buf[len-i-1];  //把buf数组里的字符拷到字符串

31       }

32       if (i == 0 )

33       {

34           str[i] = '-';          //如果是负数，添加一个负号

35       }

36   }

37  

38   int main()

39   {

40       int nNum;

41       char p[10];

42  

43       cout << "Please input an integer:";

44       cin >> nNum;

45       cout << "output: " ;

46       int2str(nNum, p);        //整型转换成字符串

47       cout<< p << endl;

48  

49       return 0;

50   }
