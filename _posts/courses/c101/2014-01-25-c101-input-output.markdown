---
layout: course_page
title: "Input and Output"
category: c101
---
<h2 id="page" class="clay">{{page.title}}</h2>
<hr class="large orange" />

<ul id="agenda"></ul>

<h3 id="need-of-io">Need of input and output</h3>
<hr class="large orange" />
<p>The task of any programming language is to automate some time-consuming task that we do manually, for example, in olden days we used to perform arithmetic operations like addition, subtraction, multiplication and division, manually which eventually ended up consuming lot of our time. Hence we invented computers and calculators that can compute these very very fast.</p>
<p>As we know, computers are very very fast at performing task, we give one of our task to it to perform, the computer then performs the task at a lightning speed and throws back the desired results to us.</p>
<p><span class="bold italic orange">Input</span> is the set of values that we give to our program so that it can perform the required task.</p>
<p><span class="bold italic orange">Processing</span> is the manipulation of the input data and coming up with the desired result.</p>
<p><span class="bold italic orange">Output</span> is the set of desired values that computer evaluated with respect to the given task.</p>
<p>For example, suppose your task is to perform addition of two numbers.
<ol class="list">
<li><span class="italic">Input</span> : the two values that you require to be added.</li>
<li><span class="italic">Processing</span> : process of addition of input values and storing the intermediate sum.</li>
<li><span class="italic">Output</span> : the value of the sum of the given two numbers.</li>
</ol>
</p>


<br/>
<h3 id="standard-io">Standard Input and Output</h3>
<hr class="large orange" />
<p>The C language itself does not provide input and output facilities, hence we rely on external standard libraries for all the input and output. There are lots of functions defined by standard libraries for input and output, here we will focus on few input and output mechanisms. The most used standard input and output library is <span class="bold italic orange">stdio.h</span>, which is a header file containing function declaration of all standard input output functions required.</p>

<br/>
<h3 id="getchar">getchar</h3>
<hr class="large orange" />
<p><span class="orange bold italic">getchar</span> is the simplest function of taking input from the standard input. getchar reads one character at a time from the standard input. The function prototype looks like:</p>
{% highlight cpp %}
int getchar(void);
{% endhighlight %}
<p>For example, we read one character from the standard input and store it in variable 'ch'.</p>
{% highlight cpp %}
char ch;
ch = getchar();
{% endhighlight %}
<p><span class="italic">getchar</span> returns the next input character each time it is called or returns an EOF (end of file character) in case it encounters an end of file. EOF is a symbolic constant defined in the header file stdio.h</p>


<br/>
<h3 id="putchar">putchar</h3>
<hr class="large orange" />
<p><span class="orange bold italic">putchar</span> is the simplest function to put a character onto your standard output. putchar puts the character passed to it on the standard output. The function prototype looks like:</p>
{% highlight cpp %}
int putchar(int);
{% endhighlight %}
<p>For example, we print one character to the standard output that was stored in variable 'ch'.</p>
{% highlight cpp %}
char ch = 'a';
putchar(ch);
{% endhighlight %}
<p><span class="italic">putchar</span> returns the character written, or an EOF if an error occurs. EOF is a symbolic constant defined in the header file stdio.h</p>

<div class="arial note purple">
	<ol class="list">
		<li>By default, your standard input is your keyboard.</li>
		<li>By default, your standard output is your screen.</li>
	</ol>
</div>

<br/>
<h3 id="printf">printf</h3>
<hr class="large orange" />
<p><span class="orange bold italic">printf</span> is a standard built-in function that is used to print formatted output. It translates the values of variables into characters. The basic function function prototype looks like this:</p>
{% highlight cpp %}
int printf( char * format, arg1, arg2, ...);
{% endhighlight %}
<p>printf function uses the first argument 'format' which is a string of characters to print the values passed to it as arg1, arg2, ... etc. It prints the values passed to it as arguments using the format string passed as the first argument. The return-type int of the printf function implies that the printf function returns an integer, which represents the number of characters printed on the standard output.</p>

<p class="bold clay">Usage of printf function :</p>

<p>Suppose you have a variable 'a' containing an integer 10. Usage of printf looks like:</p>
{% highlight cpp %}
printf("Value of a is %d\n", a);
{% endhighlight %}
<p>Output of above statement, assuming value in variable 'a' is 10, looks like</p>
{% highlight cpp %}
Value of a is 10
{% endhighlight %}


<p>Suppose you have a variable 'b' containing an character '!'. Usage of printf looks like:</p>
{% highlight cpp %}
printf("Value of b is %c\n", b);
{% endhighlight %}
<p>Output of above statement, assuming value in variable 'b' is '!', looks like</p>
{% highlight cpp %}
Value of b is !
{% endhighlight %}


<p>Suppose you now have variable 'a' of type int and variable 'b' of type char. Usage of printf looks like:</p>
{% highlight cpp %}
printf("Value of a is %d and value of b is %c\n", a, b);
{% endhighlight %}
<p>Output of above statement, assuming value in variable 'a' is 10, and in 'b' it is '!', looks like</p>
{% highlight cpp %}
Value of a is 10 and value of b is !
{% endhighlight %}

<p>Format string, the first argument of the printf function, contains two types of characters:</p>
<ol class="list">
	<li>Ordinary Characters : Copied to the output as it is.</li>
	<li>Conversion Specification : Prints the next successive argument to printf as character stream.</li>
