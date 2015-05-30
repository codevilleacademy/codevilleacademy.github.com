---
layout: session-page
title: "Operators"
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
	int a = 100, b = 200, c = 30, result;

	result = b < a < c;
	printf("%d\n", result);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="1" o2="100" o3="30" o4="200" qid="ct:6" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct6.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		First point to note is that the return value of a expression containing a relational operator is <emphasis class="code">1</emphasis> or <emphasis class="code">0</emphasis>, depending on its truth value. Hence if an expression with relation operator is true then the resultant value will be <emphasis class="bold">1</emphasis> otherwise it will be <emphasis class="bold">0</emphasis>.
		</div>
		<div class="para">
			Building on aobve idea, let us see how the expression is evaluated:
		</div>
{% highlight cpp %}
		result = b < a < c;
	=>	result = 200 < 100 < 30;
	=>	result = ((200 < 100) < 30);	// Left to right evaluation
	=>	result = (1 < 30);				// 200 < 100 -> FALSE -> 0
	=>	result = 1;
{% endhighlight %}
<div class="para">Hence the printf statement will print <emphasis class="code">1</emphasis>
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
        int a = 16;

        if ( !a >= 15 ) {
                printf("YES\n");
        }
        else {
                printf("NO\n");
        }

        return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="NO" o2="YES" o3="Compile Time Error : Invalid Operator" o4="Compile Time Error : Ambiguous Precedence" qid="ct:14" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct14.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		First point to note is that the return value of a expression containing a relational operator is <emphasis class="code">1</emphasis> or <emphasis class="code">0</emphasis>, depending on its truth value. Hence if an expression with relation operator is true then the resultant value will be <emphasis class="bold">1</emphasis> otherwise it will be <emphasis class="bold">0</emphasis>.
		</div>
		<div class="para">
			Building on aobve idea, let us see how the expression is evaluated:
		</div>
{% highlight cpp %}
		!a >= 15
	=>	((!a) >= 15)
	=>	((!16) >= 15)					// Left to right evaluation
	=>	(0 >= 15)						// 16 imples TRUE hence !16 => FALSE -> 0
	=>	0
{% endhighlight %}
<div class="para">Hence condition evaluates to 0 (FALSE) so output is <emphasis class="code">NO</emphasis>
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
	int a = 1, b = 1, c = 1;
	
	c = ++a || ++b && ++c;
	printf("%d, %d, %d\n", a, b, c);

	return 0;
}
{% endhighlight %}
</div>
<div class="options">
{% include options.html o1="2, 1, 1" o2="2, 2, 2" o3="1, 1, 1" o4="2, 2, 1" qid="ct:18" %}
</div>
<div class="explanation">
	<div class="actions text-right">
		<a href="{{ "/files/ctrivia/ct18.c" | prepend: site.baseurl }}" class="btn link-button">Download source</a>
		<button class="btn link-button explanation-button">Explanation</button>
	</div>
	<div class="explanation-content">
		<div class="para">
		This is an example of <emphasis class="bold">Short Circuit Boolean Expression Evaluation</emphasis>, where a boolean expression stops evaluating if the final outcome can accurately guessed.
		</div>
		<div class="para">
			Building on aobve idea, let us see how the expression is evaluated:
		</div>
{% highlight cpp %}
		++a || ++b && ++c
{% endhighlight %}
<div class="para">
The left most <emphasis class="code">++a</emphasis> is evaluated which makes value of <emphasis class="bold">a = 2</emphasis>. Since it is pre-increment operator hence value <emphasis class="bold">2</emphasis> will be put in expression. Since there is a <emphasis class="bold">logical or</emphasis> operator used, so because of short circuit evaluation, ++b and ++c are not evaluated and whole expression evaluates to value <emphasis class="code">1</emphasis>.
</div>
{% highlight cpp %}
		++a || ++b && ++c;
	=>	2   || ++b && ++c;		// a = 2, b = 1 and c = 1
	=>	1						// TRUE because of short circuit boolean evaluation
{% endhighlight %}
<div class="para">Hence condition evaluates to 1 (TRUE) so output is <emphasis class="code">2, 1, 1</emphasis>
</div>
</div>
</div>
</section>