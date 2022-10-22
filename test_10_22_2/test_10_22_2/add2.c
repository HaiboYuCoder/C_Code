#define  _CRT_SECURE_NO_WARNINGS 1

static int Add(num1, num2)
{
	
	return num1 + num2;

}

//函数本身是具有外部链接属性的
//被static修饰后，外部链接属性就变成了内部链接属性
//使得这个函数只能在自己所在的源文件内部使用，其他源文件无法使用
//限制了作用域
