# 9.1
> 对于 func() 的形参 str，其实在定义时就为它分配了内存，但是此时并没有初始化，只有等到调用 func() 时，才会将其它对象的数据拷贝给 str 以完成初始化。
当以拷贝的方式初始化一个对象时，会调用一个特殊的构造函数，就是拷贝构造函数（Copy Constructor）。

# 9.6
假如`class A`存在转换构造函数，这个函数是用于其他类对象如何转换成`A`类对象；

# 9.7
假如`class A`存在类型转换函数，这个函数用于`A`类对象，如何转换成其他类对象；