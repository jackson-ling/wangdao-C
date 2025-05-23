/*
 * 1.数据类型（整型（int），浮点型（float），字符型（char），字符串型（C语言没有定义字符串的关键字，用数组存储））
 *
 * 2.变量名规范（只能由字母，数字，下划线组成，不能以数字开头）
 *变量遵循限定以后使用原则
 * 大小写表示不同的变量
 * 变量命名见名知意
 * 注意：不能和关键字同名
 *
 *3.浮点型数据科学计数法（规范：字母e必须要有数字，且e后面的指数次方必须是整数）
 * 例子：1e3表示1*10的3次方
 *
 *4.存储字节（一个字符代表一个字节）
 * 123（四个字节，最后结束的（\0无法输出），即理解为鼠标停下的位置也算一个字节）
 *
 *5.进制转换
 * 1 byte=8 bit（1字节为8位，1位即二进制的1位，存储0或1）
 *
 * 2.源码，反码，补码，符号位（0表示正数，1表示负数）
 *
 * 3.进制转换和计算
 * 十进制---printf（“%d\n”,i）
 *八进制---printf（“%o\n”,i）
 *十六进制---printf（“%x\n”,i）
 *
 * 4.二进制与十六进制
 * 二进制的每四位为一组对应十六进制的一位
 * 例子；int 4个字节（32个bit位）
 * 0000 0000 0000 0000 0000 0000 0000 0000（二进制，一个字节八位，对应十六进制，8位为十六进制的一个字节）
 *00 00 00 00（十六进制，两位代表一个字节，四个字节）
 *
 * 内存视图要对变量取地址
 * 在内存视图中就是一上面的16进制方式存储（存储方式：低位在前，高为在后（原因：intel cpu采用小端方式存储））
 * 例子：
 * 十进制  ：123
 * 十六进制：7b 00 00 00
 * 注意：只是把7b挪到了前面，计算依然是以第二个数为首（123=11（b）*16**0+7*16=11+112）
 * 所有的开发环境显示内存视图都是以16进制展示
 */