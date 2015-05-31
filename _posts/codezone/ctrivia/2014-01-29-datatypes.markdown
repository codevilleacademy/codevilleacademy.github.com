---
layout: session-page
title: "Datatypes"
category:	ctrivia
comments: true
---

<div class="session-title">
	{{page.title}}
</div>


<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?<br>INT_MAX is the maximum positive that value that integer can attain i.e. 2147483647.</div>
{% highlight cpp %}
#include <stdio.h>
#include <limits.h>

int main(int argc, char * argv[]) {
	int a = INT_MAX;

	printf("%d %d\n", a, a+1);
	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="2147483647" o2="-2147483648" o3="NAN" o4="Compile Time Error" qid="ct:15" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct15.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		The value stored in the system are nothing but binary numbers. The sign of the integer number is decided with the help of its <emphasis class="bold">Most Significant Bit (MSB)</emphasis>. If MSB is 0 then number is treated as positive otherwise negative. Negative number are stored in their <emphasis class="bold">2's complement form</emphasis>.
		</div>
		<div class="para">
		Building on above concepts, the maximum positive value that a number can attain will be MSB = 0 and all other bits = 1. This value is nothing but INT_MAX. Now when we add 1 to this number this makes MSB = 1 and all other bits = 0 (This is simple binary addition). Now since the MSB = 1, hence it will be treated as negative number whose value will be 2's complement of the value stored.
		</div>
		<div class="para">
			2's complement of 1000....total 31 zero...000 is <emphasis class="bold">-2147483648</emphasis>, which is in fact the most negative number. Thus we have the answer as <emphasis class="bold">-2147483648</emphasis>.
		</div>
		<div class="para">
		<emphasis class="bold">4 Byte integer numbers run in a cyclic order as -2147483648, -2147483647, -2147483646, .... -2, -1, 0 , 1, 2, 2147483646, 2147483647, -2147483648, ....</emphasis>
		</div>
	</div>
</div>
</section>


<section>
<div class="question">
	<div class="para">All twists and turns with the use of typedef</div>
</div>
<div class="answer">
	<div class="para">
	Consider the following line of declaration:
	</div>
{% highlight cpp %}
typedef long a;
{% endhighlight %}

<div class="para">
Above line defines a new datatype named <emphasis class="code">a</emphasis> that actually represents the type <emphasis class="code">long</emphasis>. Now following discussion will assume the above definition.
</div>

<div class="note-box">
	typedef is not string replacement utility like #define
</div>

<div class="para">
Consider following variable declaration:
</div>
{% highlight cpp %}
int a c;
{% endhighlight %}
<div class="para">
Since we used <emphasis class="code">typedef</emphasis>, we have defined a new datatype called <emphasis class="code">a</emphasis>, hence by above declaration the variable <emphasis class="bold">c</emphasis> has two datatypes; hence it throws a compilation error stating this ambiguity.
</div>
<div class="para">
	Compile time error is <emphasis class="code">two or more data types in declaration specifiers</emphasis>
</div>


<div class="para">
Consider following variable declaration:
</div>
{% highlight cpp %}
a int c;
{% endhighlight %}
<div class="para">
At the first glance the above statement seems equivalent to defining a <emphasis class="bold">long int</emphasis> variable. But it is <emphasis class="bold">NOT</emphasis>. By above declaration the variable <emphasis class="bold">c</emphasis> has two datatypes; hence it throws a compilation error stating this ambiguity.
</div>
<div class="para">
	Compile time error is <emphasis class="code">two or more data types in declaration specifiers</emphasis>
</div>


<div class="para">
Consider following variable declaration:
</div>
{% highlight cpp %}
a c;
{% endhighlight %}
<div class="para">
Above variable declaration is absolutely correct and everything works fine.
</div>

</div>
</section>