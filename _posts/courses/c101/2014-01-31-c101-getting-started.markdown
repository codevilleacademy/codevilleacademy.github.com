---
layout: course_page
title: "Getting Started"
category:	c101
---
<h2 id="getting-started" class="clay">{{page.title}}</h2>
<hr class="large orange" />
<ul id="agenda"></ul>
<p>The best way to learn any programming language is to practice it; and in order to practice it you need to have an environment set up on your machine. Every programming language has its own environment requirements. These requirements vary depending on the operating system. This tutorial will help you set up a working environment on Linux (Ubuntu). So, lets get started ...</p>

<br/>
<h3 id="requirements" class="clay">Requirements</h4>
<hr class="orange medium"/>
<p>To create a development environment for C language, we will require the following:</p>
<ol>
	<li><span class="italic">A Text editor</span> - A place where we will write our C programs.</li>
	<li><span class="italic">A compiler</span> - A simple software that will change your program into something magical.</li>
</ol>
<p>So let us start setting up one by one. (Here we assume you have a Linux or Unix based operating system)</p>

<br/>
<h3 id="text-editor" class="clay">Text Editor</h3>
<hr class="orange medium"/>
<p>There are lots of good text editors in the market. You can use any one of your choice, it is not mandatory to use one. If you do not have any preference of your own then we recommend you to use <span class="italic">"Sublime Text"</span>. This editor is very smooth and has a lot of in-built functionalities and features, like</p>
<ul>
	<li>Auto-completion</li>
	<li>Syntax Highlighting</li>
	<li>Quick Suggestions</li>
	<li>Distraction Free mode</li>
	<li>Quick Goto</li>
</ul>

<br/>
<h3 id="compiler" class="clay">Compiler</h3>
<hr class="orange medium"/>
<p>There are various C compilers present in the market like GNU C Compiler, Turbo C, Borland C, etc. Instead of working with varied compilers we will focus to work on the most standard compiler, the <span class="italic">GNU Compiler Collection (GCC) - the GNU C Compiler</span>.</p>

<p>Before proceeding to the next tutorial, make sure you have a text editor to work with and GCC installed on your system. If so then you are ready to go on the next tutorial. See you there!</p>

<br/>
<a class="btn btn-default" href="{% post_url /courses/c101/2014-01-30-c101-computer-fundamentals %}">Read Next</a>

<!--div class="code-statement clay">
	<p class="code-question">
		Write a program that outputs "Hello, World\n".
	</p>
	<p class="code-form">include code_upload_form.html qid="c101:1" </p>
</div-->

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