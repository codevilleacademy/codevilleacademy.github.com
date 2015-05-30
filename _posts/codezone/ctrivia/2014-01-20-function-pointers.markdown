---
layout: session-page
title: "Function Pointers"
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

int foo();

int main(int argc, char * argv[]) {

	int (*p)() = foo;

	(*p)();

	return 0;
}

int foo() {
	printf("Hello, World!\n");
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error" o2="Hello, World!" o3="Runtime Error" o4="Garbage Output" qid="ct:7" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct7.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		This is a simple example of <emphasis class="code">function pointer</emphasis>. Everything in above code snippet works just find and program compiles without any Compile Time Error, also during execution there is no Runtime Error. The program outputs the string <emphasis class="code">Hello, World!</emphasis> on the console.
		</div>
	</div>
</div>
</section>


<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

	int (*p)() = foo;

	(*p)();

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error" o2="Hello, World!" o3="Runtime Error" o4="Garbage Output" qid="ct:8" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct8.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		The above code snippet during compilation throws a Compilation Error stating "undefined reference to 'foo'". The function declaration is present in the code but the function definition is missing; hence it throws an Compile Time Error stating <emphasis class="code">Undefined Reference to 'foo'</emphasis>.
		</div>
	</div>
</div>
</section>


<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

	int (*p)() = foo;

	(*p)(100);

	return 0;
}

int foo(int a){
	printf("%d\n", a);
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error" o3="100" o2="Runtime Error" o4="No Output" qid="ct:9" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct9.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		There will not be any compile time error or runtime error. It will output the value passed to function, in this case, it will output value <emphasis class="code">100</emphasis>.
		</div>
		<div class="para">
		<emphasis class="code">int (*p)() = foo;</emphasis> It defines a function pointer <emphasis class="code">p</emphasis> that points to a function which will accept any arguments, hence it is appropriately points to function <emphasis class="code">foo</emphasis>.
		</div>
	</div>
</div>
</section>



<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

	int (*p)(void) = foo;

	(*p)(100);

	return 0;
}

int foo(int a){
	printf("%d\n", a);
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error" o3="100" o2="Runtime Error" o4="No Output" qid="ct:10" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct10.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		There will be a compile time error stating <emphasis class="code">too many arguments to function 'p'</emphasis>. While defining function pointer, it was specified that it will accept zero arguments (by specifying <emphasis class="code">void</emphasis> keyword), but while calling the function through function pointer an argument was passed. This results in Compile Time Error.
		</div>
	</div>
</div>
</section>



<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

        int (*p)(int) = foo;

        (*p)(100);

        return 0;
}

int foo(){
        printf("Hello, World!\n");
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error" o3="Hello, World!" o2="Runtime Error" o4="No Output" qid="ct:11" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct11.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		To be added
		</div>
	</div>
</div>
</section>



<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

        int (*p)(int) = foo;

        (*p)(100);

        return 0;
}

int foo(){
        printf("Hello, World!\n");
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o4="Compile Time Error: too few arguments to function'p'" o3="Hello, World!" o2="Runtime Error" o1="No Output" qid="ct:12" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct12.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		To be added
		</div>
	</div>
</div>
</section>