</ol>
<p>Each conversion specification begins with a character <span class="bold">'%'</span> and ends with a conversion character. There are several conversion characters in C language. Below is the table containing some of the famous and most used conversion characters.</p>
<p>In first example, where we printed the value of variable 'a', we saw a conversion specification in action. The conversion specification used here was <span class="bold">'%d'</span>. %d implies that pick the successive argument of the printf, treat it as integer, convert it to stream of characters and then print it on output stream. Hence in the example, printf as soon as it gets %d, it treats value of variable 'a' as integer i.e. 10, converts it to stream of characters '10' and then prints it on the output stream.</p>

<br/>
<p class="text-center"><span class="black bold">printf conversion specifications</span></p>
<table class="table black">
	<thead>
		<td>Character</td>
		<td>Argument printed as</td>
	</thead>
	<tr>
		<td>d</td>
		<td>int; decimal integer number</td>
	</tr>
	<tr>
		<td>c</td>
		<td>int; single character.</td>
	</tr>
	<tr>
		<td>f</td>
		<td>double; floating point decimal number with precision of 6 digits after decimal point.</td>
	</tr>
	<tr>
		<td>s</td>
		<td>print character from the string, until a '\0' is found.</td>
	</tr>
	<tr>
		<td>u</td>
		<td>int; unsigned decimal integer number.</td>
	</tr>
</table>


<br/>
<h3 id="scanf">scanf</h3>
<hr class="large orange" />
<p><span class="orange bold italic">scanf</span> is a standard built-in function that is used to read the formatted input from the standard input. It is similar to print but in opposite direction. It reads a character from the standard input, interprets them according to the format string specified and stores the result in the corresponding argument. The basic function function prototype looks like this:</p>
{% highlight cpp %}
int scanf( char * format, ... );
{% endhighlight %}
<p>scanf function uses the first argument 'format' which is a format in which the input is to be interpreted, parsed and processed. The return-type int of the scanf function implies that the scanf function returns an integer, which represents the number of values read from the standard input.</p>
<p>The arguments that are passed to the scanf function are the locations where the value is to be stored. Typically they represent the address of where the value is to be stored.</p>

<p class="bold clay">Usage of scanf function :</p>

<p>Suppose you have a variable 'a' declared and you want to read an integer from the user and store it. Usage of scanf looks like:</p>
{% highlight cpp %}
int a;
scanf("%d", &a);
{% endhighlight %}
<p>When above code is compiled and executed, the control flow waits for the user to provide an input, as soon as it gets an input typed from the user, it interprets the input as integer ( because of '%d' ) and stores it in variable a. But we said that the argument passed to scanf should be the location where we need to store the value. If you look carefully, along with variable 'a' we have a symbol '&'. This character '&' when applied before a variable name, evaluates to the address of the variable. So in this case '&a' imples the address of the variable 'a'. Hence the value that is entered by the user gets stored in variable 'a', as it was required to do so.</p>

<p>Suppose we need to read two integers from the user and store them.</p>
{% highlight cpp %}
int a, b;
scanf("%d", &a);
scanf("%d", &b);
{% endhighlight %}
<p>Instead of writing two scanf one below another, we can blend them into one.</p>
{% highlight cpp %}
int a, b;
scanf("%d%d", &a, &b);
{% endhighlight %}

<p>Suppose we need to read one integer and one character and store them.</p>
{% highlight cpp %}
int a;
char c;
scanf("%d%c", &a, &c);
{% endhighlight %}

<br/>
<p class="text-center"><span class="black bold">scanf conversion specifications</span></p>
<table class="table black">
	<thead>
		<td>Character</td>
		<td>Input data; argument type</td>
	</thead>
	<tr>
		<td>d</td>
		<td>int; decimal integer number</td>
	</tr>
	<tr>
		<td>c</td>
		<td>int; single character.</td>
	</tr>
	<tr>
		<td>f</td>
		<td>double; floating point decimal number with single precision.</td>
	</tr>
	<tr>
		<td>s</td>
		<td>string of characters until a whitespace character is encountered.</td>
	</tr>
	<tr>
		<td>u</td>
		<td>int; unsigned decimal integer number.</td>
	</tr>
</table>


<br/>
<h3 id="first-input-output-prog">Your first input-output program</h3>
<hr class="large orange" />
<p class="italic">Write a C program, that will take one integer and one character input from the user and then print on the screen the values user entered.</p>

{% highlight cpp %}
#include <stdio.h>
int main() {
	int a;
	float b;

	printf("Enter a integer value : ");
	scanf("%d", &a);

	printf("Enter a float value : ");
	scanf("%f", &b);

	printf("You entered following values\n");
	printf("Integer : %d \nFloat : %f\n", a, b);

	return 0;
}
{% endhighlight %}

<p>A sample output is as shown</p>
{% highlight bash %}
Enter a integer value : 24
Enter a float value : 3.14  
You entered following values
Integer : 24 
Float : 3.140000
{% endhighlight %}

<br/>
<div class="arial bold italic text-center clay thought"><span class="orange">Practice</span> will make you <span class="orange">perfect</span>.</div>

<br/>
<a class="btn btn-default" href="">Read Next</a>