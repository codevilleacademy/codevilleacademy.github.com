---
layout: course_page
title: "Variables and Datatypes"
category: c101
---
<h2 id="first-program" class="clay">{{page.title}}</h2>
<hr class="large orange" />

<ul id="agenda"></ul>

<h3 id="program-and-problem">Variables</h3>
<hr class="large orange" />
<p><span class="italic bold orange">Variables</span> are the basic data objects that are changed continuously during the program execution. Thus we infer that the variable is an entity in C language that are used to store and retrieve some values that we may require during our program execution.<p>
<p>Every variable is identified by its variable name. This variable name are bounded by some rule, this implies, that you can give your variables any name unless they break the variable naming convention.</p>

<br/>
<p class="italic bold dark-red">Variable Naming conventions:</p>
<ol class="list">
	<li>Variable names are made up of letters, digits and underscore ('_')</li>
	<li>The first character of the variable name should be a letter or an underscore ('_')</li>
	<li>Following letters can be anything and any combination of letters, digits and underscore ('_')</li>
	<li>Variable names should not be one of the keywords of C, because they are reserved for specific purpose in C.</li>
</ol>
<div class="arial note purple">
	<p class="text-center"><span class="black bold">List of C keywords</span></p>
	<table class="table black">
		<tr>
			<td>auto</td>
			<td>double</td>
			<td>int</td>
			<td>struct</td>
		</tr>
		<tr>
			<td>break</td>
			<td>else</td>
			<td>long</td>
			<td>switch</td>
		</tr>
		<tr>
			<td>case</td>
			<td>enum</td>
			<td>register</td>
			<td>typedef</td>
		</tr>
		<tr>
			<td>char</td>
			<td>extern</td>
			<td>return</td>
			<td>union</td>
		</tr>
		<tr>
			<td>const</td>
			<td>float</td>
			<td>short</td>
			<td>unsigned</td>
		</tr>
		<tr>
			<td>continue</td>
			<td>for</td>
			<td>signed</td>
			<td>void</td>
		</tr>
		<tr>
			<td>default</td>
			<td>goto</td>
			<td>sizeof</td>
			<td>volatile</td>
		</tr>
		<tr>
			<td>do</td>
			<td>if</td>
			<td>static</td>
			<td>while</td>
		</tr>
	</table>
</div><br/>

<div class="tip green-blue">
	<ol class="list">
	<li>To improve readability of your program, the variable names should be meaningful, specific to purpose and preferably long.</li>
	<li>Variables are case sensitive, that is, Upper case and Lower case letters are distinct. Hence 'V' and 'v' are two different names.</li>
	<li>Tradition C practice is to use lower case for variable names.</li>
</div>


<br/>
<h3 id="program-and-problem">Data Types and Sizes</h3>
<hr class="large orange" />
<p><span class="italic bold orange">Data Type</span> in simple terms is "type of the data". Data type of a variable tells whit type of data will be stored in the variable.</p>
<p>There are only few data types in C, these are</p>
<table class="table black">
	<thead>
		<td>Data Type</td>
		<td>Size</td>
		<td>Description</td>
	</thead>
	<tr>
		<td>char</td>
		<td>1 Byte</td>
		<td>Holds one character in it</td>
	</tr>
	<tr>
		<td>int</td>
		<td>Compiler Dependent</td>
		<td>Holds one integer in it</td>
	</tr>
	<tr>
		<td>float</td>
		<td>4 Bytes</td>
		<td>Holds one single-precision floating point decimal number in it</td>
	</tr>
	<tr>
		<td>double</td>
		<td>8 Bytes</td>
		<td>Holds one double-precision floating point decimal number in it</td>
	</tr>
</table>

<p>The way to declare a variable looks like this:</p>

{% highlight cpp %}
data_type variable1, variable2, variable3 ...;
{% endhighlight %}

<p>For example,</p>
{% highlight cpp %}
int var_1, count, age;
{% endhighlight %}

<p>Above example declares 3 variables namely, var_1, count and age of type "int"; which implies that we can store integer values in these variables.</p>

<p>
	Along with data types, we have optional <span class="bold italic orange">qualifiers</span>. These qualifiers areapplied to the basic data types in order to enhance their characteristics. Following are the qualifiers available:
</p>

<p class="text-center"><span class="black bold">Qualifiers in C</span></p>
<table class="table black">
	<tr>
		<td>short</td>
		<td>long</td>
		<td>signed</td>
		<td>unsigned</td>
	</tr>
</table>

<br/>
<h3 id="qualifiers">Qualifiers and examples</h3>
<hr class="large orange" />
<p>When qualifiers are applied to basic data types, there are some changes in their characteristics.</p>

<p class="italic clay bold">short and long:</p>
<p>short and long qualifiers when applied to basic data type changes the size of the data type. When qualifier short is applied to int, it changes the size of variable to 2 bytes, and when qualifier long is applied to int, it changes size of variable to 4 bytes.</p>
{% highlight cpp %}
short int var_1;
long int var_2;
{% endhighlight %}

<p>In above example, size of variable var_1 is 2 bytes and size of variable var_2 is 4 bytes.</p>

<p class="italic clay bold">signed and unsigned:</p>
<p>signed and unsigned qualifiers when applied to basic data types does not alter the length of the variable, instead it changes the range of the values that can be stored in it. As the name suggests, when we apply "signed" to a basic data type then we can store both positive and negative values in that variable. On the other hand, when we apply "unsigned" then we are restricted to store only non-negative values in the variable.</p>

<div class="arial note purple">
	<ol class="list">
		<li>By default "signed" qualifier is applied to all data types.</li>
	</ol>
</div>

<br/>
<div class="tip green-blue">
	<p>
		We can apply different combinations of qualifiers to basic data types. For example,
{% highlight cpp %}
unsigned long int var_3;
{% endhighlight %}
Above example makes size of var_3 to be 4 bytes and it allows only non-negative values to be stored in it.
	</p>
</div>

<br/>
<div class="arial bold italic text-center clay thought"><span class="orange">Practice</span> will make you <span class="orange">perfect</span>.</div>

<br/>
<a class="btn btn-default" href="">Read Next</a>