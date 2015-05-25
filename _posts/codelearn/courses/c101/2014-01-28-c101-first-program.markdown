---
layout: lecture-session
title: "First Program in C"
category: c101
comments: true
---
<div class="lecture-title">
	{{page.title}}
</div>

{% include /ui/agenda.html %}

<section>
	<div class="section-title" id="program-and-problem">
		Program and Problem Statement
	</div>
	<div class="para">
		<emphasis class="highlight">Program</emphasis> is a simple text that is understood by a specific language compiler and operating system; and which is meant to solve some real world problem.
	</div>
	<div class="para">
		<emphasis class="highlight">Problem Statement</emphasis> is a real-world problem that needs to be solved.
	</div>
</section>

<section>
	<div class="section-title" id="please-gree-me">
		Please greet me!
	</div>
	<div class="para">
		Suppose, you are the master of the universe and you are in total control of everything that exists. Now you want that every computer in the universe should display <emphasis class="bold">"Hello, Master!"</emphasis>, when they start. You being a naive programmer will have to write a program that will print <emphasis class="bold">"Hello, Master!"</emphasis> on the screen when it is executed.
	</div>
	<div class="para">
		Given this task, you will write a program and that will be stored it in a text file called <emphasis class="code">hello.c</emphasis>
	</div>
	<div class="note-box">
		<ol>
			<li>The extension of file ".c" is very important. C compiler will identify a C program that is a C code through this extension. In case the extension is absent or some other extension is used, the C compiler will throw an error.</li>
			<li>The name of the file can be anything you want but the name we gave to the file is "hello" because it make sense with the problem statement.</li>
		</ol>
	</div>
	<div class="para">
		<emphasis class="bold">Step 1</emphasis>: Create a empty text file and name it as <emphasis class="code">hello.c</emphasis>	
	</div>
	<div class="para">
		<emphasis class="bold">Step 2</emphasis>: Put the following content into the file.
	</div>

{% highlight cpp %}
#include <stdio.h>
int main() {
	printf("Hello, Master!");
	return 0;
}
{% endhighlight %}
	
<div class="para">
	<emphasis class="bold">Step 3</emphasis>: Compile the file using GCC compiler.
</div>

{% highlight bash %}
gcc hello.c
{% endhighlight %}

<div class="para">
	Above process will create a binary file called <emphasis class="code">a.out</emphasis>. This a.out file is an executable file that we will now execute on our operating system.
</div>
<div class="para">
	<emphasis class="bold">Step 4</emphasis>: Execute the a.out file.
</div>

{% highlight bash %}
./a.out
{% endhighlight %}

<div class="para">
	If everything goes well, you should see the following output on your console.
</div>

{% highlight bash %}
Hello, Master!
{% endhighlight %}

<div class="para">
	The output we get over here is the required output; and thus our task is accomplished.
</div>
<div class="para">
	Congratulations!, you have successfully written your first program in C language.
</div>
</section>

<section>
	<div id="break-the-code" class="section-title">Break the code!</div>
	<div class="para">
		We will now try to understand the code that we just wrote, compiled and executed successfully. Lets dissect the code.
	</div>
	<div class="para">The first line we encounter is</div>

{% highlight cpp %}
#include <stdio.h>
{% endhighlight %}

<div class="para">
	This line indicates the preprocessor to include the file <emphasis class="code">stdio.h</emphasis> before the compilation. Now you might wonder, what is preprocessor? The simple answer to it is that, the first step of compilation is preprocessing, that is, all the preprocessor directives are processed before the process of compilation starts.
	<ul>
		<li>
			<emphasis class="code">#</emphasis> : is the standard prefix used for introducing the preprocessor statement.
		</li>
		<li>
			<emphasis class="code">include</emphasis> : is the keyword that dictates the preprocessor to include the file mentioned after.
		</li>
		<li>
			<emphasis class="code">stdio.h</emphasis> : is the header file that defines three variable types, several macros and various functions for performing input and output.
		</li>
	</ul>
</div>

<div class="para">
	The next line we encounter is
</div>

{% highlight cpp %}
int main() {
{% endhighlight %}

<div class="para">
	This line marks the start of <emphasis class="bold">main</emphasis> function. The main function is the most important function in C; as it acts as an entry point to the execution. Whenever we execute the C program, the execution starts from the <emphasis class="code">main</emphasis> function. Hence this function is the function that must be present in the C code.
	<ul>
		<li>
			<emphasis class="code">int</emphasis> : is the data-type in C, which in this context is the return-type of the function. This implies that the function will return the value whose type is <emphasis class="bold">int</emphasis>. We will go into the data-types later in the discussion.
		</li>
		<li>
			<emphasis class="code">main</emphasis> : is the keyword which is the name of the function that will be starting point of the program execution. Hence if the name is changed then executor, in no way will understand where to start the execution.
		</li>
	</ul>
</div>

<div class="para">
	The next line we encounter is
</div>

{% highlight cpp %}
	printf("Hello, Master!");
{% endhighlight %}

<div class="para">
	<emphasis class="code">printf</emphasis> is a function that is defined in the file <emphasis class="code">stdio.h</emphasis>. It is primarily used to print something on the screen. When we want to provide output to the user, we use <emphasis class="code">printf</emphasis> function. The function contains a sentence <emphasis class="bold">"Hello, Master!"</emphasis>, which is the exact same sentence that we wanted to print on the screen, in our objective. This implies that the sentence we pass to the <emphasis class="code">printf</emphasis> function will be directly printed on the screen; this is nothing but the job of the <emphasis class="code">printf</emphasis> function.
</div>

<div class="para">
	The next line we encounter is

{% highlight cpp %}
	return 0;
{% endhighlight %}

<ul>
	<li>
		<emphasis class="code">return</emphasis> is a keyword in C language that signifies the return from the execution of a function. As soon as the function encounters the return statement, it will immediately get out of the function.
	</li>
	<li>
		<emphasis class="code">0</emphasis> : is an integer that will now act as the return value from the <emphasis class="code">main</emphasis> function. If you recall from line number 2 that we had mentioned the return type of the <emphasis class="code">main</emphasis> function to be an integer, and 0 is of type integer. Hence this value, 0, is returned as the <emphasis class="bold">exit status</emphasis> of the program.
	</li>
</ul>
</div>

<div class="para">
	The next line we encounter is

{% highlight cpp %}
}
{% endhighlight %}

This is a closing curly bracket which implies the end of the scope of function <emphasis class="code">main</emphasis>. The scope of the <emphasis class="code">main</emphasis> function begins at line number 2, with an opening curly bracket and it ends on this line, at the closing curly bracket.
</div>

</section>

<section>
	<a class="button" href="{% post_url /codelearn/courses/c101/2014-01-27-c101-codebud %}">Read Next</a>
</section>

{% include /ui/keywords.html %}