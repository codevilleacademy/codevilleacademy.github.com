---
layout: course_page
title: "First Program in C"
category: c101
---
<h2 id="first-program" class="clay">{{page.title}}</h2>
<hr class="large orange" />

<ul id="agenda"></ul>

<h3 id="program-and-problem">Program and Problem Statement</h3>
<hr class="large orange" />
<p><span class="italic bold orange">Program</span> is a simple text that is understood by a specific language compiler and operating system; and which is meant to solve some real world problem.<p>
<p><span class="bold italic orange">Problem Statement</span> is a real-world problem that needs to be solved.</p>
<p>Let us define a problem statement for our first C program.</p>

<br/>
<h3 id="problem-statement">Please greet me!</h3>
<hr class="large orange" />
<p class="italic">Suppose, you are the master of the universe and you are in total control of everything that exists. Now you want that every computer in the universe should display "Hello, Master!", when they start. You being a naive programmer will have to write a program that will print "Hello, Master!" on the screen when it is executed.</p>

<p>Given this task, you will write a program and will be stored it in a text file called <span class="italic orange">"hello.c"</span>.</p>

<div class="arial italic note purple">
	<ol>
		<li>The extension of file ".c" is very important. C compiler will identify a C program that is a C code through this extension. In case the extension is absent or some other extension is used, the C compiler will throw an error.</li>
		<li>The name of the file can be anything you want but the name we gave to the file is "hello" because it make sense with the problem statement.</li>
	</ol>
</div>
<br/>

<p><span class="light-green">Step 1</span>: Create a empty text file and name it as <span class="italic">hello.c</span></p>
<p><span class="light-green">Step 2</span>: Put the following content into the file.</p>

{% highlight cpp %}
#include <stdio.h>
int main() {
	printf("Hello, Master!");
}
{% endhighlight %}

<br/>
<div class="arial bold italic text-center clay thought"><span class="orange">Practice</span> makes everyone <span class="orange">perfect</span>.</div>

<br/>
<a class="btn btn-default" href="{{ "" }}">Read Next</a>