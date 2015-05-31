---
layout: session-page
title: "Standard Functions"
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
        float a = 4.0;
        float b = 2.0;

        printf("%d\n", a % b);

        return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="0" o2="Compile Time Error" o3="Runtime Error" o4="2" qid="ct:1" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct1.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			The modulus operator returns the remainder obtained by dividing an <emphasis class="code">int</emphasis> by another <emphasis class="code">int</emphasis>. In above question the operands are of of type <emphasis class="code">float</emphasis>. Hence the compiler throws an error. Hence it is a Compile Time Error.
		</div>
		<div class="para">
			To find the remainder after float division we use a function called <emphasis class="code">fmod</emphasis>. This function is defined in <emphasis class="code">math.h</emphasis> and it returns a <emphasis class="code">double</emphasis> value.
		</div>
		<div class="para">
			Ex: fmod( 4.0, 2.0 ) returns 0.000000
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
	int a = 100;

	printf("%d, %d, %d\n", a <= 10, a = 10, a > 10);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="1, 10, 1" o2="0, 10, 0" o3="1, 1, 1" o4="0, 1, 0" qid="ct:22" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct22.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
			The arguments passed to printf are evaluated from right to left (since they are pushed onto stack). So evaluating <emphasis class="code">printf</emphasis> statement from right to left, we get:
		</div>
		<div class="para">
			<ul>
				<li><emphasis class="code">a > 10 => 100 > 10 => 1</emphasis></li>
				<li><emphasis class="code">a = 10 => 10 	// This makes value of variable a to be 10 and returns value 10</emphasis></li>
				<li><emphasis class="code">a <= 10 => 10 <= 10 => 1</emphasis></li>
			</ul>
			Hence the output of above code snippet is <emphasis class="code">1, 10, 1</emphasis>
		</div>
	</div>
</div>
</section>