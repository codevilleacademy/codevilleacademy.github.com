---
layout: lecture-session
title: "Input and Output"
category: c101
---
<div class="lecture-title">
	{{page.title}}
</div>

{% include agenda.html %}

<section>
	<div id="need-of-io" class="section-title">
		Need of input and output
	</div>
	<div class="para">
		The task of any programming language is to automate some time-consuming task that we do manually, for example, in olden days we used to perform arithmetic operations like addition, subtraction, multiplication and division, manually which eventually ended up consuming lot of our time. Hence we invented computers and calculators that can compute these very very fast.
	</div>
	<div class="para">
		As we know, computers are very very fast at performing task, we give one of our task to it to perform, the computer then performs the task at a lightning speed and throws back the desired results to us.
	</div>
	<div class="para">
		<emphasis class="highlight">Input</emphasis> is the set of values that we give to our program so that it can perform the required task.
	</div>
	<div class="para">
		<emphasis class="highlight">Processing</emphasis> is the manipulation of the input data and coming up with the desired result.
	</div>
	<div class="para">
		<emphasis class="highlight">Output</emphasis> is the set of desired values that computer evaluated with respect to the given task.
	</div>
	<div class="para">
		For example, suppose your task is to perform addition of two numbers.	
		<ul>
			<li>
				<emphasis class="bold">Input</emphasis> : the two values that you require to be added.
			</li>
			<li>
				<emphasis class="bold">Processing</emphasis> : process of addition of input values and storing the intermediate sum.
			</li>
			<li>
				<emphasis class="bold">Output</emphasis> : the value of the sum of the given two numbers.
			</li>
		</ul>
	</div>
</section>

<section>
	<div id="standard-io" class="section-title">
		Standard Input and Output
	</div>
	<div class="para">
		The C language itself does not provide input and output facilities, hence we rely on external standard libraries for all the input and output. There are lots of functions defined by standard libraries for input and output, here we will focus on few input and output mechanisms. The most used standard input and output library is <emphasis class="code">stdio.h</emphasis>, which is a header file containing function declaration of all standard input output functions required.
	</div>
</section>

<section>
	<div id="getchar" class="section-title">
		getchar
	</div>
	<div class="para">
		<emphasis class="highlight">getchar</emphasis> is the simplest function of taking input from the standard input. getchar reads one character at a time from the standard input. The function prototype looks like:
	</div>

{% highlight cpp %}
int getchar(void);
{% endhighlight %}

<div class="para">
	For example, we read one character from the standard input and store it in variable <emphasis class="code">ch</emphasis>
</div>

{% highlight cpp %}
char ch;
ch = getchar();
{% endhighlight %}

<div class="para">
	<emphasis class="code">getchar</emphasis> returns the next input character each time it is called or returns an <emphasis class="code">EOF</emphasis> (end of file character) in case it encounters an end of file.
	<div class="fact-box">
		EOF is a symbolic constant defined in the header file stdio.h
	</div>
</div>
</section>

<section>
	<div id="putchar" class="section-title">
		putchar
	</div>
	<div class="para">
		<emphasis class="highlight">putchar</emphasis> is the simplest function to put a character onto your standard output. putchar puts the character passed to it on the standard output. The function prototype looks like:
	</div>

{% highlight cpp %}
int putchar(int);
{% endhighlight %}

<div class="para">
	For example, we print one character to the standard output that was stored in variable <emphasis class="code">ch</emphasis>
</div>

{% highlight cpp %}
char ch = 'a';
putchar(ch);
{% endhighlight %}

<div class="para">
	<emphasis class="code">putchar</emphasis> returns the character written, or an <emphasis class="code">EOF</emphasis> if an error occurs.
</div>

<div class="note-box">
	<ul>
		<li>By default, your standard input is your keyboard.</li>
		<li>By default, your standard output is your screen.</li>
	</ul>
</div>
</section>

<section>
	<div id="printf" class="section-title">
		printf
	</div>
	<div class="para">
		<emphasis class="highlight">printf</emphasis> is a standard built-in function that is used to print formatted output. It translates the values of variables into characters. The basic function function prototype looks like this:
	</div>

{% highlight cpp %}
int printf( char * format, arg1, arg2, ...);
{% endhighlight %}

<div class="para">
	<emphasis class="code">printf</emphasis> function uses the first argument <emphasis class="code">format</emphasis> which is a string of characters to print the values passed to it as <emphasis class="bold">arg1</emphasis>, <emphasis class="bold">arg2</emphasis>, ... etc. It prints the values passed to it as arguments using the format string passed as the first argument. <emphasis class="code">printf</emphasis> function returns an integer, which represents the number of characters printed on the standard output.
</div>

<div class="para">
	<emphasis class="bold">Usage of printf function :</emphasis>
</div>

<div class="para">
	Suppose you have a variable <emphasis class="bold">a</emphasis> containing an integer <emphasis class="bold">10</emphasis>. Usage looks like:

{% highlight cpp %}
printf("Value of a is %d\n", a);
{% endhighlight %}

Output of above statement looks like:

{% highlight cpp %}
Value of a is 10
{% endhighlight %}

