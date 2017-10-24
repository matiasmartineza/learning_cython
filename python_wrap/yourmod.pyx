def sqr(x):
	return x**2.0

def cub(x):
	return x**3.0

def fib(n):
	cdef double a = 0.0, b = 1.0
	for i in range(n):
		a, b = a + b, a
	return a
