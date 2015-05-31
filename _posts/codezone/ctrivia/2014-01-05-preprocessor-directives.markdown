---
layout: session-page
title: "Preprocessor Directives"
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
#define SWAP(a, b, c)  ( c t; t = a; a = b; b = t; )

int main(int argc, char * argv[]) {

	int x = 10, y = 20;

	SWAP(x, y, int);
	printf("%d, %d\n", x, y);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="Compile Time Error : 'int' cannot be passed" o2="Compile Time Error : Invaid macro definition" o3="20, 10" o4="10, 20" qid="ct:25" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct25.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			<emphasis class="bold">Note : </emphasis> <emphasis class="code">int</emphasis> or any datatype can be passed as variable to a macro.
		</div>
		<div class="para">
			The above code snippet results in a Compile Time Error because of invalid macro definition. The brackets <emphasis class="code">( and )</emphasis> are inappropriate.
		</div>
		<div class="para">
			The correct way to do it is:
			<emphasis class="code">
				#define SWAP(a, b, c)  c t; t = a; a = b; b = t;
			</emphasis>
		</div>
	</div>
</div>
</section>


<section>
<div class="question">
	<div class="para">What will be the output of the following code snippet?</div>
{% highlight cpp %}
#include <stdio.h>
#define FOO(a, b)  ( (a) > (b) ) ? (a) : (b);

int main(int argc, char * argv[]) {

	int x = 20, y = 10, z = 0;

	z = FOO( ++x, y++ );
	printf("%d, %d, %d\n", x, y, z);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="22, 12, 22" o2="22, 11, 22" o3="21, 11, 21" o4="21, 11, 10" qid="ct:26" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct26.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			The expression is evaluated as:
		</div>

{% highlight cpp %}
		z = FOO( ++x, y++ )
	=>	z = ( (++x) > (y++) ) ? (++x) : (y++);
	=>	z = ( (21) > (10) ) ? (22) : (11);			// After this x = 22, y = 11
	=>	z = 22;
{% endhighlight %}
<div class="para">
The <emphasis class="code">y++</emphasis> in ternary operand will not get executed because the condition is evaluated as <emphasis class="bold">TRUE</emphasis> here. Hence the value of variable <emphasis class="code">y</emphasis> gets incremented once by the first <emphasis class="code">y++</emphasis>.
</div>
</div>
</div>
</section>