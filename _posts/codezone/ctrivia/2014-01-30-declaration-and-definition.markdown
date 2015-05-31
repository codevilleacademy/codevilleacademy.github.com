---
layout: session-page
title: "Declaration and Definition"
category:	ctrivia
comments: true
---

<div class="session-title">
	{{page.title}}
</div>

<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int main(int argc, char * argv[]) {
	extern int a;
	printf("%d\n", a);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="0" o2="Garbage Value" o3="Runtime Error" o4="Compile Time Error : Undefined reference to 'a'" qid="ct:2" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct2.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			<emphasis class="code">extern</emphasis> keyword simply declares the variable, that is, it hints the compiler about the variable. Hence there is no space allocated to this variable. <emphasis class="bold">extern</emphasis> keyword tries to bind variable <emphasis class="quoted">a</emphasis> to location of a external variable <emphasis class="quoted">a</emphasis>. But compiler is unable to find any such variable; hence it throws a <emphasis class="highlight">Compile Time Error</emphasis>.
		</div>
		<div class="para">
			Read more <a href="{% post_url /codezone/ctrivia/2014-01-01-misc-info %}">here</a>.
		</div>
	</div>
</div>
</section>

<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int main(int argc, char * argv[]) {
	extern int a = 10;
	printf("%d\n", a);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="10" o3="0" o4="Runtime Error" o2="Compile Time Error: 'a' has both 'extern' and initializer" qid="ct:3" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct3.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			<emphasis class="code">extern</emphasis> keyword simply declares the variable, and it tries to link that variable to already defined variable. Since the variable till now is only declared and not defined hence it cannot be initialized.
		</div>
		<div class="para">
			Hence the <emphasis class="highlight">Compile Time Error</emphasis>.
		</div>
</div>
</div>
</section>

<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int main(int argc, char * argv[]) {
	extern int a;
	a = 10;
	printf("%d\n", a);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="10" o3="0" o4="Runtime Error" o2="Compile Time Error: Undefined reference to 'a'" qid="ct:4" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct4.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			<emphasis class="code">extern</emphasis> keyword simply declares the variable, and it tries to link that variable to already defined variable. Since the variable till now is only declared and not defined hence it cannot be initialized.
		</div>
		<div class="para">
			Hence the <emphasis class="highlight">Compile Time Error</emphasis>.
		</div>
</div>
</div>
</section>


<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int a = 10;

int main(int argc, char * argv[]) {
	extern int a;
	printf("%d\n", a);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="10" o3="0" o4="Runtime Error" o2="Compile Time Error: Undefined reference to 'a'" qid="ct:5" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct5.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			<emphasis class="code">extern</emphasis> keyword simply declares the variable, and it tries to link that variable to already defined variable. Since the variable <emphasis class="bold">a</emphasis> is globally declared and defined, and hence the <emphasis class="bold">extern</emphasis> statement will link the variable <emphasis class="bold">a</emphasis> to global variable <emphasis class="bold">a</emphasis>.
		</div>
		<div class="para">
			Hence the program will execute perfectly and will print <emphasis class="code">10</emphasis>.
		</div>
</div>
</div>
</section>



<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int main(int argc, char * argv[]) {
	
	int a = 1 + (10, 20, 30, 40);

	printf("%d\n", a);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error" o2="11" o3="41" o4="None of these" qid="ct:21" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct21.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			The code snippet above is syntactically correct. Hence there will not be any Compile Time Error.
		</div>
		<div class="para">
			In the statement <emphasis class="code">(10, 20, 30, 40)</emphasis>, the right most value is evaluated last and hence the resultatant value of expression is the rightmost value i.e. <emphasis class="bold">40</emphasis>. The expression is evaluated as:
		</div>
{% highlight cpp %}
		a = 1 + (10, 20, 30, 40);
	=>	a = 1 + (40);
	=>	a = 41;
{% endhighlight %}
<div class="para">The value stored in variable <emphasis class="code">a</emphasis> will be <emphasis class="bold">41</emphasis>.</div>
</div>
</div>
</section>