Suppose you have a variable <emphasis class="bold">b</emphasis> containing an character <emphasis class="bold">!</emphasis>. Usage looks like:

{% highlight cpp %}
printf("Value of b is %c\n", b);
{% endhighlight %}

Output of above statement looks like:

{% highlight cpp %}
Value of b is !
{% endhighlight %}

Suppose you now have variable <emphasis class="bold">a</emphasis> of type <emphasis class="bold">int</emphasis> and variable <emphasis class="bold">b</emphasis> of type <emphasis class="bold">char</emphasis>. Usage looks like:

{% highlight cpp %}
printf("Value of a is %d and value of b is %c\n", a, b);
{% endhighlight %}

Output of above statement looks like:

{% highlight cpp %}
Value of a is 10 and value of b is !
{% endhighlight %}

</div>

<div class="para">Format string, the first argument of the <emphasis class="code">printf</emphasis> function, contains two types of characters:
	<ul>
		<li>Ordinary Characters : Copied to the output as it is.</li>
		<li>Conversion Specification : Prints the next successive argument to <emphasis class="code">printf</emphasis> as character stream.</li>
	</ul>
</div>

<div class="para">
	Each conversion specification begins with a character <emphasis class="bold">%</emphasis> and ends with a conversion character. There are several conversion characters in C language. Below is the table containing some of the famous and most used conversion characters.
</div>
<div class="para">
	In first example, where we printed the value of variable <emphasis class="bold">a</emphasis>, we saw a conversion specification in action. The conversion specification used here was <emphasis class="bold">%d</emphasis>. <emphasis class="bold">%d</emphasis> implies that pick the successive argument of the <emphasis class="code">printf</emphasis>, treat it as integer, convert it to stream of characters and then print it on output stream. <emphasis class="bold">Hence in the example, printf as soon as it gets %d, it treats value of variable 'a' as integer i.e. 10, converts it to stream of characters '10' and then prints it on the output stream.</emphasis>
</div>

<div class="para centered">
	<emphasis class="bold">printf conversion specifications</emphasis>
</div>
<table class="table">
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
</section>

<section>
	<div id="scanf" class="section-title">
		scanf
	</div>
	<div class="para">
		<emphasis class="highlight">scanf</emphasis> is a standard built-in function that is used to read the formatted input from the standard input. It is similar to print but in opposite direction. It reads a character from the standard input, interprets them according to the format string specified and stores the result in the corresponding argument. The basic function function prototype looks like this:

{% highlight cpp %}
int scanf( char * format, ... );
{% endhighlight %}

<emphasis class="code">scanf</emphasis> function uses the first argument <emphasis class="code">format</emphasis> which is a format in which the input is to be interpreted, parsed and processed. <emphasis class="code">scanf</emphasis> function returns an integer, which represents the number of values read from the standard input.
</div>
<div class="para">
	The arguments that are passed to the <emphasis class="code">scanf</emphasis> function are the locations where the value is to be stored. Typically they represent the address of where the value is to be stored.
</div>

<div class="para">
	<emphasis class="bold">
		Usage of scanf function :
	</emphasis>
</div>

<div class="para">

	Suppose you have a variable <emphasis class="bold">a</emphasis> declared and you want to read an integer from the user and store it. Usage looks like:

{% highlight cpp %}
int a;
scanf("%d", &a);
{% endhighlight %}

When above code is compiled and executed, the control flow waits for the user to provide an input, as soon as it gets an input typed from the user, it interprets the input as integer ( because of <emphasis class="bold">%d</emphasis> ) and stores it in variable <emphasis class="bold">a</emphasis>. But we said that the argument passed to <emphasis class="code">scanf</emphasis> should be the location where we need to store the value. If you look carefully, along with variable <emphasis class="bold">a</emphasis> we have a symbol <emphasis class="bold">&</emphasis>. This operator when applied before a variable name, evaluates to the address of the variable. So in this case <emphasis class="code">&a</emphasis> imples the address of the variable <emphasis class="bold">a</emphasis>. Hence the value that is entered by the user gets stored in variable <emphasis class="bold">a</emphasis>

</div>

<div class="para">
	Suppose we need to read two integers from the user and store them.

{% highlight cpp %}
int a, b;
scanf("%d", &a);
scanf("%d", &b);
{% endhighlight %}

Instead of writing two scanf one below another, we can blend them into one.

{% highlight cpp %}
int a, b;
scanf("%d%d", &a, &b);
{% endhighlight %}

Suppose we need to read one integer and one character and store them.

{% highlight cpp %}
int a;
char c;
scanf("%d%c", &a, &c);
{% endhighlight %}

</div>

<div class="para centered">
	<emphasis class="bold">scanf conversion specifications</emphasis>
</div>
<table class="table">
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
</section>

<section>
	<div id="first-input-output-prog" class="section-title">
		Your first input-output program
	</div>
	<div class="para">
		Write a C program, that will take one integer and one character input from the user and then print on the screen the values user entered.
	</div>

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

<div class="para">A sample output is as shown</div>

{% highlight bash %}
Enter a integer value : 24
Enter a float value : 3.14  
You entered following values
Integer : 24 
Float : 3.140000
{% endhighlight %}

</section>

<section>
	<a class="button" href="">Read Next</a>
</section>