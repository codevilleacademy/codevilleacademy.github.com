---
layout: lecture-session
title: "Getting Started"
category:	c101
---

<div class="lecture-title">
	{{page.title}}
</div>

<section>
	<div class="para">
		The best way to learn any programming language is to practice it, and for practicing you require to have an environment set up on your machine. Every programming language has its own environment requirements. These requirements vary depending on the operating system. This tutorial will help you to set up a working environment on <emphasis class="highlight">Linux (Ubuntu)</emphasis>. So, lets get started ...
	</div>
</section>

{% include agenda.html %}

<section>
	<div id="requirements" class="section-title">
		Requirements
	</div>
	<div class="para">
		To create a development environment for C language, we will require the following:
		<ol>
			<li>
				<emphasis class="highlight">Text Editor</emphasis> - Software where you will write your C programs.
			</li>
			<li>
				<emphasis class="highlight">Compiler</emphasis> - Software that will change your program into something executable.
			</li>
		</ol>
	</div>
	<div class="para">
		So let us start setting up one by one. (Here we assume you have a Linux or Unix based operating system)
	</div>
</section>

<section>
	<div id="text-editor" class="section-title">Text Editor</div>
	<div class="para">
		There are lot of good text editors in the market. You can use any one of your choice, it is not mandatory to use specific one. If you do not have any preference of your own then we recommend you to use <emphasis class="highlight">Sublime Text</emphasis>. This editor is very smooth and has a lot of in-built functionalities and features, like
		<ul>
			<li>Auto-completion</li>
			<li>Syntax Highlighting</li>
			<li>Quick Suggestions</li>
			<li>Distraction Free mode</li>
			<li>Quick Goto</li>
		</ul>
	</div>
</section>

<section>
	<div id="compiler" class="section-title">Compiler</div>
	<div class="para">
		There are various C compilers present in the market like GNU C Compiler, Turbo C, Borland C etc. Instead of working with varied compilers we will focus to work on the most standard compiler, that is the GNU Compiler Collection (GCC) - the <emphasis class="highlight">GNU C Compiler</emphasis>.
	</div>
	<div class="para">
		Before proceeding to the next tutorial, make sure you have a text editor to work with and GCC installed on your system. If so then you are ready to go on the next tutorial. See you there!
	</div>
</section>

<section>
	<a class="button" href="{% post_url /courses/c101/2014-01-29-c101-history-of-c %}">Read Next</a>
</section>

{% include keywords.html %}

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