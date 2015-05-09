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
	return 0;
}
{% endhighlight %}
<p><span class="light-green">Step 3</span>: Compile the file using GCC compiler.</p>
{% highlight bash %}
gcc hello.c
{% endhighlight %}
<p>Above process will create a binary file called <span class="italic">a.out</span>. This a.out file is an executable file that we will now execute on our operating system.
<p><span class="light-green">Step 4</span>: Execute the a.out file.</p>
{% highlight bash %}
./a.out
{% endhighlight %}
<p>If everything goes well, you should see the following output on your console.</p>
{% highlight bash %}
Hello, Master!
{% endhighlight %}
<p>The output we get over here is the required output; and thus our task is accomplished.</p>
<p><span class="bold orange">Congratulations!</span>, you have successfully written your first program in C language.</p>

<br/>
<h3 id="break-the-code">Break the code!</h3>
<hr class="large orange" />
<p>We will now try to understand the code that we just wrote, compiled and executed successfully. Lets dissect the code.</p>

<p>The first line we encounter is</p>
{% highlight cpp %}
#include <stdio.h>
{% endhighlight %}
<p>This line indicates the preprocessor to include the file <span class="italic">stdio.h</span> before the compilation. Now you might wonder, what is preprocessor? The simple answer to it is that, the first step of compilation is preprocessing, that is, all the preprocessor directives are processed before the process of compilation starts.</p>
<ul class="list">
	<li><span class="italic light-green">#</span> : is the standard prefix used for introducing the preprocessor statement.</li>
	<li><span class="italic light-green">include</span> : is the keyword that dictates the preprocessor to include the file mentioned after.</li>
	<li><span class="italic light-green">stdio.h</span> : is the header file that defines three variable types, several macros and various function for performing input and output.</li>
</ul>

<p>The next line we encounter is</p>
{% highlight cpp %}
int main() {
{% endhighlight %}
<p>This line marks the start of <span class="italic">main</span> function. The main function is the most important function in C; as it acts as an entry point to the execution. Whenever we execute the C program, the execution starts from the <span class="italic">main</span> function. Hence this function is the function that must be present in the C code.</p>
<ul class="list">
	<li><span class="italic light-green">int</span> : is the data-type in C, which in this context is the return-type of the function. This implies that the function will return the value whose type is <span class="italic">int</span>. We will go into the data-types later in the discussion.</li>
	<li><span class="italic light-green">main</span> : is the keyword which is the name of the function that will be starting point of the program execution. Hence if the name is changed then executor, in no way will understand where to start the execution.</li>
</ul>

<p>The next line we encounter is</p>
{% highlight cpp %}
	printf("Hello, Master!");
{% endhighlight %}
<p><span class="italic">printf</span> is a function that is defined in the file <span class="italic">stdio.h</span>. It is primarily used to print something on the screen. When we want to provide output to the user, we use <span class="italic">printf</span> function. The function contains a sentence <span class="italic">"Hello, Master"</span>, which is the exact same sentence that we wanted to print on the screen, in our objective. This implies that the sentence we pass to the <span class="italic">printf</span> function will be directly printed on the screen; this is nothing but the job of the <span class="italic">printf</span> function.</p>

<p>The next line we encounter is</p>
{% highlight cpp %}
	return 0;
{% endhighlight %}
<ul class="list">
	<li><span class="italic light-green">return</span> is a keyword in C language that signifies the return from the execution of a function. As soon as the function encounters the return statement, it will immediately get out of the function.</li>
	<li><span class="italic light-green">0</span> : is an integer that will now act as the return value from the <span class="italic">main</span> function. If you recall from line number 2 that we had mentioned the return type of the <span class="italic">main</span> function to be an integer, and 0 is of type integer. Hence this value, 0, is returned as the <span class="bold">exit status</span> of the program.</li>
</ul>

<p>The next line we encounter is</p>
{% highlight cpp %}
}
{% endhighlight %}
<p>This is a closing curly bracket which implies the end of the scope of function <span class="italic">main</span>. The scope of the <span class="italic">main</span> function begins at line number 2, with an opening curly bracket and it ends on this line, at the closing curly bracket.</p>


<br/>
<div class="arial bold italic text-center clay thought"><span class="orange">Practice</span> will make you <span class="orange">perfect</span>.</div>

<br/>
<a class="btn btn-default" href="{{ "" }}">Read Next</a>