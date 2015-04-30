---
layout: course_page
title: "Get, Set, Go!"
category:	c101
---

<h2 class="clay bold">Get, Set, Go!</h2>
<p>Let us test your Hello, World!</p>

<p>Source code</p>

{% highlight cpp %}
#include <stdio.h>

int main(int argc, char * argv[] {
	printf("Hello, World!\n");
	return 0;
}
{% endhighlight %}

{% include code_upload_form.html qid="c101:1" %}

<!--table class="table table-hover">
<thead>
	<tr>
		<th>Title</th>
	</tr>
</thead>
{% tablerow lecture in site.categories.course-c-page %}
  <a href="{{ lecture.url }}">{{ lecture.title }}</a>
{% endtablerow %}
</table-->