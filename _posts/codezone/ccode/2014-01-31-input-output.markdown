---
layout: session-page
title: "Input and Output"
category: ccode
---

<div class="session-title">
	{{page.title}}
</div>

<section>
<div class="question">
	<div class="para">Write a program to take input an integer and print it as it is followed by a newline character.</div>
</div>
{% include code-upload.html 
	qid="cc:1"
%}
<div class="explanation">
	<div class="actions text-right">
		<button class="btn link-button explanation-button">How to?</button>
		<a href="{{ "/files/ccode/cc1/in" | prepend: site.baseurl }}" class="btn link-button">Download input</a>
		<a href="{{ "/files/ccode/cc1/cc1.c" | prepend: site.baseurl }}" class="btn link-button">Click for solution</a>
	</div>
	<div class="explanation-content">
		{% include steps.html %}
	</div>
</div>